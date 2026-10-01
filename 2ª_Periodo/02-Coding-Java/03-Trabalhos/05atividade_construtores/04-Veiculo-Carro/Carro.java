public class Carro extends Veiculo {

    // Atributo novo da classe Carro
    private int quantidadePortas;

    // Usa super(...) para inicializar marca, modelo e ano
    public Carro(String marca, String modelo, int ano, int quantidadePortas) {
        super(marca, modelo, ano);
        this.quantidadePortas = quantidadePortas;
    }

    // Mostra os dados do pai e depois as portas
    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.println("Portas: " + quantidadePortas);
    }
}
