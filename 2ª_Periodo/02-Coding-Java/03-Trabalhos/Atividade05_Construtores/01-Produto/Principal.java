public class Principal {

    public static void main(String[] args) {
        Produto p1 = new Produto();
        Produto p2 = new Produto("Mouse", 89.90);
        Produto p3 = new Produto("Teclado", 150.00, 10);

        p1.exibirDados();
        System.out.println();
        p2.exibirDados();
        System.out.println();
        p3.exibirDados();
    }
}
