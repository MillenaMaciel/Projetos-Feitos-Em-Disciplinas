package br.ufc.fdb.pojo;

public class Produto {
	private int idProduto ;
	private String nome;
	private String descricao;
	private double preco;
	private int qtdproduto;
	
	
	public Produto( String nome, double preco, int quantidade) {
		this.nome = nome;
		this.preco = preco;
		this.qtdproduto = quantidade;
	}
	
	public Produto() {
		// TODO Auto-generated constructor stub
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getPreco() {
		return preco;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public int getQuantidade() {
		return qtdproduto;
	}

	public void setQuantidade(int quantidade) {
		this.qtdproduto = quantidade;
	}

	public int getId() {
		return idProduto;
	}

	public void setId(int id) {
		this.idProduto = id;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	
	

}
