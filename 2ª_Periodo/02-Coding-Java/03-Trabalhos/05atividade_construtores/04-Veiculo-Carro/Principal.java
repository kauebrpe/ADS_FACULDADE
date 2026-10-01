public class Principal {

    public static void main(String[] args) {
        Veiculo v1 = new Veiculo();                          // padrão
        Veiculo v2 = new Veiculo("Fiat", "Uno");             // marca e modelo
        Veiculo v3 = new Veiculo("Toyota", "Corolla", 2024); // marca, modelo e ano
        Carro c1 = new Carro("Honda", "Civic", 2023, 4);     // carro completo

        v1.exibirDados();
        System.out.println();
        v2.exibirDados();
        System.out.println();
        v3.exibirDados();
        System.out.println();
        c1.exibirDados();
    }
}
