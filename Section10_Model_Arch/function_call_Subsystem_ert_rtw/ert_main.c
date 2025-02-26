/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'function_call_Subsystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 21:37:45 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include "function_call_Subsystem.h"   /* Model header file */

/* Example use case for call to exported function: function_call */
extern void sample_usage_function_call(void);
void sample_usage_function_call(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  function_call();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  function_call_Subsystem_initialize();
  while (rtmGetErrorStatus(function_call_Subsystem_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  function_call_Subsystem_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
