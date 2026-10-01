public class ContaBancaria {

    private int numero;
    private String titular;
    private double saldo;

    public ContaBancaria() {
        this(0, "Sem Titular", 0);
    }

    public ContaBancaria(int numero, String titular) {
        this(numero, titular, 0);
    }

    public ContaBancaria(int numero, String titular, double saldo) {
        this.numero = numero;
        this.titular = titular;
        this.saldo = saldo;
    }

    public void exibirDados() {
        System.out.println("Número: " + numero);
        System.out.println("Titular: " + titular);
        System.out.println("Saldo: " + saldo);
    }
}
