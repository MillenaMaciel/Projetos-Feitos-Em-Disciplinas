package Menu;

import java.util.Scanner;

import br.ufc.fdb.dao.ClienteDAO;
import br.ufc.fdb.dao.ProdutoDAO;
import br.ufc.fdb.dao.VendaDAO;

public class Menu {
	public static void main(String[] args) {
		boolean fim = false;
		
		ClienteDAO clienteDAO = new ClienteDAO();
		ProdutoDAO produtoDAO = new  ProdutoDAO();
		VendaDAO vendaDAO = new VendaDAO();
		
		do{

			System.out.print("Digite a sua opção ~> ");
			System.out.println("| 1 | Cadastrar cliente");
			System.out.println("| 2 | Remover Cliente");
			System.out.println("| 3 | Atualizar Cliente");
			System.out.println("| 4 | Lista Cliete");
			System.out.println("| 5 | cadastrar Produto");
			System.out.println("| 6 | Remover Produto");
			System.out.println("| 7 | Atualizar produto");
			System.out.println("| 8 | Lista de Produtos");
			System.out.println("| 9 | Vender ");
			System.out.println("| 0 | Sair");
			
			
			Scanner scan = new Scanner(System.in);
			int opcao;
			opcao = scan.nextInt();
			scan.nextLine();


		
			
			switch(opcao) {
			case 0: 
				return;
				
			
			case 1:
				
				System.out.println("Digite nome");
				String nome = scan.nextLine();
				System.out.println("Digite cpf");
				int cpf = scan.nextInt();
				System.out.println("Digite telefone");
				String telefone = scan.next();
				System.out.println(nome + cpf + telefone);
				clienteDAO.addCliente(nome, cpf,telefone);
				System.out.println("Cliente Adicionado");
				
			break;
			
			case 2:
				System.out.println("Digite cpf");
				int cpf1 = scan.nextInt();
				scan.nextLine();
				clienteDAO.removerCliente(cpf1);
				System.out.println("Cliente removido com sucesso");
			break;
			
			case 3:
				System.out.println("Digite cpf ");
				int cpfATT = scan.nextInt();
				scan.nextLine();
				System.out.println("Digite novo nome");
				String novoNome = scan.nextLine();
				System.out.println("Digite novo telefone");
				String novoTelefone = scan.next();
				clienteDAO.atualizar(cpfATT, novoNome, novoTelefone);
				System.out.println("Dados atualizado com sucesso");
				
			break;
			
			case 4:
				System.out.println(clienteDAO.listaDeClientes());
				
				break;
			
			case  5:
				
				System.out.println("Digite nome do produto");
				String nomeProd = scan.nextLine();
				System.out.println("Digite a descricao do produto");
				String descricao = scan.nextLine();
				System.out.println("Digite preço");
				double preco = scan.nextDouble();
				System.out.println("Digite Quantidade");
				int qtdproduto = scan.nextInt();
				produtoDAO.addproduto(nomeProd,descricao, preco, qtdproduto);
				System.out.println("Produto Adicionado com sucesso");
			break;
			
			case 6:
				System.out.println("Digite Id produto");
				int idProduto = scan.nextInt();
				scan.nextLine();
				produtoDAO.removerProduto(idProduto);
				
				
			break;
			
			case 7:
				System.out.println("Digite Id do produto a ser atualizado");
				int id = scan.nextInt();
				scan.nextLine();
				System.out.println("Digite novo nome");
				String novoNomeprod = scan.nextLine();
				System.out.println("Digite nova descricao");
				String novaDescricao = scan.nextLine();
				System.out.println("Digite novo preco");
				double novoPreco = scan.nextDouble();
				produtoDAO.atualizar(id, novoNomeprod, novaDescricao, novoPreco);
				System.out.println("produto atualizadoS");
			break;
			
			case 8:
				System.out.println(produtoDAO.listaDeProdutos());
			break;
			
			case 9:
				
				System.out.println("Digite cpf cliente");
				int cpfCliente = scan.nextInt();
				scan.nextLine();
				System.out.println("Digite Id Produto");
				int idProdVenda = scan.nextInt();
				scan.nextLine();
				System.out.println("Digite data da venda");
				String dataVenda = scan.nextLine();
				
				vendaDAO.venderProd(cpfCliente, idProdVenda, dataVenda);
				System.out.println("produto vendido");
				
				
			break;	
			
			default:break;
			}
			
		}while(true);

	}
	
}
