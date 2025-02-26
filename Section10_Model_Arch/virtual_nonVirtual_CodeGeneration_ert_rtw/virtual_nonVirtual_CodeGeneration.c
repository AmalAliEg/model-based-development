/*
 * File: virtual_nonVirtual_CodeGeneration.c
 *
 * Code generated for Simulink model 'virtual_nonVirtual_CodeGeneration'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:26:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "virtual_nonVirtual_CodeGeneration.h"
#include "virtual_nonVirtual_CodeGeneration_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_virtual_nonVirtual_CodeG_T virtual_nonVirtual_CodeGenera_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_virtual_nonVirtual_CodeG_T virtual_nonVirtual_CodeGenera_Y;

/* Real-time model */
static RT_MODEL_virtual_nonVirtual_C_T virtual_nonVirtual_CodeGener_M_;
RT_MODEL_virtual_nonVirtual_C_T *const virtual_nonVirtual_CodeGener_M =
  &virtual_nonVirtual_CodeGener_M_;

/* Output and update for atomic system: '<Root>/non_virtual' */
void virtual_nonVirtual__non_virtual(void)
{
  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Sum: '<S1>/Add'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  virtual_nonVirtual_CodeGenera_Y.Out2 += virtual_nonVirtual_CodeGenera_U.In1;
}

/* Model step function */
void virtual_nonVirtual_CodeGeneration_step(void)
{
  /* Sum: '<S2>/Add' incorporates:
   *  Inport: '<Root>/In1'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  virtual_nonVirtual_CodeGenera_Y.Out1 += virtual_nonVirtual_CodeGenera_U.In1;

  /* Outputs for Atomic SubSystem: '<Root>/non_virtual' */
  virtual_nonVirtual__non_virtual();

  /* End of Outputs for SubSystem: '<Root>/non_virtual' */
}

/* Model initialize function */
void virtual_nonVirtual_CodeGeneration_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void virtual_nonVirtual_CodeGeneration_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
