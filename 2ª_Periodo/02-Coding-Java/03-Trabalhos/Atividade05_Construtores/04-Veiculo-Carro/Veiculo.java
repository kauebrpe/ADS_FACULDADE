public class Veiculo {

    protected String marca;
    protected String modelo;
    protected int ano;

    public Veiculo() {
        this("Sem Marca", "Sem Modelo", 0);
    }

    public Veiculo(String marca, String modelo) {
        this(marca, modelo, 0);
    }

    public Veiculo(String marca, String modelo, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    public void exibirDados() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Ano: " + ano);
    }
}
