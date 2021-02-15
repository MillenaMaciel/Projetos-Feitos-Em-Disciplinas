package br.ufc.fdb.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.swing.JOptionPane;

import br.ufc.fdb.dao.conection.ConectionFactory;
import br.ufc.fdb.pojo.Cliente;
import br.ufc.fdb.pojo.Produto;

public class VendaDAO {
	private Connection conection;	
	private ProdutoDAO produtoDAO = new ProdutoDAO();
	public VendaDAO() {
		new ConectionFactory();
		conection = new ConectionFactory().getConection();
	}
		
		public void venderProd(int cpfCliente,int idProduto,String data){
			String sql = "insert into venda" + "(cpfcliente, idproduto,data)" + "values (?,?,?)";
			
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				
				stml.setInt(1, cpfCliente);
				stml.setInt(2, idProduto);
				stml.setString(3, data);
				
					
				
				stml.execute();
				stml.close();
			} catch (SQLException e) {
				
				throw new RuntimeException(e);
			}
	}
		
		
	public void atualizarEstoque(int id, int quantidade ) {
				
				String sql = "UPADTE produtos" + 
							" Set quantidade =?"
							+ " WHERE id_produto = ? ";	
					
				try {
					PreparedStatement stml = conection.prepareStatement(sql);
					stml.setInt(1, quantidade);
					stml.setInt(2, id);
						
					stml.execute();
					stml.close();
					JOptionPane.showMessageDialog(null, "Estoque atualizado com sucesso");
						
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}  
	
	
	
			
	
}
