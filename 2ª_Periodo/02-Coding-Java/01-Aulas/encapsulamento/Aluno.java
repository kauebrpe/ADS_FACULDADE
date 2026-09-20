public class Aluno {

    private String nome;
    private double[] notas;

    // Getter de nome
    public String getNome() {
        return nome;
    }

    // Setter de nome
    public void setNome(String nome) {
        this.nome = nome;
    }

    // Getter de notas
    public double[] getNotas() {
        return notas;
    }

    // Setter de notas
    public void setNotas(double[] notas) {
        this.notas = notas;
    }

    // Método para calcular média
    public double calcularMedia() {
        double soma = 0;

        for (int i = 0; i < notas.length; i++) {
            soma += notas[i];
        }

        return soma / notas.length;
    }
}
