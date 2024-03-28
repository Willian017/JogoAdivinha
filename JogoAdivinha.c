#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

while(n9 <= 1){
    
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    n5 = 0;
    n6 = 0;
    n7 = 0;
    n8 = 0;
    n9 = 0;
    n10 = 0;

    printf("Escolha uma das opções a seguir: \n\n");
    printf("1 - Facil || 2 - Medio || 3 - Dificil || 4 - Personalizado  || 5 - Sair \n\n");
    scanf("%d", &n6);
    printf("\n\n\n\n\n");

    switch(n6){
        
        case 1:
        
            srand(time(NULL));
            n1 = rand ();
            n1 = n1 % 21;
            
            printf("Tente acertar qual é o número de 0 a 20: ");
            scanf("%d", &n2);
            printf ("\n");
            
            while(n1 != 200){
            
                if(n4 == 5)
                {
                    if(n10 == 1){
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                        break;
                    }
                    else{
                    printf ("Suas chances se esgotaram, quer receber mais 2 chances para continuar jogando? \n\n");
                    printf ("1 - Sim || 2 - Não \n");
                    scanf("%d", &n10);
                    if(n10 == 1){
                        printf("\n");
                        printf("Você recebeu mais duas chances \n\n");
                        n4 = n4 - 2;
                    }
                    else{
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                break;}
                    }
                }
                else
                    n1 = n1;
                
                if(n4 != 0)
                {
                    printf ("Digite outro número: ");
                    scanf("%d", &n2);
                    printf ("\n");
                }
                else
                    n1 = n1;
                if(n1 == n2)
                {
                    printf("Parabens voce acertou o número!!!\n\n");
                break;
                }
                
                else
                
                    if(n1 > n2)
                    {
                        printf("O número é maior que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                        printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
                    else
                    {
                        printf("O número é menor que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                        printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
            }
        
        break;
        
        case 2:
        
            srand(time(NULL));
            n1 = rand ();
            n1 = n1 % 51;
            
            printf("Tente acertar qual é o número de 0 a 50: ");
            scanf("%d", &n2);
            printf ("\n");
            
            while(n1 != 200){
            
                if(n4 == 5)
                {
                    if(n10 == 1){
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                        break;
                    }
                    else{
                    printf ("Suas chances se esgotaram, quer receber mais 2 chances para continuar jogando? \n\n");
                    printf ("1 - Sim || 2 - Não \n");
                    scanf("%d", &n10);
                    if(n10 == 1){
                        printf("\n");
                        printf("Você recebeu mais duas chances \n\n");
                        n4 = n4 - 2;
                    }
                    else{
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                break;}
                    }
                }
                else
                    n1 = n1;
                
                if(n4 != 0)
                {
                    printf ("Digite outro número: ");
                    scanf("%d", &n2);
                    printf ("\n");
                }
                else
                    n1 = n1;
                if(n1 == n2)
                {
                    printf("Parabens voce acertou o número!!!\n\n");
                break;
                }
                
                else
                
                    if(n1 > n2)
                    {
                        printf("O número é maior que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                        printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
                    else
                    {
                        printf("O número é menor que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                        printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
            }
        
        break;
        
        case 3:
        
            srand(time(NULL));
            n1 = rand ();
            n1 = n1 % 101;
            
            printf("Tente acertar qual é o número de 0 a 100: ");
            scanf("%d", &n2);
            printf ("\n");
            
            while(n1 != 200){
            
                if(n4 == 5)
                {
                    if(n10 == 1){
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                        break;
                    }
                    else{
                    printf ("Suas chances se esgotaram, quer receber mais 2 chances para continuar jogando? \n\n");
                    printf ("1 - Sim || 2 - Não \n");
                    scanf("%d", &n10);
                    if(n10 == 1){
                        printf("\n");
                        printf("Você recebeu mais duas chances \n\n");
                        n4 = n4 - 2;
                    }
                    else{
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                break;}
                    }
                }
                else
                    n1 = n1;
                
                if(n4 != 0)
                {
                    printf ("Digite outro número: ");
                    scanf("%d", &n2);
                    printf ("\n");
                }
                else
                    n1 = n1;
                if(n1 == n2)
                {
                    printf("Parabens voce acertou o número!!!\n\n");
                break;
                }
                
                else
                
                    if(n1 > n2)
                    {
                        printf("O número é maior que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                        printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
                    else
                    {
                        printf("O número é menor que %d \n\n", n2);
                        n4 ++;
                        n5 = 5 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                            printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
            }
        
        break;
        
        case 4:
            
            printf("Digite até qual numero deseja jogar: ");
            scanf("%d", &n7);
            printf("\n");
            printf("Digite quantas chances você tera: ");
            scanf("%d", &n8);
            printf("\n");
        
            srand(time(NULL));
            n1 = rand ();
            n1 = n1 % (n7 + 1);
            
            printf("Tente acertar qual é o número de 0 a %d: ", n7);
            scanf("%d", &n2);
            printf ("\n");
            
            while(n1 != 200){
            
                if(n4 == n8)
                {
                    if(n10 == 1){
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                        break;
                    }
                    else{
                    printf ("Suas chances se esgotaram, quer receber mais 2 chances para continuar jogando? \n\n");
                    printf ("1 - Sim || 2 - Não \n");
                    scanf("%d", &n10);
                    if(n10 == 1){
                        printf("\n");
                        printf("Você recebeu mais duas chances \n\n");
                        n4 = n4 - 2;
                    }
                    else{
                        printf("\n");
                        printf ("Voce gastou todas as suas tentativas, boa sorte da proxima vez \n\n");
                        printf ("O número era %d \n\n",n1);
                break;}
                    }
                }
                else
                    n1 = n1;
                
                if(n4 != 0)
                {
                    printf ("Digite outro número: ");
                    scanf("%d", &n2);
                    printf ("\n");
                }
                else
                    n1 = n1;
                if(n1 == n2)
                {
                    printf("Parabens voce acertou o número!!! \n\n");
                break;
                }
                
                else
                
                    if(n1 > n2)
                    {
                        printf("O número é maior que %d \n\n", n2);
                        n4 ++;
                        n5 = n8 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                            printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
                    else
                    {
                        printf("O número é menor que %d \n\n", n2);
                        n4 ++;
                        n5 = n8 - n4;
                        if(n5 == 0)
                            n1 = n1;
                        else
                            printf("Voce ainda tem mais %d chances para acertar \n\n", n5);
                    }
            }
        
        break;
        
        default:
        printf("Opção selecionada invalida\n\n");
        n9 = 0;
        printf("\n");
    }

    if(n9 == 0)
        printf("1 - Voltar ao menu de escolha || 2 - Sair \n");
        scanf("%d", &n9);
        printf("\n\n\n\n\n\n");
}



return 0;
}
