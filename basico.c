#include <stdio.h>
#include <stdlib.h> //

int main(void)
{
  
    int n = 10; //INT PARA NUMEROS INTEIROS 
    float n2 = 6.79; //FLOAT PARA NUMEROS COM CASAS DECIMAIS
    char letra = 'a'; //PARA CARACTERE
    char frase[10] = "Bom Dia!";
    double n3 = 1.23456; //MESMA FUNÇÃO DO FLOAT SO MUDA QUE SUPORTA 15 CASAS DECIMAIS
    float nota1, nota2,media;
    int valor1, valor2, soma,sub,mult,di,numero,resto,dia;
   
    

    printf("Hello World!\n");   // (\n) serve para o proximo texto ficar uma linha abaixo!

      //USO DO COMANDO PRINTF COM DIVERSAS VARIAVEIS  

    printf("Exibindo o número inteiro. %d\n", n);
    printf("Exibir um numero Real. %.2f\n", n2);//%.2F PARA MOSTRAR APENAS DOIS NUMEROS APOS A VIRGULA
    printf("Exibindo Caracetere. %c\n", letra); //%C PARA MOSTRAR UM UNICO CARACTERE
    printf("Exibindo a String! %s\n", frase); //%S PARA MOSTRAR MAIS DE UM CARACTERE
    printf("Exibir o Double. %f \n", n3); //%F PARA MOSTRAR NUMEROS DECIMAIS
    printf("Valores : %d %.2f %c %s %f\n", n , n2 , letra , frase , n3);

    //UTILIZAÇÃO DE SCANF
 
    printf("Digite um numero Inteiro :");
    scanf("%d", &valor1); //%d SERVE PAPRA VARIAVEIS DE NUMERO INTEIRO

    printf("Digite Outro numero inteiro:");
    scanf("%d", &valor2);

    //OPERADORES ARITMÉTICOS

    soma = valor1 + valor2; //LOGICA DE SOMA
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    di = valor1 / valor2;//%D E A VARIAVEL PARA FICA MAIS EXPLICATIVO NO PROGRAMA

   printf("O valor da soma de %d + %d = %d\n", valor1, valor2, soma); 
   printf("O valor da subtração de %d - %d = %d\n", valor1, valor2, sub); 
   printf("O valor da multiplicação de %d * %d = %d\n", valor1, valor2, mult); 
   printf("O valor da divisão de %d / %d = %d\n", valor1, valor2, di); 
         //%D SERVE PARA INDICAR QUE NAQUELE LUGAR RECEBE UM VALOR INTEIRO

          printf("Digite um numero Inteiro :");
    scanf("%d", &numero);

    resto = numero % 2;

    printf("O resto da divisão :%d",resto);

    //Estrutura de decisão
    if (resto == 0)
    {
        printf ("Número e Par!\n");
    }
    else
    {
        printf ("Número e par\n");
    }
   
    
    printf("Digite a Primeira Nota :");
    scanf ("%f",&nota1);
    
    printf("Digite a Segunda Nota :");
    scanf ("%f",&nota2);
    
    media = (nota1 + nota2)/2;

printf("---Resultado---\n");
  printf("Media = %.2f \n",media);

  //IF ANINHADO

    
  { if (media>=6)
    printf("Aluno Aprovado!\n");
  }
  else
    if(media>=3)
        {
            printf("Aluno reprovado!\n");
        }
            {
                printf("Aluno em recuperação\n");
            }
 

 printf("Digita um Numero de 1 a 7");
 scanf("%d",&dia);

 switch (dia)
 {
 case 1:
    printf("Domingo\n");
    break;
 
    case 2:
    printf("Segunda \n");
    break;

    case 3:
    printf("Terça\n");
    break;

    case 4:
    printf("Quarta\n");
    break;

    case 5:
    printf("Quinta\n");
    break;

    case 6:
    printf("Sexta\n");
    break;

    case 7:
    printf("Sabado\n");
    break;

 default:
    printf("Valor Invalido!");
 }
 system("pause");
return 0;
}

