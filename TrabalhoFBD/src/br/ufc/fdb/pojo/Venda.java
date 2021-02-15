package br.ufc.fdb.pojo;

public class Venda {
	private int idVenda;
	private String cpfCliente;
	private int idProduto;
	private String data;
	private double totalVenda;
	
	
	public Venda() {
		
	}
	
	public Venda(int idVenda, String cpfCliente, int idProduto, String data, double totalVenda) {
		
		this.idVenda = idVenda;
		this.cpfCliente = cpfCliente;
		this.idProduto = idProduto;
		this.data = data;
		this.totalVenda = totalVenda;
	}
	public int getIdProduto() {
		return idProduto;
	}

	public void setIdProduto(int idProduto) {
		this.idProduto = idProduto;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}

	public double getTotalVenda() {
		return totalVenda;
	}



	public void setTotalVenda(double totalVenda) {
		this.totalVenda = totalVenda;
	}


	public int getIdVenda() {
		return idVenda;
	}


	public void setIdVenda(int idVenda) {
		this.idVenda = idVenda;
	}


	public String getCpfCliente() {
		return cpfCliente;
	}


	public void setCpfCliente(String cpfCliente) {
		this.cpfCliente = cpfCliente;
	}
	
	
	
	
}
