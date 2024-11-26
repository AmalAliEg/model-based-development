/*
 * File: push_button_Led.c
 *
 * Code generated for Simulink model 'push_button_Led'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 08:25:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "push_button_Led.h"
#include "rtwtypes.h"
#include "push_button_Led_private.h"

/* Block signals (default storage) */
B_push_button_Led_T push_button_Led_B;

/* Block states (default storage) */
DW_push_button_Led_T push_button_Led_DW;

/* Real-time model */
static RT_MODEL_push_button_Led_T push_button_Led_M_;
RT_MODEL_push_button_Led_T *const push_button_Led_M = &push_button_Led_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void push_button_Led_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(push_button_Led_M, 1));
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
  (push_button_Led_M->Timing.TaskCounters.TID[1])++;
  if ((push_button_Led_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    push_button_Led_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 */
void push_butt_IfActionSubsystem(boolean_T *rty_Out1,
  P_IfActionSubsystem_push_butt_T *localP)
{
  /* SignalConversion generated from: '<S1>/Out1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* Model step function for TID0 */
void push_button_Led_step0(void)       /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  push_button_Led_M->Timing.taskTime0 =
    ((time_T)(++push_button_Led_M->Timing.clockTick0)) *
    push_button_Led_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void push_button_Led_step1(void)       /* Sample time: [0.1s, 0.0s] */
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(push_button_Led_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* MATLABSystem: '<Root>/Digital Input' */
  if (push_button_Led_DW.obj.SampleTime !=
      push_button_Led_P.DigitalInput_SampleTime) {
    push_button_Led_DW.obj.SampleTime =
      push_button_Led_P.DigitalInput_SampleTime;
  }

  /* MATLABSystem: '<Root>/Digital Input' */
  push_button_Led_B.DigitalInput = readDigitalPin(2);

  /* If: '<Root>/If' */
  if (push_button_Led_B.DigitalInput) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    push_butt_IfActionSubsystem(&push_button_Led_B.Merge,
      &push_button_Led_P.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    push_butt_IfActionSubsystem(&push_button_Led_B.Merge,
      &push_button_Led_P.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* MATLABSystem: '<Root>/Digital Output' */
  writeDigitalPin(3, (uint8_T)push_button_Led_B.Merge);

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  push_button_Led_M->Timing.clockTick1++;
}

/* Model initialize function */
void push_button_Led_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(push_button_Led_M, -1);
  push_button_Led_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  push_button_Led_M->Sizes.checksums[0] = (2935523810U);
  push_button_Led_M->Sizes.checksums[1] = (3363868824U);
  push_button_Led_M->Sizes.checksums[2] = (1603900128U);
  push_button_Led_M->Sizes.checksums[3] = (2358246033U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    push_button_Led_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)
      &push_button_Led_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &push_button_Led_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(push_button_Led_M->extModeInfo,
      &push_button_Led_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(push_button_Led_M->extModeInfo,
                        push_button_Led_M->Sizes.checksums);
    rteiSetTPtr(push_button_Led_M->extModeInfo, rtmGetTPtr(push_button_Led_M));
  }

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  push_button_Led_DW.obj.matlabCodegenIsDeleted = false;
  push_button_Led_DW.obj.SampleTime = push_button_Led_P.DigitalInput_SampleTime;
  push_button_Led_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  push_button_Led_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  push_button_Led_DW.obj_l.matlabCodegenIsDeleted = false;
  push_button_Led_DW.obj_l.isInitialized = 1L;
  digitalIOSetup(3, 1);
  push_button_Led_DW.obj_l.isSetupComplete = true;
}

/* Model terminate function */
void push_button_Led_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!push_button_Led_DW.obj.matlabCodegenIsDeleted) {
    push_button_Led_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!push_button_Led_DW.obj_l.matlabCodegenIsDeleted) {
    push_button_Led_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
