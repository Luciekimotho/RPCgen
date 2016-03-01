/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "assign.h"
#include <stdio.h>
#include <string.h>
/*
Addition of 3 variables
*/

void
addition_2(char *host, int val1,int val2,int val3)
{
	CLIENT *clnt;
	int  *result_1;
	my_numbers  add_2_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ADDITION, ADD_2, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    add_2_arg.a=val1;
    add_2_arg.b=val2;
    add_2_arg.c=val3;

	result_1 = add_2(&add_2_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
            printf("The result for the addition is: %d \n",*result_1);
         }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}



/*
Multiplication of 2 variables
*/

void
product_1(char *host, int val1, int val2)
{
	CLIENT *clnt;
	int  *result_1;
	my_numbers  prdct_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, PRODUCT, PDCT_1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    prdct_1_arg.a=val1;
    prdct_1_arg.b=val2;

	result_1 = prdct_1(&prdct_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
        printf("The result for the multiplication is: %d\n", *result_1);
    }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}



/*
String manipulation
*/

void
display_3(char *host, char msg[134])
{
	CLIENT *clnt;
	int  *result_1;
	my_numbers  dsply_3_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, DISPLAY, DSPL_3, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    dsply_3_arg.a = msg[134];
	result_1 = dsply_3(&dsply_3_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
        printf("Our string converted to uppercase is: %c\n", *result_1);
    }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
    char choice;

    printf("Please select a choice for the operation you want.\n");
    printf("A: Addition\n");
    printf("B: Multiplication\n");
    printf("C: String manipulation\n");
    scanf("%c", &choice);

    switch(choice) {
        case 'A':
            host = argv[1];
	        addition_2 (host, 56, 87, 75);
            break;
        case 'B':
            host = argv[1];
	        product_1 (host, 25, 60);
            break;
        case 'C':
            host = argv[1];
	        display_3 (host, "c");
            break;
        default:
            printf("Please select a valid choice.\n");
    }
exit (0);
}
