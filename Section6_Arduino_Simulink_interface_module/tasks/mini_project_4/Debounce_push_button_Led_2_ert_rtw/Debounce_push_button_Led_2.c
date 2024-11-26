/*
 * File: Debounce_push_button_Led_2.c
 *
 * Code generated for Simulink model 'Debounce_push_button_Led_2'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 09:07:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Debounce_push_button_Led_2.h"
#include "rtwtypes.h"
#include "Debounce_push_button_Led_2_private.h"

/* Block signals (default storage) */
B_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_B;

/* Block states (default storage) */
DW_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_DW;

/* Real-time model */
static RT_MODEL_Debounce_push_button_T Debounce_push_button_Led_2_M_;
RT_MODEL_Debounce_push_button_T *const Debounce_push_button_Led_2_M =
  &Debounce_push_button_Led_2_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Debounce_push_button_Led_2_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Debounce_push_button_Led_2_M, 1));
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
  (Debounce_push_button_Led_2_M->Timing.TaskCounters.TID[1])++;
  if ((Debounce_push_button_Led_2_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    Debounce_push_button_Led_2_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void Debounce_push_button_Led_2_step0(void) /* Sample time: [0.001s, 0.0s] */
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
  Debounce_push_button_Led_2_M->Timing.taskTime0 =
    ((time_T)(++Debounce_push_button_Led_2_M->Timing.clockTick0)) *
    Debounce_push_button_Led_2_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void Debounce_push_button_Led_2_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(Debounce_push_button_Led_2_DW.EnabledSubsystem_SubsysRanBC);

  /* MATLABSystem: '<Root>/PushButtonStatus' */
  if (Debounce_push_button_Led_2_DW.obj.SampleTime !=
      Debounce_push_button_Led_2_P.PushButtonStatus_SampleTime) {
    Debounce_push_button_Led_2_DW.obj.SampleTime =
      Debounce_push_button_Led_2_P.PushButtonStatus_SampleTime;
  }

  /* MATLABSystem: '<Root>/PushButtonStatus' */
  Debounce_push_button_Led_2_B.PushButtonStatus = readDigitalPin(2);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (Debounce_push_button_Led_2_B.PushButtonStatus) {
    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Debounce_push_button_Led_2_DW.UnitDelay_DSTATE +=
      Debounce_push_button_Led_2_P.Constant_Value;
    srUpdateBC(Debounce_push_button_Led_2_DW.EnabledSubsystem_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* Switch: '<Root>/PushButtonCondition' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (Debounce_push_button_Led_2_DW.UnitDelay_DSTATE >
      Debounce_push_button_Led_2_P.PushButtonCondition_Threshold) {
    /* Switch: '<Root>/PushButtonCondition' incorporates:
     *  Logic: '<Root>/NOT'
     *  UnitDelay: '<Root>/Unit Delay1'
     */
    Debounce_push_button_Led_2_B.PushButtonCondition =
      !Debounce_push_button_Led_2_DW.UnitDelay1_DSTATE;
  } else {
    /* Switch: '<Root>/PushButtonCondition' incorporates:
     *  UnitDelay: '<Root>/Unit Delay2'
     */
    Debounce_push_button_Led_2_B.PushButtonCondition =
      Debounce_push_button_Led_2_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<Root>/PushButtonCondition' */

  /* MATLABSystem: '<Root>/LedStatus' */
  writeDigitalPin(3, (uint8_T)Debounce_push_button_Led_2_B.PushButtonCondition);

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  Debounce_push_button_Led_2_DW.UnitDelay1_DSTATE =
    Debounce_push_button_Led_2_B.PushButtonCondition;

  /* Update for UnitDelay: '<Root>/Unit Delay2' */
  Debounce_push_button_Led_2_DW.UnitDelay2_DSTATE =
    Debounce_push_button_Led_2_B.PushButtonCondition;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Debounce_push_button_Led_2_M->Timing.clockTick1++;
}

/* Model initialize function */
void Debounce_push_button_Led_2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Debounce_push_button_Led_2_M, -1);
  Debounce_push_button_Led_2_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  Debounce_push_button_Led_2_M->Sizes.checksums[0] = (3217505395U);
  Debounce_push_button_Led_2_M->Sizes.checksums[1] = (3311276692U);
  Debounce_push_button_Led_2_M->Sizes.checksums[2] = (2020547452U);
  Debounce_push_button_Led_2_M->Sizes.checksums[3] = (1891582991U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    Debounce_push_button_Led_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &Debounce_push_button_Led_2_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Debounce_push_button_Led_2_M->extModeInfo,
      &Debounce_push_button_Led_2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Debounce_push_button_Led_2_M->extModeInfo,
                        Debounce_push_button_Led_2_M->Sizes.checksums);
    rteiSetTPtr(Debounce_push_button_Led_2_M->extModeInfo, rtmGetTPtr
                (Debounce_push_button_Led_2_M));
  }

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  Debounce_push_button_Led_2_DW.UnitDelay1_DSTATE =
    Debounce_push_button_Led_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  Debounce_push_button_Led_2_DW.UnitDelay2_DSTATE =
    Debounce_push_button_Led_2_P.UnitDelay2_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S1>/Out1' incorporates:
   *  Sum: '<S1>/Sum'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  Debounce_push_button_Led_2_DW.UnitDelay_DSTATE =
    Debounce_push_button_Led_2_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem' */

  /* Start for MATLABSystem: '<Root>/PushButtonStatus' */
  Debounce_push_button_Led_2_DW.obj.matlabCodegenIsDeleted = false;
  Debounce_push_button_Led_2_DW.obj.SampleTime =
    Debounce_push_button_Led_2_P.PushButtonStatus_SampleTime;
  Debounce_push_button_Led_2_DW.obj.isInitialized = 1L;
  digitalIOSetup(2, 0);
  Debounce_push_button_Led_2_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/LedStatus' */
  Debounce_push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted = false;
  Debounce_push_button_Led_2_DW.obj_l.isInitialized = 1L;
  digitalIOSetup(3, 1);
  Debounce_push_button_Led_2_DW.obj_l.isSetupComplete = true;
}

/* Model terminate function */
void Debounce_push_button_Led_2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PushButtonStatus' */
  if (!Debounce_push_button_Led_2_DW.obj.matlabCodegenIsDeleted) {
    Debounce_push_button_Led_2_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/PushButtonStatus' */

  /* Terminate for MATLABSystem: '<Root>/LedStatus' */
  if (!Debounce_push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted) {
    Debounce_push_button_Led_2_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/LedStatus' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
