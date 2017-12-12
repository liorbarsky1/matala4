#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 51
#define MAX_SHOE_SIZE 50
#define MIN_SHOE_SIZE 38
#define MAX_STRING_SIZE 20


void insertion_sort(int arr[], int n);
void create_pairs_array(int left[], int s1,  int right[], int s2, int sizes[SIZE][2]);
void missing_pairs(int sizes[SIZE][2], int missing[SIZE][2]);
int csum(const char c[]);
int is_ascii_match(const char c1[], const char c2[],char res[MAX_STRING_SIZE]);
