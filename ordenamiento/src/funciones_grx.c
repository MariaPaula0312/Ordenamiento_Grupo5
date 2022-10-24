#include "lib1.h"
#include "lib_grx.h"

void insertion_sort(double *arr, unsigned int tam)
{
        double key=0;
        int j=1,i=0;
        for (j=1;j<tam;j++)
        {
                key = arr[j];
                i = j-1;
                while(i>=0 && arr[i]>key)
                {
                        arr[i+1] = arr[i];
                        i = i-1;
                }
                arr[i+1] = key;
        }
}
void bubblee_sort(double *arr, unsigned int tam)
{
        int j=0,i=0;
        for (i=0;i<tam;i++)
        {
                for (j=tam;j>(i);j--)
                {
                        if (arr[j]<arr[j-1])
                                swap (&arr[j],&arr[j-1]);
                }
        }
}
void swap (double *a, double*b)
{
        double temp1=0, temp2=0;
        temp1 = *a;
        temp2 = *b;
        *a = temp2;
        *b = temp1;
}
int convert_buffer(char *addr_read, double *arr,int fake_tam)
{
        char *addr_i, *addr_temp;
        int cont=0, res_addr = 0;

        arr[cont]= atof(addr_read);
        cont = cont + 1;
        addr_temp = strchr(addr_read,'\n');
        res_addr = addr_temp - addr_read;

        while (res_addr != (fake_tam-1))
        {
                addr_i = (addr_temp + 1);
                arr[cont]= atof(addr_i);
                cont = cont + 1;
                addr_temp = strchr(addr_i,'\n');
                res_addr = (addr_temp - addr_read);
        }
        return (cont-1);
}

