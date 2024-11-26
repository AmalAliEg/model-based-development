/*
 * File: Servo_check_initial_pos_Motor.c
 *
 * Code generated for Simulink model 'Servo_check_initial_pos_Motor'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Nov 25 14:48:56 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Servo_check_initial_pos_Motor.h"
#include "rtwtypes.h"
#include "Servo_check_initial_pos_Motor_private.h"

/* Block signals (default storage) */
B_Servo_check_initial_pos_Mot_T Servo_check_initial_pos_Motor_B;

/* Block states (default storage) */
DW_Servo_check_initial_pos_Mo_T Servo_check_initial_pos_Moto_DW;

/* Real-time model */
static RT_MODEL_Servo_check_initial__T Servo_check_initial_pos_Moto_M_;
RT_MODEL_Servo_check_initial__T *const Servo_check_initial_pos_Moto_M =
  &Servo_check_initial_pos_Moto_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Servo_check_initial_pos_Motor_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Servo_check_initial_pos_Moto_M, 1));
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
  (Servo_check_initial_pos_Moto_M->Timing.TaskCounters.TID[1])++;
  if ((Servo_check_initial_pos_Moto_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    Servo_check_initial_pos_Moto_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void Servo_check_initial_pos_Motor_step0(void) /* Sample time: [0.001s, 0.0s] */
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
  Servo_check_initial_pos_Moto_M->Timing.taskTime0 =
    ((time_T)(++Servo_check_initial_pos_Moto_M->Timing.clockTick0)) *
    Servo_check_initial_pos_Moto_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void Servo_check_initial_pos_Motor_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  uint16_T b_varargout_1;
  uint8_T tmp;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (Servo_check_initial_pos_Moto_DW.obj.SampleTime !=
      Servo_check_initial_pos_Motor_P.AnalogInput_SampleTime) {
    Servo_check_initial_pos_Moto_DW.obj.SampleTime =
      Servo_check_initial_pos_Motor_P.AnalogInput_SampleTime;
  }

  Servo_check_initial_pos_Moto_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(18UL);
  MW_AnalogInSingle_ReadResult
    (Servo_check_initial_pos_Moto_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &b_varargout_1, MW_ANALOGIN_UINT16);

  /* Gain: '<Root>/Gain' incorporates:
   *  MATLABSystem: '<Root>/Analog Input'
   * */
  Servo_check_initial_pos_Motor_B.Gain = (uint8_T)(((uint32_T)
    Servo_check_initial_pos_Motor_P.Gain_Gain * b_varargout_1) >> 18);

  /* MATLABSystem: '<Root>/Standard Servo Write' */
  if (Servo_check_initial_pos_Motor_B.Gain > 180) {
    tmp = 180U;
  } else {
    tmp = Servo_check_initial_pos_Motor_B.Gain;
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Standard Servo Write' */
  /* MATLABSystem: '<Root>/Standard Servo Read' */
  if (Servo_check_initial_pos_Moto_DW.obj_e.SampleTime !=
      Servo_check_initial_pos_Motor_P.StandardServoRead_SampleTime) {
    Servo_check_initial_pos_Moto_DW.obj_e.SampleTime =
      Servo_check_initial_pos_Motor_P.StandardServoRead_SampleTime;
  }

  /* MATLABSystem: '<Root>/Standard Servo Read' */
  Servo_check_initial_pos_Motor_B.StandardServoRead = MW_servoRead(0);

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Servo_check_initial_pos_Moto_M->Timing.clockTick1++;
}

/* Model initialize function */
void Servo_check_initial_pos_Motor_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Servo_check_initial_pos_Moto_M, -1);
  Servo_check_initial_pos_Moto_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  Servo_check_initial_pos_Moto_M->Sizes.checksums[0] = (4078447983U);
  Servo_check_initial_pos_Moto_M->Sizes.checksums[1] = (99911159U);
  Servo_check_initial_pos_Moto_M->Sizes.checksums[2] = (894510821U);
  Servo_check_initial_pos_Moto_M->Sizes.checksums[3] = (847531166U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    Servo_check_initial_pos_Moto_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Servo_check_initial_pos_Moto_M->extModeInfo,
      &Servo_check_initial_pos_Moto_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Servo_check_initial_pos_Moto_M->extModeInfo,
                        Servo_check_initial_pos_Moto_M->Sizes.checksums);
    rteiSetTPtr(Servo_check_initial_pos_Moto_M->extModeInfo, rtmGetTPtr
                (Servo_check_initial_pos_Moto_M));
  }

  /* Start for MATLABSystem: '<Root>/Analog Input' */
  Servo_check_initial_pos_Moto_DW.obj.matlabCodegenIsDeleted = false;
  Servo_check_initial_pos_Moto_DW.obj.SampleTime =
    Servo_check_initial_pos_Motor_P.AnalogInput_SampleTime;
  Servo_check_initial_pos_Moto_DW.obj.isInitialized = 1L;
  Servo_check_initial_pos_Moto_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(18UL);
  Servo_check_initial_pos_Moto_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Standard Servo Write' */
  Servo_check_initial_pos_Moto_DW.obj_b.matlabCodegenIsDeleted = false;
  Servo_check_initial_pos_Moto_DW.obj_b.isInitialized = 1L;
  MW_servoAttach(0, 9);
  Servo_check_initial_pos_Moto_DW.obj_b.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Standard Servo Read' */
  Servo_check_initial_pos_Moto_DW.obj_e.matlabCodegenIsDeleted = false;
  Servo_check_initial_pos_Moto_DW.obj_e.SampleTime =
    Servo_check_initial_pos_Motor_P.StandardServoRead_SampleTime;
  Servo_check_initial_pos_Moto_DW.obj_e.isInitialized = 1L;
  MW_servoAttach(0, 9);
  Servo_check_initial_pos_Moto_DW.obj_e.isSetupComplete = true;
}

/* Model terminate function */
void Servo_check_initial_pos_Motor_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!Servo_check_initial_pos_Moto_DW.obj.matlabCodegenIsDeleted) {
    Servo_check_initial_pos_Moto_DW.obj.matlabCodegenIsDeleted = true;
    if ((Servo_check_initial_pos_Moto_DW.obj.isInitialized == 1L) &&
        Servo_check_initial_pos_Moto_DW.obj.isSetupComplete) {
      Servo_check_initial_pos_Moto_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(18UL);
      MW_AnalogIn_Close
        (Servo_check_initial_pos_Moto_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/Standard Servo Write' */
  if (!Servo_check_initial_pos_Moto_DW.obj_b.matlabCodegenIsDeleted) {
    Servo_check_initial_pos_Moto_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Standard Servo Write' */
  /* Terminate for MATLABSystem: '<Root>/Standard Servo Read' */
  if (!Servo_check_initial_pos_Moto_DW.obj_e.matlabCodegenIsDeleted) {
    Servo_check_initial_pos_Moto_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Standard Servo Read' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
