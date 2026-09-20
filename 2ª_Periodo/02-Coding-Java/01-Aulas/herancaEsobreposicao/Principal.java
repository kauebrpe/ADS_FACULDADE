//Principal
package herancaEsobreposicao;

public class Principal {
    public static void main(String[] args){
        Animal a1 = new Animal();
        Cachorro c1 = new Cachorro();
        Gato g1 = new Gato();
        
        a1.emitirSom();
        c1.emitirSom();
        g1.emitirSom();
        
        c1.abanaRabo();
        g1.arranharMoveis();
    }
}
