/*
 * untitled1.c
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "untitled1".
 *
 * Model version              : 1.0
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C source code generated on : Sun Sep 15 15:28:18 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled1.h"
#include "rtwtypes.h"
#include "untitled1_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <math.h>

/* Block states (default storage) */
DW_untitled1_T untitled1_DW;

/* Real-time model */
static RT_MODEL_untitled1_T untitled1_M_;
RT_MODEL_untitled1_T *const untitled1_M = &untitled1_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void untitled1_step(void)
{
  real_T rtb_PulseGenerator;
  real_T tmp;
  uint8_T tmp_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (untitled1_DW.clockTickCounter <
                        untitled1_P.PulseGenerator_Duty) &&
    (untitled1_DW.clockTickCounter >= 0L) ? untitled1_P.PulseGenerator_Amp : 0.0;
  if (untitled1_DW.clockTickCounter >= untitled1_P.PulseGenerator_Period - 1.0)
  {
    untitled1_DW.clockTickCounter = 0L;
  } else {
    untitled1_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<Root>/Digital Output' */
  tmp = rt_roundd_snf(rtb_PulseGenerator);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(4, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(untitled1_M->rtwLogInfo, (&untitled1_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(untitled1_M)!=-1) &&
        !((rtmGetTFinal(untitled1_M)-untitled1_M->Timing.taskTime0) >
          untitled1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled1_M->Timing.clockTick0)) {
    ++untitled1_M->Timing.clockTickH0;
  }

  untitled1_M->Timing.taskTime0 = untitled1_M->Timing.clockTick0 *
    untitled1_M->Timing.stepSize0 + untitled1_M->Timing.clockTickH0 *
    untitled1_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void untitled1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled1_M, 0,
                sizeof(RT_MODEL_untitled1_T));
  rtmSetTFinal(untitled1_M, 10.0);
  untitled1_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    untitled1_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled1_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled1_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled1_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled1_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled1_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled1_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled1_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(untitled1_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled1_M->rtwLogInfo, 1);
    rtliSetLogY(untitled1_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled1_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled1_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&untitled1_DW, 0,
                sizeof(DW_untitled1_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(untitled1_M->rtwLogInfo, 0.0, rtmGetTFinal
    (untitled1_M), untitled1_M->Timing.stepSize0, (&rtmGetErrorStatus
    (untitled1_M)));

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  untitled1_DW.clockTickCounter = 0L;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled1_DW.obj.matlabCodegenIsDeleted = false;
  untitled1_DW.objisempty = true;
  untitled1_DW.obj.isInitialized = 1L;
  digitalIOSetup(4, 1);
  untitled1_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void untitled1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled1_DW.obj.matlabCodegenIsDeleted) {
    untitled1_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}
