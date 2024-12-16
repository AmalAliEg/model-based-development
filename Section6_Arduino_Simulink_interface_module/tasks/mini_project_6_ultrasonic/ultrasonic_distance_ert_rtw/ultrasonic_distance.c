/*
 * File: ultrasonic_distance.c
 *
 * Code generated for Simulink model 'ultrasonic_distance'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Nov 28 09:37:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ultrasonic_distance.h"
#include "rtwtypes.h"
#include <stddef.h>

/* Block states (default storage) */
DW_ultrasonic_distance_T ultrasonic_distance_DW;

/* Real-time model */
static RT_MODEL_ultrasonic_distance_T ultrasonic_distance_M_;
RT_MODEL_ultrasonic_distance_T *const ultrasonic_distance_M =
  &ultrasonic_distance_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void ultrasonic_distance_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(ultrasonic_distance_M, 1));
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
  (ultrasonic_distance_M->Timing.TaskCounters.TID[1])++;
  if ((ultrasonic_distance_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    ultrasonic_distance_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void ultrasonic_distance_step0(void)   /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void ultrasonic_distance_step1(void)   /* Sample time: [0.1s, 0.0s] */
{
  real_T dataIn;
  uint32_T duration;

  /* MATLABSystem: '<Root>/Ultrasonic Sensor' */
  if (ultrasonic_distance_DW.obj_h.TunablePropsChanged) {
    ultrasonic_distance_DW.obj_h.TunablePropsChanged = false;
  }

  MW_UltrasonicRead(&duration, 1, 4, 5, 10);

  /* MATLABSystem: '<Root>/Serial Transmit' incorporates:
   *  MATLABSystem: '<Root>/Ultrasonic Sensor'
   * */
  if (ultrasonic_distance_DW.obj.Protocol !=
      ultrasonic_distance_P.SerialTransmit_Protocol) {
    ultrasonic_distance_DW.obj.Protocol =
      ultrasonic_distance_P.SerialTransmit_Protocol;
  }

  dataIn = (real_T)duration * 0.000343 / 2.0;
  MW_Serial_write(ultrasonic_distance_DW.obj.port, &dataIn, 1.0,
                  ultrasonic_distance_DW.obj.dataSizeInBytes,
                  ultrasonic_distance_DW.obj.sendModeEnum,
                  ultrasonic_distance_DW.obj.dataType,
                  ultrasonic_distance_DW.obj.sendFormatEnum, 2.0, '\x00', NULL,
                  0.0, NULL, 0.0);

  /* End of MATLABSystem: '<Root>/Serial Transmit' */
}

/* Model initialize function */
void ultrasonic_distance_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Ultrasonic Sensor' */
  ultrasonic_distance_DW.obj_h.isInitialized = 1L;
  MW_UltrasonicSetup(4, 5);
  ultrasonic_distance_DW.obj_h.TunablePropsChanged = false;

  /* Start for MATLABSystem: '<Root>/Serial Transmit' */
  ultrasonic_distance_DW.obj.matlabCodegenIsDeleted = false;
  ultrasonic_distance_DW.obj.Protocol =
    ultrasonic_distance_P.SerialTransmit_Protocol;
  ultrasonic_distance_DW.obj.isInitialized = 1L;
  ultrasonic_distance_DW.obj.port = 0.0;
  ultrasonic_distance_DW.obj.dataSizeInBytes = 8.0;
  ultrasonic_distance_DW.obj.dataType = 6.0;
  ultrasonic_distance_DW.obj.sendModeEnum = 2.0;
  ultrasonic_distance_DW.obj.sendFormatEnum = 0.0;
  MW_SCI_Open(0);
  ultrasonic_distance_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void ultrasonic_distance_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Transmit' */
  if (!ultrasonic_distance_DW.obj.matlabCodegenIsDeleted) {
    ultrasonic_distance_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Transmit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
