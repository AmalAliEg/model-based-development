/*
 * File: push_button.c
 *
 * Code generated for Simulink model 'push_button'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 07:17:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "push_button.h"
#include "push_button_private.h"

/* Block signals (default storage) */
B_push_button_T push_button_B;

/* Block states (default storage) */
DW_push_button_T push_button_DW;

/* Real-time model */
static RT_MODEL_push_button_T push_button_M_;
RT_MODEL_push_button_T *const push_button_M = &push_button_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void push_button_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(push_button_M, 1));
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
  (push_button_M->Timing.TaskCounters.TID[1])++;
  if ((push_button_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    push_button_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void push_button_step0(void)           /* Sample time: [0.001s, 0.0s] */
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
  push_button_M->Timing.taskTime0 =
    ((time_T)(++push_button_M->Timing.clockTick0)) *
    push_button_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void push_button_step1(void)           /* Sample time: [0.1s, 0.0s] */
{
  /* MATLABSystem: '<Root>/Digital Input' */
  if (push_button_DW.obj.SampleTime != push_button_P.DigitalInput_SampleTime) {
    push_button_DW.obj.SampleTime = push_button_P.DigitalInput_SampleTime;
  }

  /* MATLABSystem: '<Root>/Digital Input' */
  push_button_B.DigitalInput = readDigitalPin(2);

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  push_button_M->Timing.clockTick1++;
}

/* Model initialize function */
void push_button_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(push_button_M, -1);
  push_button_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  push_button_M->Sizes.checksums[0] = (165288915U);
  push_button_M->Sizes.checksums[1] = (2858237696U);
  push_button_M->Sizes.checksums[2] = (1915844115U);
  push_button_M->Sizes.checksums[3] = (754000141U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    push_button_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(push_button_M->extModeInfo,
      &push_button_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(push_button_M->extModeInfo,
                        push_button_M->Sizes.checksums);
    rteiSetTPtr(push_button_M->extModeInfo, rtmGetTPtr(push_button_M));
  }

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  push_button_DW.obj.matlabCodegenIsDeleted = false;
  push_button_DW.obj.SampleTime = push_button_P.DigitalInput_SampleTime;
  push_button_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  push_button_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void push_button_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!push_button_DW.obj.matlabCodegenIsDeleted) {
    push_button_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
