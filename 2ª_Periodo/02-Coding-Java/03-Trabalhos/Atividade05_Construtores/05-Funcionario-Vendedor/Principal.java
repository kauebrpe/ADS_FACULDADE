public class Principal {

    public static void main(String[] args) {
        Funcionario f1 = new Funcionario();
        Funcionario f2 = new Funcionario("Kauê", "111.222.333-44");
        Funcionario f3 = new Funcionario("João", "555.666.777-88", 3500);

        Vendedor v1 = new Vendedor("Pedro", "999.888.777-66", 10);
        Vendedor v2 = new Vendedor("Maria", "123.456.789-00", 4000, 15);

        f1.exibirDados();
        System.out.println();
        f2.exibirDados();
        System.out.println();
        f3.exibirDados();
        System.out.println();
        v1.exibirDados();
        System.out.println();
        v2.exibirDados();
    }
}
