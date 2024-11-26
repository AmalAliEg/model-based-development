/*
 * File: DC_Motor.c
 *
 * Code generated for Simulink model 'DC_Motor'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Nov 26 06:15:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DC_Motor.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_DC_Motor_T DC_Motor_DW;

/* Real-time model */
static RT_MODEL_DC_Motor_T DC_Motor_M_;
RT_MODEL_DC_Motor_T *const DC_Motor_M = &DC_Motor_M_;

/* Model step function */
void DC_Motor_step(void)
{
  boolean_T tmp;

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (DC_Motor_P.ManualSwitch_CurrentSetting == 1) {
    tmp = DC_Motor_P.Constant_Value;
  } else {
    tmp = DC_Motor_P.Constant1_Value;
  }

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  ManualSwitch: '<Root>/Manual Switch'
   */
  writeDigitalPin(2, (uint8_T)tmp);
}

/* Model initialize function */
void DC_Motor_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Output' */
  DC_Motor_DW.obj.matlabCodegenIsDeleted = false;
  DC_Motor_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 1);
  DC_Motor_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void DC_Motor_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!DC_Motor_DW.obj.matlabCodegenIsDeleted) {
    DC_Motor_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
