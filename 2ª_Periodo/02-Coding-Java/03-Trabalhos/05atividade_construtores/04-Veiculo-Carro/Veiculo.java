public class Veiculo {

    // Atributos (protected: a classe filha pode acessar)
    protected String marca;
    protected String modelo;
    protected int ano;

    // Construtor padrão
    public Veiculo() {
        this("Sem Marca", "Sem Modelo", 0);
    }

    // Construtor com marca e modelo: ano começa em 0
    public Veiculo(String marca, String modelo) {
        this(marca, modelo, 0);
    }

    // Construtor completo
    public Veiculo(String marca, String modelo, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    // Mostra os dados do veículo
    public void exibirDados() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Ano: " + ano);
    }
}
