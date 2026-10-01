public class Produto {

    private String nome;
    private double preco;
    private int quantidade;

    public Produto() {
        this("Produto Genérico", 0.0, 0);
    }

    public Produto(String nome, double preco) {
        this(nome, preco, 0);
    }

    public Produto(String nome, double preco, int quantidade) {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Preço: R$ " + preco);
        System.out.println("Quantidade: " + quantidade);
    }
}
