/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "assign.h"
#include <stdio.h>
#include <string.h>

int *
add_2_svc(my_numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	result=argp->a + argp->b + argp->c;

	return &result;
}

int *
prdct_1_svc(my_numbers *argp, struct svc_req *rqstp)
{
	static int  result;

    result = argp->a * argp->b;
	return &result;
}

char *
dsply_3_svc(my_numbers *argp, struct svc_req *rqstp)
{
	static char  result;
    result == argp->msg[134];
	return &result;
}
