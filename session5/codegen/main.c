/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 26-Dec-2018 13:48:23
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "assignmentAdd.h"
#include "main.h"
#include "assignmentAdd_terminate.h"
#include "assignmentAdd_initialize.h"
#include <stdio.h>

/* Function Declarations */
static int argInit_int32_T(void);
static void main_assignmentAdd(void);

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : int
 */
static int argInit_int32_T(void)
{	int input;
	printf("Enter number=");
	scanf("%d",&input);
	
  return input;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_assignmentAdd(void)
{
  int h;

  /* Initialize function 'assignmentAdd' input arguments. */
  /* Call the entry-point 'assignmentAdd'. */
  printf("to evaluate this equation a+b+c-d =\n");
  h = assignmentAdd(argInit_int32_T(), argInit_int32_T(), argInit_int32_T(),
                    argInit_int32_T());
	printf("Result=%d",h);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  assignmentAdd_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
	 
  main_assignmentAdd();

  /* Terminate the application.
     You do not need to do this more than one time. */
  assignmentAdd_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
