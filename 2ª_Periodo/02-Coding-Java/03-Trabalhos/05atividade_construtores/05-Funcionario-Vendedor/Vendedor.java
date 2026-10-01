public class Vendedor extends Funcionario {

    // Atributo novo da classe Vendedor
    private double percentualComissao;

    // Sem salário informado: super(nome, cpf) deixa o salário em 0
    public Vendedor(String nome, String cpf, double percentualComissao) {
        super(nome, cpf);
        this.percentualComissao = percentualComissao;
    }

    // Com salário informado
    public Vendedor(String nome, String cpf, double salario, double percentualComissao) {
        super(nome, cpf, salario);
        this.percentualComissao = percentualComissao;
    }

    // Mostra os dados do pai e depois a comissão
    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.println("Comissão: " + percentualComissao + "%");
    }
}
