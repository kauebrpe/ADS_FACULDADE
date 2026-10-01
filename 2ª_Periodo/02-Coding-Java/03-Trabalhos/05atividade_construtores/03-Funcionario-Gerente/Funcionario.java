public class Funcionario {

    // Atributos (protected: a classe filha pode acessar)
    protected String nome;
    protected double salario;

    // Construtor padrão
    public Funcionario() {
        this("Não informado", 0);
    }

    // Construtor só com nome: salário começa em 0
    public Funcionario(String nome) {
        this(nome, 0);
    }

    // Construtor completo
    public Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    // Mostra os dados do funcionário
    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Salário: " + salario);
    }
}
