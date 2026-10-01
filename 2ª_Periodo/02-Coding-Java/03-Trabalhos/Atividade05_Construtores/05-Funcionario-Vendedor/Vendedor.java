public class Vendedor extends Funcionario {

    private double percentualComissao;

    public Vendedor(String nome, String cpf, double percentualComissao) {
        super(nome, cpf);
        this.percentualComissao = percentualComissao;
    }

    public Vendedor(String nome, String cpf, double salario, double percentualComissao) {
        super(nome, cpf, salario);
        this.percentualComissao = percentualComissao;
    }

    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.println("Comissao: " + percentualComissao + "%");
    }
}
