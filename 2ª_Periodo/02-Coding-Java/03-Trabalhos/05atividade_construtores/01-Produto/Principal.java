public class Principal {

    public static void main(String[] args) {
        Produto p1 = new Produto();                    // construtor padrão
        Produto p2 = new Produto("Mouse", 89.90);      // nome e preço
        Produto p3 = new Produto("Teclado", 150.00, 10); // nome, preço e quantidade

        p1.exibirDados();
        System.out.println();
        p2.exibirDados();
        System.out.println();
        p3.exibirDados();
    }
}
