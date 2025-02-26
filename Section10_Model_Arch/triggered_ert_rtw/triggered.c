/*
 * File: triggered.c
 *
 * Code generated for Simulink model 'triggered'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:16:02 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "triggered.h"

/* Block states (default storage) */
DW_triggered_T triggered_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_triggered_T triggered_PrevZCX;

/* Real-time model */
static RT_MODEL_triggered_T triggered_M_;
RT_MODEL_triggered_T *const triggered_M = &triggered_M_;

/* Model step function */
void triggered_step(void)
{
  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (triggered_DW.clockTickCounter >= 1) {
    triggered_DW.clockTickCounter = 0;
  } else {
    triggered_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */
}

/* Model initialize function */
void triggered_initialize(void)
{
  triggered_PrevZCX.one_Trig_ZCE = UNINITIALIZED_ZCSIG;
  triggered_PrevZCX.two_Trig_ZCE = UNINITIALIZED_ZCSIG;
}

/* Model terminate function */
void triggered_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
