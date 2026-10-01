public class Principal {

    public static void main(String[] args) {
        ContaBancaria c1 = new ContaBancaria();
        ContaBancaria c2 = new ContaBancaria(1001, "Kaue");
        ContaBancaria c3 = new ContaBancaria(1002, "Joao", 2500);

        c1.exibirDados();
        System.out.println();
        c2.exibirDados();
        System.out.println();
        c3.exibirDados();
    }
}
