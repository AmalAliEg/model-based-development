/*
 * File: PID_Controller_block.c
 *
 * Code generated for Simulink model 'PID_Controller_block'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Jan  8 14:37:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "PID_Controller_block.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void PID_Controller_block_step(void)
{
  real_T rtb_Diff;
  real_T rtb_Sum;
  real_T rtb_TSamp;

  /* Outputs for Atomic SubSystem: '<Root>/PID_Controller_block' */
  /* Sum: '<S1>/Sum' incorporates:
   *  Inport: '<Root>/ActualOut'
   *  Inport: '<Root>/ExpectedOut'
   */
  rtb_Sum = rtU.ExpectedOut - rtU.outputsignal;

  /* Outputs for Atomic SubSystem: '<S1>/discrete_derivative' */
  /* SampleTimeMath: '<S4>/TSamp' incorporates:
   *  Gain: '<S1>/Kd'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  rtb_TSamp = 7.0 * rtb_Sum * 1000.0;

  /* Sum: '<S4>/Diff' incorporates:
   *  UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S4>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Diff = rtb_TSamp - rtDW.UD_DSTATE;

  /* Update for UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/UD':
   *
   *  Store in Global RAM
   */
  rtDW.UD_DSTATE = rtb_TSamp;

  /* End of Outputs for SubSystem: '<S1>/discrete_derivative' */

  /* Outputs for Atomic SubSystem: '<S1>/discrete_integrator_block' */
  /* Outport: '<Root>/CtrlSig' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  Gain: '<S1>/Kp'
   *  Sum: '<S1>/Sum1'
   */
  rtY.CtrlSig = (26.0 * rtb_Sum + rtDW.DiscreteTimeIntegrator_DSTATE) + rtb_Diff;

  /* End of Outputs for SubSystem: '<S1>/discrete_integrator_block' */

  /* Update for Atomic SubSystem: '<S1>/discrete_integrator_block' */
  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S1>/Ki'
   */
  rtDW.DiscreteTimeIntegrator_DSTATE += 30.0 * rtb_Sum * 0.001;

  /* End of Update for SubSystem: '<S1>/discrete_integrator_block' */
  /* End of Outputs for SubSystem: '<Root>/PID_Controller_block' */
}

/* Model initialize function */
void PID_Controller_block_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
