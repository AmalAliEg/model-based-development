/*
 * File: lab1_AC_Source.c
 *
 * Code generated for Simulink model 'lab1_AC_Source'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 19:51:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab1_AC_Source.h"
#include "rtwtypes.h"
#include "lab1_AC_Source_private.h"
#include <math.h>

/* Block states (default storage) */
DW_lab1_AC_Source_T lab1_AC_Source_DW;

/* Real-time model */
static RT_MODEL_lab1_AC_Source_T lab1_AC_Source_M_;
RT_MODEL_lab1_AC_Source_T *const lab1_AC_Source_M = &lab1_AC_Source_M_;

/* Output and update for enable system: '<Root>/one' */
void lab1_AC_Source_one(boolean_T rtu_Enable, real_T *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<Root>/one' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S3>/Out1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    *rty_Out1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<Root>/one' */
}

/* Output and update for enable system: '<Root>/zero' */
void lab1_AC_Source_zero(boolean_T rtu_Enable, real_T *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<Root>/zero' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S4>/Out1' incorporates:
     *  Constant: '<S4>/Constant'
     */
    *rty_Out1 = 0.0;
  }

  /* End of Outputs for SubSystem: '<Root>/zero' */
}

/* Model step function */
void lab1_AC_Source_step(void)
{
  real_T rtb_SineWave;
  boolean_T rtb_LogicalOperator;

  /* Sin: '<Root>/Sine Wave' */
  if (lab1_AC_Source_DW.systemEnable != 0) {
    rtb_SineWave = 5.0 * ((lab1_AC_Source_M->Timing.clockTick0) * 0.001);
    lab1_AC_Source_DW.lastSin = sin(rtb_SineWave);
    lab1_AC_Source_DW.lastCos = cos(rtb_SineWave);
    lab1_AC_Source_DW.systemEnable = 0;
  }

  rtb_SineWave = ((lab1_AC_Source_DW.lastSin * 0.99998750002604164 +
                   lab1_AC_Source_DW.lastCos * -0.0049999791666927081) *
                  0.99998750002604164 + (lab1_AC_Source_DW.lastCos *
    0.99998750002604164 - lab1_AC_Source_DW.lastSin * -0.0049999791666927081) *
                  0.0049999791666927081) * 220.0;

  /* End of Sin: '<Root>/Sine Wave' */

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtb_LogicalOperator = ((rtb_SineWave >= 0.0) && (rtb_SineWave < 2.0));

  /* Outputs for Enabled SubSystem: '<Root>/one' */
  /* SignalConversion generated from: '<S3>/Enable' */
  lab1_AC_Source_one(rtb_LogicalOperator, &rtb_SineWave);

  /* End of Outputs for SubSystem: '<Root>/one' */

  /* Outputs for Enabled SubSystem: '<Root>/zero' */
  /* Logic: '<Root>/NOT' */
  lab1_AC_Source_zero(!rtb_LogicalOperator, &rtb_SineWave);

  /* End of Outputs for SubSystem: '<Root>/zero' */

  /* Update for Sin: '<Root>/Sine Wave' */
  rtb_SineWave = lab1_AC_Source_DW.lastSin;
  lab1_AC_Source_DW.lastSin = lab1_AC_Source_DW.lastSin * 0.99998750002604164 +
    lab1_AC_Source_DW.lastCos * 0.0049999791666927081;
  lab1_AC_Source_DW.lastCos = lab1_AC_Source_DW.lastCos * 0.99998750002604164 -
    rtb_SineWave * 0.0049999791666927081;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  lab1_AC_Source_M->Timing.clockTick0++;
}

/* Model initialize function */
void lab1_AC_Source_initialize(void)
{
  /* Enable for Sin: '<Root>/Sine Wave' */
  lab1_AC_Source_DW.systemEnable = 1;
}

/* Model terminate function */
void lab1_AC_Source_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
