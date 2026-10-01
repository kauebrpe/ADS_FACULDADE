public class Produto {

    // Atributos
    private String nome;
    private double preco;
    private int quantidade;

    // Construtor padrão: chama o construtor completo com valores padrão
    public Produto() {
        this("Produto Genérico", 0.0, 0);
    }

    // Construtor com nome e preço: quantidade começa em 0
    public Produto(String nome, double preco) {
        this(nome, preco, 0);
    }

    // Construtor completo: é o único que atribui os valores
    public Produto(String nome, double preco, int quantidade) {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
    }

    // Mostra os dados do produto
    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Preço: R$ " + preco);
        System.out.println("Quantidade: " + quantidade);
    }
}
