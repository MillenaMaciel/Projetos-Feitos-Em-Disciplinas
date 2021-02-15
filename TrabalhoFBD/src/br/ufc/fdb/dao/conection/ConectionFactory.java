package br.ufc.fdb.dao.conection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConectionFactory {

	public Connection getConection() {
		
		try {
			Class.forName("org.postgresql.Driver");
			return DriverManager.getConnection("jdbc:postgresql://localhost:5432/TrabalhoFbd", "postgres","92441205");
		} catch (SQLException e) {
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		return null;
		
		
	}
}
