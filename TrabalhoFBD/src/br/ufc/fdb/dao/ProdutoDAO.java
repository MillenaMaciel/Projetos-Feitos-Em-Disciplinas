package br.ufc.fdb.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import javax.swing.JOptionPane;

import br.ufc.fdb.dao.conection.ConectionFactory;
import br.ufc.fdb.pojo.Produto;

public class ProdutoDAO {
	private Connection conection;
		
	public ProdutoDAO() {
		new ConectionFactory();
		conection = new  ConectionFactory().getConection();
	}
	
	public Produto buscarProdutoId(int idProduto) {
		if (idProduto > 0) {
			
			String sql = "SELECT*  FROM produto where idProduto=?";
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				stml.setInt(1, idProduto);
				ResultSet rs = stml.executeQuery(sql);
				Produto p = new Produto();
				p.setId(rs.getInt("idProduto"));
				p.setNome(rs.getString("nome"));
				p.setPreco(rs.getDouble("preco"));
				p.setQuantidade(rs.getInt("qtdproduto"));
				stml.close();
				rs.close();	
				return p;
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		
		return null;
	}
	
	public List<Produto> listAll(){
		
		List<Produto> produtos = new ArrayList<Produto>();
		
		String sql = "SELECT*  FROM produto";
		try {
			Statement stm = conection.createStatement();
			ResultSet rs = stm.executeQuery(sql);
			while (rs.next()) {
				Produto p = new Produto();
				p.setId(rs.getInt("idProduto"));
				p.setNome(rs.getString("nome"));
				p.setDescricao(rs.getString("descricao"));
				p.setPreco(rs.getDouble("preco"));
				p.setQuantidade(rs.getInt("qtdproduto"));
				produtos.add((p));
			}
			stm.close();
			rs.close();	
			return produtos;
		} catch (SQLException e) {
			e.printStackTrace();
		}
		
		return null;
	}

	
	
	public void addproduto(String nome,String descricao,double preco,int qtdProduto) {
		
		String sql = "insert into produto" + "(nome,descricao,preco,qtdproduto)" + "values(?,?,?,?)";
		
		try {
			PreparedStatement stml = conection.prepareStatement(sql);
			
			stml.setString(1, nome);
			stml.setString(2, descricao);
			stml.setDouble(3, preco);
			stml.setInt(4, qtdProduto);
			
			stml.execute();
			stml.close();
		} catch (SQLException e) {
			throw new RuntimeException(e);
		}
	}
	
	public void removerProduto(int idProduto) {
		if (idProduto > 0) {
			String sql = "DELETE FROM produto"
					+ " WHERE idProduto = ?";	
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				stml.setInt(1, idProduto);
				stml.execute();
				stml.close();
				//JOptionPane.showMessageDialog(null, "Produto removido com sucesso");
				System.out.println("produto removido com sucesso");
				
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		
	}	
	
	public void atualizar(int id,String nome,String descricao,double preco) {
		
		String sql = "UPDATE produto set nome=?, descricao=?, preco=?"
					+ " WHERE idProduto=?";	
			
		try {
			PreparedStatement stml = conection.prepareStatement(sql);
			stml.setString(1, nome);
			stml.setString(2, descricao);
			stml.setDouble(3, preco);
			stml.setInt(4, id);
			
			stml.execute();
			stml.close();
			JOptionPane.showMessageDialog(null, "produto atualizado com sucesso");
				
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
	
	public String listaDeProdutos(){
		String prod = "";
		
		for (Produto produto : this.listAll()) {
			prod += produto.getNome() + " \n";
		}
		
		return prod;
	}
	
	
}
