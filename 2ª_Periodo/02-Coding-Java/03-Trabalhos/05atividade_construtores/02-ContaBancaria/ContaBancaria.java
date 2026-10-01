public class ContaBancaria {

    // Atributos
    private int numero;
    private String titular;
    private double saldo;

    // Construtor padrão: número 0, sem titular e saldo 0
    public ContaBancaria() {
        this(0, "Sem Titular", 0);
    }

    // Construtor com número e titular: saldo começa em 0
    public ContaBancaria(int numero, String titular) {
        this(numero, titular, 0);
    }

    // Construtor completo: é o único que atribui os valores
    public ContaBancaria(int numero, String titular, double saldo) {
        this.numero = numero;
        this.titular = titular;
        this.saldo = saldo;
    }

    // Mostra os dados da conta
    public void exibirDados() {
        System.out.println("Número: " + numero);
        System.out.println("Titular: " + titular);
        System.out.println("Saldo: " + saldo);
    }
}
