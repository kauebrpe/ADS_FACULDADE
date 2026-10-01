public class Gerente extends Funcionario {

    // Atributo novo da classe Gerente
    private String departamento;

    // Usa super(...) para chamar o construtor de Funcionario
    public Gerente(String nome, double salario, String departamento) {
        super(nome, salario);
        this.departamento = departamento;
    }

    // Mostra os dados do pai e depois o departamento
    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.println("Departamento: " + departamento);
    }
}
