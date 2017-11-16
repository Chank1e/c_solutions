#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
        float Array[4] = {-8.8, -11.2, 64.67, 55.32}, *dynamic;
        dynamic = &Array[0];
        for(i = 0 ; i < 4 ; i++){
            printf("%.2f  ", *dynamic);
            dynamic++;
        }
        printf("\n");
        dynamic = (float*)malloc(4 * sizeof(int));
        *dynamic = -8.8;
        *(dynamic + 1) = -11.2;
        *(dynamic + 2) = 64.67;
        *(dynamic + 3) = 55.32;
        for(i = 0 ; i < 4 ; i++)
        {
            printf("%.2f  ", *dynamic);
            dynamic++;
        }
        free(dynamic);
        return 0;
}
