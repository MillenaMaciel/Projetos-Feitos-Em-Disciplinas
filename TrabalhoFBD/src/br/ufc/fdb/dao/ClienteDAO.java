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
import br.ufc.fdb.pojo.Cliente;
import br.ufc.fdb.pojo.Produto;

	public class ClienteDAO {
		private Connection conection;	
 
		public ClienteDAO() {
			conection = new ConectionFactory().getConection();
		}
		
		public Cliente buscarClienteCPF(int cpf) {
			if ( cpf > 0 ) {
				
				String sql = "SELECT*  FROM cliente cpf=?";
				try {
					PreparedStatement stml = conection.prepareStatement(sql);
					stml.setInt(1, cpf);
					ResultSet rs = stml.executeQuery(sql);
					Cliente c = new Cliente();
					c.setCpf(rs.getInt("cpfCliente"));
					c.setNome(rs.getString("nome"));
					c.setTelefone(rs.getString("telefone"));
					stml.close();
					rs.close();	
					return c;
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
			
			return null;
		}
		
		public List<Cliente> listAll(){
			
			List<Cliente> clientes = new ArrayList<Cliente>();
			
			String sql = "SELECT*  FROM cliente";
			try {
				Statement stm = conection.createStatement();
				ResultSet rs = stm.executeQuery(sql);
				while (rs.next()) {
					Cliente c = new Cliente();
					c.setCpf(rs.getInt("cpfCliente"));
					c.setNome(rs.getString("nome"));
					c.setTelefone(rs.getString("telefone"));
					clientes.add((c));
				}
				stm.close();
				rs.close();	
				return clientes;
			} catch (SQLException e) {
				e.printStackTrace();
			}
			
			return null;
		}

		
		public void addCliente(String nome,int cpfCliente,String telefone){
			String sql = "insert into cliente(cpfcliente, nome, telefone)" + "values (?,?,?)";
			
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				stml.setInt(1, cpfCliente);
				stml.setString(2, nome);
				stml.setString(3, telefone);
				
				stml.execute();
				stml.close();
				
			} catch (SQLException e) {
				throw new RuntimeException(e);
			}
			
		}
		
		public void removerCliente(int cpfCliente) {
			
			String sql = "DELETE FROM cliente"
					+ " WHERE cpfCliente = ?";	
			
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				stml.setInt(1, cpfCliente);
				stml.execute();
				stml.close();
				JOptionPane.showMessageDialog(null, "Cliente removido com sucesso");
				System.out.println("Cliente removido com sucesso");
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}	
					
		public void atualizar(int cpfCliente ,String nome,String telefone) {
			
			String sql = "UPDATE cliente set nome =?,telefone=?"
						+ " WHERE cpfCliente = ?";	
				
			try {
				PreparedStatement stml = conection.prepareStatement(sql);
				
				stml.setString(1, nome);
				stml.setString(2, telefone);
				stml.setInt(3, cpfCliente);	
				
				stml.execute();
				stml.close();
				//JOptionPane.showMessageDialog(null, "Cliente atualizado com sucesso");
					System.out.println("deu certo");
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		
		
		public String listaDeClientes(){
			String clien = "";
			
			for (Cliente cliente : this.listAll()) {
				clien += cliente.getNome() + " \n";
			}
			
			return clien;
		}

				
	}

		
		
