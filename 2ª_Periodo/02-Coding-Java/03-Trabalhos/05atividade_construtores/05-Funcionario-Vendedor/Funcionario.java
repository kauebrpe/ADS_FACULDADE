public class Funcionario {

    // Atributos (protected: a classe filha pode acessar)
    protected String nome;
    protected String cpf;
    protected double salario;

    // Construtor padrão
    public Funcionario() {
        this("Não informado", "000.000.000-00", 0);
    }

    // Construtor com nome e cpf: salário começa em 0
    public Funcionario(String nome, String cpf) {
        this(nome, cpf, 0);
    }

    // Construtor completo
    public Funcionario(String nome, String cpf, double salario) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
    }

    // Mostra os dados do funcionário
    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + cpf);
        System.out.println("Salário: " + salario);
    }
}
