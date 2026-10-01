public class Principal {

    public static void main(String[] args) {
        ContaBancaria c1 = new ContaBancaria();                 // padrão
        ContaBancaria c2 = new ContaBancaria(1001, "Kauê");     // número e titular
        ContaBancaria c3 = new ContaBancaria(1002, "João", 2500); // número, titular e saldo

        c1.exibirDados();
        System.out.println();
        c2.exibirDados();
        System.out.println();
        c3.exibirDados();
    }
}
