/*
 * File: bluetooth_send.c
 *
 * Code generated for Simulink model 'bluetooth_send'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Nov 29 00:46:06 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "bluetooth_send.h"
#include "rtwtypes.h"
#include <stddef.h>

/* Block states (default storage) */
DW_bluetooth_send_T bluetooth_send_DW;

/* Real-time model */
static RT_MODEL_bluetooth_send_T bluetooth_send_M_;
RT_MODEL_bluetooth_send_T *const bluetooth_send_M = &bluetooth_send_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void bluetooth_send_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(bluetooth_send_M, 1));
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
  (bluetooth_send_M->Timing.TaskCounters.TID[1])++;
  if ((bluetooth_send_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    bluetooth_send_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void bluetooth_send_step0(void)        /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void bluetooth_send_step1(void)        /* Sample time: [0.1s, 0.0s] */
{
  real_T dataIn;
  uint8_T b_dataOut;
  uint8_T b_status;

  /* MATLABSystem: '<Root>/Serial Transmit' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (bluetooth_send_DW.obj.Protocol != bluetooth_send_P.SerialTransmit_Protocol)
  {
    bluetooth_send_DW.obj.Protocol = bluetooth_send_P.SerialTransmit_Protocol;
  }

  dataIn = bluetooth_send_P.Constant_Value;
  MW_Serial_write(bluetooth_send_DW.obj.port, &dataIn, 1.0,
                  bluetooth_send_DW.obj.dataSizeInBytes,
                  bluetooth_send_DW.obj.sendModeEnum,
                  bluetooth_send_DW.obj.dataType,
                  bluetooth_send_DW.obj.sendFormatEnum, 2.0, '\x00', NULL, 0.0,
                  NULL, 0.0);

  /* End of MATLABSystem: '<Root>/Serial Transmit' */

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (bluetooth_send_DW.obj_p.Protocol !=
      bluetooth_send_P.SerialReceive_Protocol) {
    bluetooth_send_DW.obj_p.Protocol = bluetooth_send_P.SerialReceive_Protocol;
  }

  if (bluetooth_send_DW.obj_p.QueueSizeFactor !=
      bluetooth_send_P.SerialReceive_QueueSizeFactor) {
    bluetooth_send_DW.obj_p.QueueSizeFactor =
      bluetooth_send_P.SerialReceive_QueueSizeFactor;
  }

  MW_Serial_read(0, bluetooth_send_DW.obj_p.DataSizeInBytes, &b_dataOut,
                 &b_status, NULL, 0.0, NULL, 0.0);

  /* End of MATLABSystem: '<Root>/Serial Receive' */
}

/* Model initialize function */
void bluetooth_send_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Serial Transmit' */
  bluetooth_send_DW.obj.matlabCodegenIsDeleted = false;
  bluetooth_send_DW.obj.Protocol = bluetooth_send_P.SerialTransmit_Protocol;
  bluetooth_send_DW.obj.isInitialized = 1L;
  bluetooth_send_DW.obj.port = 0.0;
  bluetooth_send_DW.obj.dataSizeInBytes = 8.0;
  bluetooth_send_DW.obj.dataType = 6.0;
  bluetooth_send_DW.obj.sendModeEnum = 2.0;
  bluetooth_send_DW.obj.sendFormatEnum = 0.0;
  MW_SCI_Open(0);
  bluetooth_send_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Serial Receive' */
  bluetooth_send_DW.obj_p.matlabCodegenIsDeleted = false;
  bluetooth_send_DW.obj_p.Protocol = bluetooth_send_P.SerialReceive_Protocol;
  bluetooth_send_DW.obj_p.QueueSizeFactor =
    bluetooth_send_P.SerialReceive_QueueSizeFactor;
  bluetooth_send_DW.obj_p.isInitialized = 1L;
  bluetooth_send_DW.obj_p.DataTypeWidth = 1U;
  bluetooth_send_DW.obj_p.DataSizeInBytes = 1U;
  MW_SCI_Open(0);
  bluetooth_send_DW.obj_p.isSetupComplete = true;
}

/* Model terminate function */
void bluetooth_send_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Transmit' */
  if (!bluetooth_send_DW.obj.matlabCodegenIsDeleted) {
    bluetooth_send_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Transmit' */

  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  if (!bluetooth_send_DW.obj_p.matlabCodegenIsDeleted) {
    bluetooth_send_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Receive' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
