#include <stdio.h>
#include <stdlib.h>

int main(){

    // Dynamically Storing Value in a Varible and Displaying

    int n;
    printf("Enter Number of intigers you Want :- ");
    scanf("%d",&n);

    int* ptr = (int*) malloc(n*sizeof(int));
    int* p = ptr;

    for(int i = 1; i<=n; i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for (int i = 1; i<=n; i++){
        printf("%d \n",*p);
        p++;
    }
    free(ptr);
    printf("%d",*p);

    int* ptr = (int*) malloc(10*sizeof(int));
    int *re = realloc(ptr,9999999*sizeof(int));

    printf("%p \n",*ptr);
    printf("%p \n",*re);


    free(ptr);
    free(re);
    printf("%p ",*ptr);
    printf("%p ",*re);





   return 0;
}