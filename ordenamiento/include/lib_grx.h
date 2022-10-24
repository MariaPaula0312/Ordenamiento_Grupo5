#ifndef LIB_GRX_H
#define LIB_GRX_H

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <time.h>

	#define TAM 100000

	double atof(const char *arr);
	char *strchr(const char *arr, int A);
	void insertion_sort(double *arr, unsigned int tam);
	void bubblee_sort(double *arr, unsigned int tam);
	void swap(double *a, double *b);
	int convert_buffer(char *addr_read, double *arr, int fake_tam);
	void write_dArray_to_file (const double *arr, unsigned int len, const char *path);

#endif

