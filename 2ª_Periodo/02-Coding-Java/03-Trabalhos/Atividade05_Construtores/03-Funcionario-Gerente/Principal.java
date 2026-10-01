public class Principal {

    public static void main(String[] args) {

        Funcionario funcionario = new Funcionario(
                "Carlos",
                3000
        );

        Gerente gerente = new Gerente(
                "Ana",
                7000,
                "Financeiro"
        );

        funcionario.exibirDados();

        System.out.println();

        gerente.exibirDados();
    }
}
