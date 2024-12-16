/*
 * File: DC_Motor_control_Direction_Push_Button.c
 *
 * Code generated for Simulink model 'DC_Motor_control_Direction_Push_Button'.
 *
 * Model version                  : 1.33
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 27 14:35:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DC_Motor_control_Direction_Push_Button.h"
#include "rtwtypes.h"
#include "DC_Motor_control_Direction_Push_Button_private.h"
#include <math.h>

/* Block signals (default storage) */
B_DC_Motor_control_Direction__T DC_Motor_control_Direction_Pu_B;

/* Block states (default storage) */
DW_DC_Motor_control_Direction_T DC_Motor_control_Direction_P_DW;

/* Real-time model */
static RT_MODEL_DC_Motor_control_Dir_T DC_Motor_control_Direction_P_M_;
RT_MODEL_DC_Motor_control_Dir_T *const DC_Motor_control_Direction_P_M =
  &DC_Motor_control_Direction_P_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void DC_Motor_control_Direction_Push_Button_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(DC_Motor_control_Direction_P_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (DC_Motor_control_Direction_P_M->Timing.TaskCounters.TID[1])++;
  if ((DC_Motor_control_Direction_P_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    DC_Motor_control_Direction_P_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<Root>/motor energized'
 *    '<Root>/motor energized1'
 */
void DC_Motor_con_motorenergized(boolean_T rtu_Enable, real_T *rty_Out1, real_T *
  rty_Out2, P_motorenergized_DC_Motor_con_T *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/motor energized' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S1>/Out1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    *rty_Out1 = localP->Constant_Value;

    /* SignalConversion generated from: '<S1>/Out2' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    *rty_Out2 = localP->Constant1_Value;
  }

  /* End of Outputs for SubSystem: '<Root>/motor energized' */
}

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

/* Model step function for TID0 */
void DC_Motor_control_Direction_Push_Button_step0(void) /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void DC_Motor_control_Direction_Push_Button_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint8_T tmp_0;
  boolean_T c_value;

  /* MATLABSystem: '<Root>/button status' */
  if (DC_Motor_control_Direction_P_DW.obj_d.SampleTime !=
      DC_Motor_control_Direction_Pu_P.buttonstatus_SampleTime) {
    DC_Motor_control_Direction_P_DW.obj_d.SampleTime =
      DC_Motor_control_Direction_Pu_P.buttonstatus_SampleTime;
  }

  c_value = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/motor energized' */
  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<Root>/button status'
   * */
  DC_Motor_con_motorenergized(!c_value, &DC_Motor_control_Direction_Pu_B.Merge,
    &DC_Motor_control_Direction_Pu_B.Merge1,
    &DC_Motor_control_Direction_Pu_P.motorenergized);

  /* End of Outputs for SubSystem: '<Root>/motor energized' */

  /* MATLABSystem: '<Root>/button status1' */
  if (DC_Motor_control_Direction_P_DW.obj.SampleTime !=
      DC_Motor_control_Direction_Pu_P.buttonstatus1_SampleTime) {
    DC_Motor_control_Direction_P_DW.obj.SampleTime =
      DC_Motor_control_Direction_Pu_P.buttonstatus1_SampleTime;
  }

  c_value = readDigitalPin(3);

  /* Outputs for Enabled SubSystem: '<Root>/motor energized1' */
  /* Logic: '<Root>/NOT1' incorporates:
   *  MATLABSystem: '<Root>/button status1'
   * */
  DC_Motor_con_motorenergized(!c_value, &DC_Motor_control_Direction_Pu_B.Merge,
    &DC_Motor_control_Direction_Pu_B.Merge1,
    &DC_Motor_control_Direction_Pu_P.motorenergized1);

  /* End of Outputs for SubSystem: '<Root>/motor energized1' */

  /* MATLABSystem: '<Root>/Digital Output to the motor' */
  tmp = rt_roundd_snf(DC_Motor_control_Direction_Pu_B.Merge);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(8, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output to the motor' */

  /* MATLABSystem: '<Root>/Digital Output to the motor1' */
  tmp = rt_roundd_snf(DC_Motor_control_Direction_Pu_B.Merge1);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(9, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output to the motor1' */
}

/* Model initialize function */
void DC_Motor_control_Direction_Push_Button_initialize(void)
{
  /* SystemInitialize for Merge: '<Root>/Merge' */
  DC_Motor_control_Direction_Pu_B.Merge =
    DC_Motor_control_Direction_Pu_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<Root>/Merge1' */
  DC_Motor_control_Direction_Pu_B.Merge1 =
    DC_Motor_control_Direction_Pu_P.Merge1_InitialOutput;

  /* Start for MATLABSystem: '<Root>/button status' */
  DC_Motor_control_Direction_P_DW.obj_d.matlabCodegenIsDeleted = false;
  DC_Motor_control_Direction_P_DW.obj_d.SampleTime =
    DC_Motor_control_Direction_Pu_P.buttonstatus_SampleTime;
  DC_Motor_control_Direction_P_DW.obj_d.isInitialized = 1L;
  digitalIOSetup(2, 2.0);
  DC_Motor_control_Direction_P_DW.obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/button status1' */
  DC_Motor_control_Direction_P_DW.obj.matlabCodegenIsDeleted = false;
  DC_Motor_control_Direction_P_DW.obj.SampleTime =
    DC_Motor_control_Direction_Pu_P.buttonstatus1_SampleTime;
  DC_Motor_control_Direction_P_DW.obj.isInitialized = 1L;
  digitalIOSetup(3, 2.0);
  DC_Motor_control_Direction_P_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output to the motor' */
  DC_Motor_control_Direction_P_DW.obj_f.matlabCodegenIsDeleted = false;
  DC_Motor_control_Direction_P_DW.obj_f.isInitialized = 1L;
  digitalIOSetup(8, 1);
  DC_Motor_control_Direction_P_DW.obj_f.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output to the motor1' */
  DC_Motor_control_Direction_P_DW.obj_m.matlabCodegenIsDeleted = false;
  DC_Motor_control_Direction_P_DW.obj_m.isInitialized = 1L;
  digitalIOSetup(9, 1);
  DC_Motor_control_Direction_P_DW.obj_m.isSetupComplete = true;
}

/* Model terminate function */
void DC_Motor_control_Direction_Push_Button_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/button status' */
  if (!DC_Motor_control_Direction_P_DW.obj_d.matlabCodegenIsDeleted) {
    DC_Motor_control_Direction_P_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/button status' */

  /* Terminate for MATLABSystem: '<Root>/button status1' */
  if (!DC_Motor_control_Direction_P_DW.obj.matlabCodegenIsDeleted) {
    DC_Motor_control_Direction_P_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/button status1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */
  if (!DC_Motor_control_Direction_P_DW.obj_f.matlabCodegenIsDeleted) {
    DC_Motor_control_Direction_P_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output to the motor1' */
  if (!DC_Motor_control_Direction_P_DW.obj_m.matlabCodegenIsDeleted) {
    DC_Motor_control_Direction_P_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output to the motor1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
