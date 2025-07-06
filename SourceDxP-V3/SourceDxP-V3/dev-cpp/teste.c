#include <stdio.h>

int main (int argc, char* argv[])
{
    
    
    int i, j, temp = 0, tamanhoVetor = 5; 
    int vetor[tamanhoVetor]; 
    
    for(i = 0; i < tamanhoVetor; i++){
       printf("Digite um valor para a posicao [%d]", i);
       scanf("%d", &vetor[i]);
    }  
    
    for(i = 0; i < tamanhoVetor; i++){
       if(vetor[i] == 0){
         for(j = i+1; j < tamanhoVetor; j++){
            if(vetor[j] == 0){
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp; 
                if(tamanhoVetor-1 == j)
                  break;                 
            }
         }   
         temp = vetor[i];
         vetor[i] = vetor[i+1];
         vetor[i+1] = temp;
       }
       printf("%d\t", vetor[i]);
    }
        
        system("Pause");
return 0;
}
