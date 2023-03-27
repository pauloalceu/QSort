#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>

void mostravetor(int arr[])
{
  int count;
  printf("O Vetor: [");
  for (count=0; count<=9; count++)
  {
    printf("%03d",arr[count]);
    if(count < 9 )
      printf(",");
  }
  printf("]\n");
}

void quickSort(int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];
  //printf("LEFT: %d \n", left)  ;
  //printf("RIGHT: %d \n", right)  ;
  //printf("pivot: %d \n", pivot);
  //printf("pivotIndex: %d \n", left+right/2);

  /* particao */
  while (i <= j) {
        while (arr[i] < pivot)
              i++;

        while (arr[j] > pivot)
              j--;

        if (i <= j) {
              tmp = arr[i];
              arr[i] = arr[j];
              arr[j] = tmp;
              i++;
              j--;
        }
  };

 //Mostra Vetor
  //  mostravetor(arr);
  //  getchar();


  /* recursividade */
  if (left < j){
    quickSort(arr, left, j);
  }

  if (i < right){
    quickSort(arr, i, right);
  }
}

int main (int argc, char *argv[])
{
   setlocale (LC_ALL, "portuguese");
    int vetor[10] = {1,30,4,87,60,5,9,72,12,10} ;
    //int vetor[10] = {8,2,6,4,0,1,3,5,7,9};

    printf("Mestrado em Ciência da Computação - UFJF.\n");
    printf("Trabalho de EAD - 2012.\n");
    printf("Paulo Victor Hauck da Encarnação.\n");
    printf("Paulo Alceu d´ Almeida Rezende.\n");
    printf("\n");

    printf("==============================DESORDENADO================\n")   ;
    mostravetor(vetor);
    printf("=========================================================\n")   ;
    //getchar();
    quickSort(vetor,0,9);

    printf("\n");

    printf("==============================ORDENADO===================\n")   ;
    mostravetor(vetor);
    printf("=========================================================\n")   ;
    getchar();

    printf ("\nPrograma Executado com sucesso!\n");
    system("PAUSE");
    return(0);
}
