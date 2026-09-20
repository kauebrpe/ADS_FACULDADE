public class IdadePessoa {

    private String nome;
    private int idade;

    // Getter de nome
    public String getNome() {
        return nome;
    }

    // Setter de nome
    public void setNome(String nome) {
        this.nome = nome;
    }

    // Getter de idade
    public int getIdade() {
        return idade;
    }

    // Setter de idade
    public void setIdade(int idade) {
        this.idade = idade;
    }

    // Método para verificar idade
    public void verificarIdade() {
        if (idade >= 18) {
            System.out.println(nome + " é maior de idade.");
        } else {
            System.out.println(nome + " é menor de idade.");
        }
    }
}
