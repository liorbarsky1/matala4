#include <stdio.h>
#include "Ex4.h"

#define SORT_SIZE 6

void printfail(const char funcname[], int failscore ) {
	 printf("Fail in %s (-%d)\n", funcname, failscore);
}

int main(void) {
	puts("Starting\n");

	int left_0[] = { 47, 44, 45, 45, 45, 47, 43 };
	int right_1[] = { 38, 38, 43, 44, 45, 45 };
	int invalid2[SORT_SIZE] = { 33, 44, 0, 0, 48, 0 };

	int sizes1[SIZE][2] = { { 0 } };
	printf("checking insertionSort\n");
	insertion_sort(invalid2, SORT_SIZE);
	int no_order = 0;
	for (int i = 0; i < SORT_SIZE-1; i++) {

		if (invalid2[i] > invalid2[i + 1]) {
			no_order = 1;
		}

	}
	if (no_order) {

		printfail("insertion_sort" , 20);
	}

	printf("checking create_pairs_array\n");
	create_pairs_array(left_0, 7, right_1, 6, sizes1);

	if (sizes1[33][1] != 0) {
		printfail("create_pairs_array",5);
	}
	if (sizes1[38][1] != 2) {
		printfail("create_pairs_array",5);
	}
	if (sizes1[44][1] != 1) {
		printfail("create_pairs_array",5);
	}
	if (sizes1[33][1] != 0) {
		printfail("create_pairs_array",5);
	}

	printf("checking missing_pairs\n");
	int missing_pais_arr[SIZE][2] = { { 0 } };
	missing_pairs(sizes1, missing_pais_arr);

	;
	if (missing_pais_arr[47][1] != 2) {
		printfail("missing_pairs",5);
	}

	printf("checking csum\n");

	if (csum("aa!") != -1) {
		printfail("csum", 5);
	};
	if (csum("ABC") != -1) {
		printfail("csum", 5);
	}

	printf("checking is_ascii_match\n");

	char match[MAX_STRING_SIZE] = "0";

	if (is_ascii_match("abe", "adc",  match) != 1) {
		printfail("is_ascii_match", 10);
	}

	if (match[3] != '&') {
		printfail("is_ascii_match", 3);
	}

	printf("done\n");
	return EXIT_SUCCESS;
}
