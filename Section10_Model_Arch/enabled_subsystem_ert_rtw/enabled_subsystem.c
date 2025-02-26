/*
 * File: enabled_subsystem.c
 *
 * Code generated for Simulink model 'enabled_subsystem'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:32:21 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "enabled_subsystem.h"

/* Block states (default storage) */
DW_enabled_subsystem_T enabled_subsystem_DW;

/* Real-time model */
static RT_MODEL_enabled_subsystem_T enabled_subsystem_M_;
RT_MODEL_enabled_subsystem_T *const enabled_subsystem_M = &enabled_subsystem_M_;

/* Model step function */
void enabled_subsystem_step(void)
{
  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (enabled_subsystem_DW.clockTickCounter >= 1) {
    enabled_subsystem_DW.clockTickCounter = 0;
  } else {
    enabled_subsystem_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */
}

/* Model initialize function */
void enabled_subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void enabled_subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
