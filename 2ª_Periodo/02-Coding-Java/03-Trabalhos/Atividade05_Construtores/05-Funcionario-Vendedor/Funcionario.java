public class Funcionario {

    protected String nome;
    protected String cpf;
    protected double salario;

    public Funcionario() {
        this("Não informado", "000.000.000-00", 0);
    }

    public Funcionario(String nome, String cpf) {
        this(nome, cpf, 0);
    }

    public Funcionario(String nome, String cpf, double salario) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + cpf);
        System.out.println("Salário: " + salario);
    }
}
