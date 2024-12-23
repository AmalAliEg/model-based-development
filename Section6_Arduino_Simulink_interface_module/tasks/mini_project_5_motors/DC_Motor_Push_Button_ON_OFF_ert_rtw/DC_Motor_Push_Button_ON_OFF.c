/*
 * File: DC_Motor_Push_Button_ON_OFF.c
 *
 * Code generated for Simulink model 'DC_Motor_Push_Button_ON_OFF'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 27 13:20:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DC_Motor_Push_Button_ON_OFF.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_DC_Motor_Push_Button_ON_OF_T DC_Motor_Push_Button_ON_OFF_DW;

/* Real-time model */
static RT_MODEL_DC_Motor_Push_Button_T DC_Motor_Push_Button_ON_OFF_M_;
RT_MODEL_DC_Motor_Push_Button_T *const DC_Motor_Push_Button_ON_OFF_M =
  &DC_Motor_Push_Button_ON_OFF_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void DC_Motor_Push_Button_ON_OFF_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(DC_Motor_Push_Button_ON_OFF_M, 1));
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
  (DC_Motor_Push_Button_ON_OFF_M->Timing.TaskCounters.TID[1])++;
  if ((DC_Motor_Push_Button_ON_OFF_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    DC_Motor_Push_Button_ON_OFF_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void DC_Motor_Push_Button_ON_OFF_step0(void) /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void DC_Motor_Push_Button_ON_OFF_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  boolean_T c_value;

  /* MATLABSystem: '<Root>/button status' */
  if (DC_Motor_Push_Button_ON_OFF_DW.obj.SampleTime !=
      DC_Motor_Push_Button_ON_OFF_P.buttonstatus_SampleTime) {
    DC_Motor_Push_Button_ON_OFF_DW.obj.SampleTime =
      DC_Motor_Push_Button_ON_OFF_P.buttonstatus_SampleTime;
  }

  c_value = readDigitalPin(5);

  /* Outputs for Enabled SubSystem: '<Root>/debbouncing' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<Root>/button status'
   * */
  if (!c_value) {
    if (!DC_Motor_Push_Button_ON_OFF_DW.debbouncing_MODE) {
      /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
      DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE =
        DC_Motor_Push_Button_ON_OFF_P.UnitDelay_InitialCondition;
      DC_Motor_Push_Button_ON_OFF_DW.debbouncing_MODE = true;
    }

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE +=
      DC_Motor_Push_Button_ON_OFF_P.Constant_Value;
  } else {
    DC_Motor_Push_Button_ON_OFF_DW.debbouncing_MODE = false;
  }

  /* End of Logic: '<Root>/NOT' */
  /* End of Outputs for SubSystem: '<Root>/debbouncing' */

  /* If: '<Root>/counter condition' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE == 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/motor energized' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Logic: '<S2>/NOT' incorporates:
     *  UnitDelay: '<S2>/Unit Delay'
     */
    DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE_m =
      !DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE_m;

    /* End of Outputs for SubSystem: '<Root>/motor energized' */
  }

  /* End of If: '<Root>/counter condition' */

  /* MATLABSystem: '<Root>/Digital Output to the motor' incorporates:
   *  UnitDelay: '<S2>/Unit Delay'
   */
  writeDigitalPin(2, (uint8_T)DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE_m);
}

/* Model initialize function */
void DC_Motor_Push_Button_ON_OFF_initialize(void)
{
  /* SystemInitialize for Enabled SubSystem: '<Root>/debbouncing' */
  /* SystemInitialize for Outport: '<S1>/counter ' incorporates:
   *  Sum: '<S1>/Sum'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE =
    DC_Motor_Push_Button_ON_OFF_P.counter_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/debbouncing' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/motor energized' */
  /* SystemInitialize for Outport: '<S2>/Out1' incorporates:
   *  Logic: '<S2>/NOT'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  DC_Motor_Push_Button_ON_OFF_DW.UnitDelay_DSTATE_m =
    DC_Motor_Push_Button_ON_OFF_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/motor energized' */

  /* Start for MATLABSystem: '<Root>/button status' */
  DC_Motor_Push_Button_ON_OFF_DW.obj.matlabCodegenIsDeleted = false;
  DC_Motor_Push_Button_ON_OFF_DW.obj.SampleTime =
    DC_Motor_Push_Button_ON_OFF_P.buttonstatus_SampleTime;
  DC_Motor_Push_Button_ON_OFF_DW.obj.isInitialized = 1L;
  digitalIOSetup(5, 2.0);
  DC_Motor_Push_Button_ON_OFF_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output to the motor' */
  DC_Motor_Push_Button_ON_OFF_DW.obj_f.matlabCodegenIsDeleted = false;
  DC_Motor_Push_Button_ON_OFF_DW.obj_f.isInitialized = 1L;
  digitalIOSetup(2, 1);
  DC_Motor_Push_Button_ON_OFF_DW.obj_f.isSetupComplete = true;
}

/* Model terminate function */
void DC_Motor_Push_Button_ON_OFF_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/button status' */
  if (!DC_Motor_Push_Button_ON_OFF_DW.obj.matlabCodegenIsDeleted) {
    DC_Motor_Push_Button_ON_OFF_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/button status' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */
  if (!DC_Motor_Push_Button_ON_OFF_DW.obj_f.matlabCodegenIsDeleted) {
    DC_Motor_Push_Button_ON_OFF_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
