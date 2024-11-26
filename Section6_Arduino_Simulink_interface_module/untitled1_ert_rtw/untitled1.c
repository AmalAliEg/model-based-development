/*
 * File: untitled1.c
 *
 * Code generated for Simulink model 'untitled1'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 04:46:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled1.h"
#include "rtwtypes.h"
#include "untitled1_private.h"

/* Block signals (default storage) */
B_untitled1_T untitled1_B;

/* Block states (default storage) */
DW_untitled1_T untitled1_DW;

/* Real-time model */
static RT_MODEL_untitled1_T untitled1_M_;
RT_MODEL_untitled1_T *const untitled1_M = &untitled1_M_;

/* Model step function */
void untitled1_step(void)
{
  real_T y;

  /* Constant: '<Root>/Constant' */
  untitled1_B.Constant = untitled1_P.Constant_Value;

  /* MATLABSystem: '<Root>/PWM' */
  untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);

  /* Start for MATLABSystem: '<Root>/PWM' */
  if (untitled1_B.Constant <= 255.0) {
    y = untitled1_B.Constant;
  } else {
    y = 255.0;
  }

  if (!(y >= 0.0)) {
    y = 0.0;
  }

  /* MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle(untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE, y);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled1_M->Timing.taskTime0 =
    ((time_T)(++untitled1_M->Timing.clockTick0)) * untitled1_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled1_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled1_M, -1);
  untitled1_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  untitled1_M->Sizes.checksums[0] = (1574063582U);
  untitled1_M->Sizes.checksums[1] = (1551503145U);
  untitled1_M->Sizes.checksums[2] = (191721757U);
  untitled1_M->Sizes.checksums[3] = (1131859242U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    untitled1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled1_M->extModeInfo,
      &untitled1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled1_M->extModeInfo, untitled1_M->Sizes.checksums);
    rteiSetTPtr(untitled1_M->extModeInfo, rtmGetTPtr(untitled1_M));
  }

  /* Start for MATLABSystem: '<Root>/PWM' */
  untitled1_DW.obj.matlabCodegenIsDeleted = false;
  untitled1_DW.obj.isInitialized = 1L;
  untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(5UL, 0.0, 0.0);
  untitled1_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void untitled1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PWM' */
  if (!untitled1_DW.obj.matlabCodegenIsDeleted) {
    untitled1_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled1_DW.obj.isInitialized == 1L) &&
        untitled1_DW.obj.isSetupComplete) {
      untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);
      MW_PWM_SetDutyCycle(untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(5UL);
      MW_PWM_Close(untitled1_DW.obj.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
