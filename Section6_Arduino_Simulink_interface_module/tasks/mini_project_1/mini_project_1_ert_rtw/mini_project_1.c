/*
 * File: mini_project_1.c
 *
 * Code generated for Simulink model 'mini_project_1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 04:58:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "mini_project_1.h"
#include "rtwtypes.h"
#include "mini_project_1_private.h"

/* Block signals (default storage) */
B_mini_project_1_T mini_project_1_B;

/* Block states (default storage) */
DW_mini_project_1_T mini_project_1_DW;

/* Real-time model */
static RT_MODEL_mini_project_1_T mini_project_1_M_;
RT_MODEL_mini_project_1_T *const mini_project_1_M = &mini_project_1_M_;

/* Model step function */
void mini_project_1_step(void)
{
  real_T y;

  /* Constant: '<Root>/Constant' */
  mini_project_1_B.Constant = mini_project_1_P.Constant_Value;

  /* MATLABSystem: '<Root>/PWM' */
  mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);

  /* Start for MATLABSystem: '<Root>/PWM' */
  if (mini_project_1_B.Constant <= 255.0) {
    y = mini_project_1_B.Constant;
  } else {
    y = 255.0;
  }

  if (!(y >= 0.0)) {
    y = 0.0;
  }

  /* MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle(mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE, y);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  mini_project_1_M->Timing.taskTime0 =
    ((time_T)(++mini_project_1_M->Timing.clockTick0)) *
    mini_project_1_M->Timing.stepSize0;
}

/* Model initialize function */
void mini_project_1_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(mini_project_1_M, -1);
  mini_project_1_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  mini_project_1_M->Sizes.checksums[0] = (3929114457U);
  mini_project_1_M->Sizes.checksums[1] = (3943677367U);
  mini_project_1_M->Sizes.checksums[2] = (2350974385U);
  mini_project_1_M->Sizes.checksums[3] = (1758069069U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    mini_project_1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(mini_project_1_M->extModeInfo,
      &mini_project_1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(mini_project_1_M->extModeInfo,
                        mini_project_1_M->Sizes.checksums);
    rteiSetTPtr(mini_project_1_M->extModeInfo, rtmGetTPtr(mini_project_1_M));
  }

  /* Start for MATLABSystem: '<Root>/PWM' */
  mini_project_1_DW.obj.matlabCodegenIsDeleted = false;
  mini_project_1_DW.obj.isInitialized = 1L;
  mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(9UL, 0.0, 0.0);
  mini_project_1_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void mini_project_1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PWM' */
  if (!mini_project_1_DW.obj.matlabCodegenIsDeleted) {
    mini_project_1_DW.obj.matlabCodegenIsDeleted = true;
    if ((mini_project_1_DW.obj.isInitialized == 1L) &&
        mini_project_1_DW.obj.isSetupComplete) {
      mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);
      MW_PWM_SetDutyCycle(mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);
      MW_PWM_Close(mini_project_1_DW.obj.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
