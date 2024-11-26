/*
 * File: push_button_Led_2.c
 *
 * Code generated for Simulink model 'push_button_Led_2'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 08:46:50 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "push_button_Led_2.h"
#include "rtwtypes.h"
#include "push_button_Led_2_private.h"

/* Block signals (default storage) */
B_push_button_Led_2_T push_button_Led_2_B;

/* Block states (default storage) */
DW_push_button_Led_2_T push_button_Led_2_DW;

/* Real-time model */
static RT_MODEL_push_button_Led_2_T push_button_Led_2_M_;
RT_MODEL_push_button_Led_2_T *const push_button_Led_2_M = &push_button_Led_2_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void push_button_Led_2_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(push_button_Led_2_M, 1));
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
  (push_button_Led_2_M->Timing.TaskCounters.TID[1])++;
  if ((push_button_Led_2_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    push_button_Led_2_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void push_button_Led_2_step0(void)     /* Sample time: [0.001s, 0.0s] */
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
  push_button_Led_2_M->Timing.taskTime0 =
    ((time_T)(++push_button_Led_2_M->Timing.clockTick0)) *
    push_button_Led_2_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void push_button_Led_2_step1(void)     /* Sample time: [0.1s, 0.0s] */
{
  /* MATLABSystem: '<Root>/PushButtonStatus' */
  if (push_button_Led_2_DW.obj.SampleTime !=
      push_button_Led_2_P.PushButtonStatus_SampleTime) {
    push_button_Led_2_DW.obj.SampleTime =
      push_button_Led_2_P.PushButtonStatus_SampleTime;
  }

  /* MATLABSystem: '<Root>/PushButtonStatus' */
  push_button_Led_2_B.PushButtonStatus = readDigitalPin(2);

  /* Switch: '<Root>/PushButtonCondition' */
  if (push_button_Led_2_B.PushButtonStatus) {
    /* Switch: '<Root>/PushButtonCondition' incorporates:
     *  Logic: '<Root>/NOT'
     *  UnitDelay: '<Root>/Unit Delay1'
     */
    push_button_Led_2_B.PushButtonCondition =
      !push_button_Led_2_DW.UnitDelay1_DSTATE;
  } else {
    /* Switch: '<Root>/PushButtonCondition' incorporates:
     *  UnitDelay: '<Root>/Unit Delay2'
     */
    push_button_Led_2_B.PushButtonCondition =
      push_button_Led_2_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<Root>/PushButtonCondition' */

  /* MATLABSystem: '<Root>/LedStatus' */
  writeDigitalPin(3, (uint8_T)push_button_Led_2_B.PushButtonCondition);

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  push_button_Led_2_DW.UnitDelay1_DSTATE =
    push_button_Led_2_B.PushButtonCondition;

  /* Update for UnitDelay: '<Root>/Unit Delay2' */
  push_button_Led_2_DW.UnitDelay2_DSTATE =
    push_button_Led_2_B.PushButtonCondition;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  push_button_Led_2_M->Timing.clockTick1++;
}

/* Model initialize function */
void push_button_Led_2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(push_button_Led_2_M, -1);
  push_button_Led_2_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  push_button_Led_2_M->Sizes.checksums[0] = (836321947U);
  push_button_Led_2_M->Sizes.checksums[1] = (192174387U);
  push_button_Led_2_M->Sizes.checksums[2] = (849237184U);
  push_button_Led_2_M->Sizes.checksums[3] = (3495676118U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    push_button_Led_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(push_button_Led_2_M->extModeInfo,
      &push_button_Led_2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(push_button_Led_2_M->extModeInfo,
                        push_button_Led_2_M->Sizes.checksums);
    rteiSetTPtr(push_button_Led_2_M->extModeInfo, rtmGetTPtr(push_button_Led_2_M));
  }

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  push_button_Led_2_DW.UnitDelay1_DSTATE =
    push_button_Led_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  push_button_Led_2_DW.UnitDelay2_DSTATE =
    push_button_Led_2_P.UnitDelay2_InitialCondition;

  /* Start for MATLABSystem: '<Root>/PushButtonStatus' */
  push_button_Led_2_DW.obj.matlabCodegenIsDeleted = false;
  push_button_Led_2_DW.obj.SampleTime =
    push_button_Led_2_P.PushButtonStatus_SampleTime;
  push_button_Led_2_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  push_button_Led_2_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/LedStatus' */
  push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted = false;
  push_button_Led_2_DW.obj_l.isInitialized = 1L;
  digitalIOSetup(3, 1);
  push_button_Led_2_DW.obj_l.isSetupComplete = true;
}

/* Model terminate function */
void push_button_Led_2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PushButtonStatus' */
  if (!push_button_Led_2_DW.obj.matlabCodegenIsDeleted) {
    push_button_Led_2_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/PushButtonStatus' */

  /* Terminate for MATLABSystem: '<Root>/LedStatus' */
  if (!push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted) {
    push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/LedStatus' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
