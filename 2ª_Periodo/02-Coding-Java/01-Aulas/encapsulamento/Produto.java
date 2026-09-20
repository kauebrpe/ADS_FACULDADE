public class Produto {

    private String nome;
    private double preco;

    // Getter de nome
    public String getNome() {
        return nome;
    }

    // Setter de nome
    public void setNome(String nome) {
        this.nome = nome;
    }

    // Getter de preco
    public double getPreco() {
        return preco;
    }

    // Setter de preco
    public void setPreco(double preco) {
        this.preco = preco;
    }

    // Método para aplicar desconto
    public void aplicarDesconto(double percentual) {
        preco = preco - (preco * percentual / 100);
    }
}
