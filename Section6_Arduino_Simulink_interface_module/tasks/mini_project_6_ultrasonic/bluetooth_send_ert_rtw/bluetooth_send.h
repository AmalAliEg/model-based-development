/*
 * File: bluetooth_send.h
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

#ifndef bluetooth_send_h_
#define bluetooth_send_h_
#ifndef bluetooth_send_COMMON_INCLUDES_
#define bluetooth_send_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#endif                                 /* bluetooth_send_COMMON_INCLUDES_ */

#include "bluetooth_send_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_int_c_T obj; /* '<Root>/Serial Transmit' */
  codertarget_arduinobase_inter_T obj_p;/* '<Root>/Serial Receive' */
} DW_bluetooth_send_T;

/* Parameters (default storage) */
struct P_bluetooth_send_T_ {
  real_T SerialReceive_Protocol;       /* Expression: 0
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T SerialReceive_QueueSizeFactor;/* Expression: 3
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T SerialTransmit_Protocol;      /* Expression: 0
                                        * Referenced by: '<Root>/Serial Transmit'
                                        */
  real_T Constant_Value;               /* Expression: 5
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_bluetooth_send_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_bluetooth_send_T bluetooth_send_P;

/* Block states (default storage) */
extern DW_bluetooth_send_T bluetooth_send_DW;

/* External function called from main */
extern void bluetooth_send_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void bluetooth_send_initialize(void);
extern void bluetooth_send_step0(void);
extern void bluetooth_send_step1(void);
extern void bluetooth_send_terminate(void);

/* Real-time Model object */
extern RT_MODEL_bluetooth_send_T *const bluetooth_send_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'bluetooth_send'
 */
#endif                                 /* bluetooth_send_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
