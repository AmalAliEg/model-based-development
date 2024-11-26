/*
 * File: mini_project_2.c
 *
 * Code generated for Simulink model 'mini_project_2'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 05:52:10 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "mini_project_2.h"
#include "rtwtypes.h"
#include "mini_project_2_private.h"
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_mini_project_2_T mini_project_2_B;

/* Block states (default storage) */
DW_mini_project_2_T mini_project_2_DW;

/* Real-time model */
static RT_MODEL_mini_project_2_T mini_project_2_M_;
RT_MODEL_mini_project_2_T *const mini_project_2_M = &mini_project_2_M_;

/* Model step function */
void mini_project_2_step(void)
{
  real_T u0;
  uint16_T b_varargout_1;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (mini_project_2_DW.obj.SampleTime !=
      mini_project_2_P.AnalogInput_SampleTime) {
    mini_project_2_DW.obj.SampleTime = mini_project_2_P.AnalogInput_SampleTime;
  }

  mini_project_2_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(14UL);
  MW_AnalogInSingle_ReadResult
    (mini_project_2_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1,
     MW_ANALOGIN_UINT16);

  /* Gain: '<Root>/Gain' incorporates:
   *  MATLABSystem: '<Root>/Analog Input'
   * */
  mini_project_2_B.Gain = (uint32_T)mini_project_2_P.Gain_Gain * b_varargout_1;

  /* MATLABSystem: '<Root>/PWM' */
  mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);

  /* Start for MATLABSystem: '<Root>/PWM' incorporates:
   *  Gain: '<Root>/Gain'
   */
  u0 = (real_T)mini_project_2_B.Gain * 3.814697265625E-6;
  if (!(u0 <= 255.0)) {
    u0 = 255.0;
  }

  /* MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle(mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE, u0);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  mini_project_2_M->Timing.taskTime0 =
    ((time_T)(++mini_project_2_M->Timing.clockTick0)) *
    mini_project_2_M->Timing.stepSize0;
}

/* Model initialize function */
void mini_project_2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(mini_project_2_M, -1);
  mini_project_2_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  mini_project_2_M->Sizes.checksums[0] = (396502902U);
  mini_project_2_M->Sizes.checksums[1] = (2891255945U);
  mini_project_2_M->Sizes.checksums[2] = (1804546958U);
  mini_project_2_M->Sizes.checksums[3] = (3124251199U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    mini_project_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(mini_project_2_M->extModeInfo,
      &mini_project_2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(mini_project_2_M->extModeInfo,
                        mini_project_2_M->Sizes.checksums);
    rteiSetTPtr(mini_project_2_M->extModeInfo, rtmGetTPtr(mini_project_2_M));
  }

  /* Start for MATLABSystem: '<Root>/Analog Input' */
  mini_project_2_DW.obj.matlabCodegenIsDeleted = false;
  mini_project_2_DW.obj.SampleTime = mini_project_2_P.AnalogInput_SampleTime;
  mini_project_2_DW.obj.isInitialized = 1L;
  mini_project_2_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(14UL);
  mini_project_2_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/PWM' */
  mini_project_2_DW.obj_i.matlabCodegenIsDeleted = false;
  mini_project_2_DW.obj_i.isInitialized = 1L;
  mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(9UL, 0.0, 0.0);
  mini_project_2_DW.obj_i.isSetupComplete = true;
}

/* Model terminate function */
void mini_project_2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!mini_project_2_DW.obj.matlabCodegenIsDeleted) {
    mini_project_2_DW.obj.matlabCodegenIsDeleted = true;
    if ((mini_project_2_DW.obj.isInitialized == 1L) &&
        mini_project_2_DW.obj.isSetupComplete) {
      mini_project_2_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(14UL);
      MW_AnalogIn_Close
        (mini_project_2_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  if (!mini_project_2_DW.obj_i.matlabCodegenIsDeleted) {
    mini_project_2_DW.obj_i.matlabCodegenIsDeleted = true;
    if ((mini_project_2_DW.obj_i.isInitialized == 1L) &&
        mini_project_2_DW.obj_i.isSetupComplete) {
      mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);
      MW_PWM_SetDutyCycle(mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE,
                          0.0);
      mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(9UL);
      MW_PWM_Close(mini_project_2_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
