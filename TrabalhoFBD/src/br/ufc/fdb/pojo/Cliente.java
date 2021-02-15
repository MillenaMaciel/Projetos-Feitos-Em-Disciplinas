package br.ufc.fdb.pojo;

public class Cliente {
	private int cpfCliente;
	private String nome;
	private String telefone;
	
	
	public Cliente(String nome, int cpf,String telefone) {
		this.cpfCliente = cpf;
		this.nome = nome;
		this.telefone = telefone;
	}
	
	public Cliente() {
	}

	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getCpf() {
		return cpfCliente;
	}
	public void setCpf(int cpfCliente) {
		this.cpfCliente = cpfCliente;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	
}
