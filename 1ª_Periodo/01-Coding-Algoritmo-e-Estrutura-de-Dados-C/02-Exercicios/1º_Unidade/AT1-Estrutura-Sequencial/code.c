#include <stdio.h>

int main(){
        
   //1 Faca um programa que le o ano de nascimento e imprima na tela a sua idade:
    
    int ano;
    printf("Me diga o seu ano de nascimento:");
    scanf("%i", &ano);
    printf("Seu ano de nascimento Ã©: %i", ano);
    
   //2 Faca um programa que leia um numero e imprima na tela o seu antecessor e sucessor:
    
    int num1, resultado;  
    printf("\nDigite um numero:"); 
    scanf("%d", &num1);  
    resultado = num1 - 1; 
    printf("O antecessor de %d", num1); printf(" Ã© %d", resultado);
    resultado = num1 + 1; 
    printf("\nE o sucessor de %d", num1); printf(" Ã© %d", resultado);
    
   //3 Faca um programa que leia um numero qualquer e imprima o seu cubo:
   
     int num2, cubo; 
    printf("\nDigite um numero:"); 
    scanf("%d", &num2);
    cubo = num2*num2*num2;
    printf("O cubo de %d Ã© %d", num2, cubo);

   //4 Percentual de reajuste:
   
    float sal, perc, aumento, novo_sal; 
    printf("\nMe diga o salario atual: "); 
    scanf("%f", &sal); 
    printf("Me diga o valor percentual de ajuste: "); 
    scanf("%f", &perc);
    novo_sal = sal * perc / 100;
    novo_sal = sal + novo_sal;
    printf("Seu novo salario sera: %.2f", novo_sal);

   //5 Eleicao porcentual:
   
    float vtb, vtn, vtv, total_v; 
    printf("\nMe diga os votos em brancos: "); 
    scanf("%f", &vtb);
    printf("Me diga os votos nulos: "); 
    scanf("%f", &vtn);
    printf("Me diga os votos validos: "); 
    scanf("%f", &vtv);
    total_v = vtb + vtn + vtv;
    vtb = (vtb / total_v) * 100;
    vtn = (vtn / total_v) * 100;
    vtv = (vtv / total_v) * 100;
    printf("Sem nenhuma corrupcao, teremos: ");
    printf("\nVotos brancos: %.2f%%", vtb); 
    printf("\nVotos nulos: %.2f%%", vtn); 
    printf("\nVotos validos: %.2f%%", vtv);
    
    //6 Eleicao porcentual:
    
    float total_prestacoes, prestacoes_pagas, valor_prestacao, faltando, saldo_devedor; 
    printf("\nMe diga o numero total de prestacoes:"); 
    scanf("%f", &total_prestacoes);
    printf("Me diga o numero total de prestacoes pagas: "); 
    scanf("%f", &prestacoes_pagas);
    printf("Me diga o valor de cada prestacao: "); 
    scanf("%f", &valor_prestacao);
    faltando = total_prestacoes - prestacoes_pagas;
    saldo_devedor = faltando * valor_prestacao;
    printf("Faltam %.0f prestacoes\n", faltando);
    printf("Saldo devedor: %.2f\n", saldo_devedor);
  
    return 0;
}
