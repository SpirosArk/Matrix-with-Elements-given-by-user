#include <stdio.h>
#include <stdlib.h>


int M,N,i,j;
int **p;
int srow = 0; //initialising value in order to count sum of each row


int main()
{

    printf("Give row number: ");
    scanf("%d",&M);

    printf("Give column number: ");
    scanf("%d",&N);

    p=malloc(sizeof(int*)*M);   //single matrix of pointers creation

    if (!p){

        printf("Failure on creating matrix of pointers");
        exit(0);

    }

    for (i=0; i<M; i++)     //for for matrix creation
    {

        p[i]=malloc(sizeof(int)*N);
        if (!p[i]){

            printf("Failure on creating the rest matrixes");
            exit(0);

        }
    }

    for (i=0; i<M; i++){    //for in order for the user to fill the matrix with elements
            for (j=0; j<N; j++){
                printf("Enter Element: ");
                scanf("%d",&p[i][j]);
            }

    }

    printf("You created the following matrix:\n");
    for (i=0; i<M; i++){    //for in order to print the elements that user gave
            for (j=0; j<N; j++){

                printf(" %d ",p[i][j]);

            }
            printf("\n");
    }


    for(i=0; i<M; i++){    //for in order to sum up the elements from each row
            for(j=0; j<N; j++){

                srow=p[i][j]+srow;



            }
            printf("Row number");
            printf(" %d ",i+1);
            printf("is equal to: ");
            printf("%d\n",srow);
            srow=0;
    }


    for (i=0; i<M; i++){
        free(p[i]);
    }
    free(p);

}
