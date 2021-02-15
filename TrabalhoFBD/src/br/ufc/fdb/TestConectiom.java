package br.ufc.fdb;

import java.sql.Connection;
import java.sql.SQLException;

import br.ufc.fdb.dao.conection.ConectionFactory;

public class TestConectiom {

	public static void main(String[] args) throws SQLException {
		
		ConectionFactory conectionFactory = new ConectionFactory();
		Connection conecion = conectionFactory.getConection();
	if(conecion != null) {
		System.out.println("Conexão aberta");
		conecion.close();
	}
	
	
}
	
	
}
