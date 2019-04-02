#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float input, maks, min, sum;
    float value[100];
    int i = 0;
    printf("\nBanyaknya data yang akan dimasukkan :");
    scanf("%f", &input);
    for(i=0;i<input;i++)
    {
        printf("\nEnter value :");
        scanf("%f", &value[i]);
        sum+=value[i];
    }
    maks = value[0];
    min = value[0];
    for(i=1;i<input;i++)
    {
        if(value[i]>maks)
        {
            maks = value[i];
        }
        else if(value[i]<min)
        {
            min=value[i];
        }
    }
    printf("\nMaks = %f", maks);
    printf("\nmin = %f", min);
    printf("\nrataan = %.3f", (float)sum/input);
    printf("\nnilai tengah = %.3f",(min+maks)/2);
}
