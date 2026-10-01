public class Funcionario {

    protected String nome;
    protected double salario;

    public Funcionario() {
        this("Não informado", 0);
    }

    public Funcionario(String nome) {
        this(nome, 0);
    }

    public Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Salário: " + salario);
    }
}
