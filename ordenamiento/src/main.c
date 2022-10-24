#include "lib1.h"
#include "lib_grx.h"

int main (int argc, char *argv[])
{
	clock_t tiempo_inicio, tiempo_fin;
	double delta_tiempo1 =0, delta_tiempo2, delta_tiempo3;

        int tam =0, tam_real=0;
        char *addr_read;
        double arr[TAM];
        int selector = atoi(argv[1]);

        addr_read = read_file_to_buffer(argv[2],&tam);

	tiempo_inicio = clock();
        tam_real=convert_buffer(addr_read,arr,tam);
	tiempo_fin = clock();

	delta_tiempo1 = (double)(tiempo_fin - tiempo_inicio)/ CLOCKS_PER_SEC;
	printf("El delta de tiempo de ejecución 1 del programa es: %f\n", delta_tiempo1);

        char i=0;

        if (selector == 1)
	{
		tiempo_inicio = clock();
                insertion_sort(arr,tam_real);
		tiempo_fin = clock();
		delta_tiempo2 = (double)(tiempo_fin - tiempo_inicio)/ CLOCKS_PER_SEC;
	        printf("El delta de tiempo de ejecución 2 del programa es: %f\n", delta_tiempo2);

	}
        else if(selector == 2)
	{
		tiempo_inicio = clock();
                bubblee_sort(arr, tam_real);
		tiempo_fin = clock();
                delta_tiempo2 = (double)(tiempo_fin - tiempo_inicio)/ CLOCKS_PER_SEC;
                printf("El delta de tiempo de ejecución 2 del programa es: %f\n", delta_tiempo2);
	}

	tiempo_inicio = clock();
	write_dArray_to_file (&arr[0],tam_real,argv[3]);
	tiempo_fin = clock();
        delta_tiempo3 = (double)(tiempo_fin - tiempo_inicio)/ CLOCKS_PER_SEC;
        printf("El delta de tiempo de ejecución 3 del programa es: %f\n", delta_tiempo3);

        return 0;
}
