#include <stdio.h>
int main()
{
int n;
        scanf("%d", &n);


                    for(int j=1; j<=n; j++)
                    {
                        for(int i = 1; i<=10; i++)
                    {   
                    printf("%d x %3d = %3d\n", j, i, j * i);
                    }
                    printf("\n\n");
                    }

        
        // printf("%d x 2 = %d\n", n, n * 2);
        // printf("%d x 3 = %d\n", n, n * 3);
        // printf("%d x 4 = %d\n", n, n * 4);
        // printf("%d x 5 = %d\n", n, n * 5);
        // printf("%d x 6 = %d\n", n, n * 6);
        // printf("%d x 7 = %d\n", n, n * 7);
        // printf("%d x 8 = %d\n", n, n * 8);
        // printf("%d x 9 = %d\n", n, n * 9);
        // printf("%d x 10 = %d\n", n, n * 10);
        

        return 0;


    }

    