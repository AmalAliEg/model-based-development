/*
 * File: ultrasonic_distance.h
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

#ifndef ultrasonic_distance_h_
#define ultrasonic_distance_h_
#ifndef ultrasonic_distance_COMMON_INCLUDES_
#define ultrasonic_distance_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#include "MW_Ultrasonic.h"
#endif                                /* ultrasonic_distance_COMMON_INCLUDES_ */

#include "ultrasonic_distance_types.h"
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
  codertarget_arduinobase_inter_T obj; /* '<Root>/Serial Transmit' */
  codertarget_arduinobase_int_h_T obj_h;/* '<Root>/Ultrasonic Sensor' */
} DW_ultrasonic_distance_T;

/* Parameters (default storage) */
struct P_ultrasonic_distance_T_ {
  real_T SerialTransmit_Protocol;      /* Expression: 0
                                        * Referenced by: '<Root>/Serial Transmit'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ultrasonic_distance_T {
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
extern P_ultrasonic_distance_T ultrasonic_distance_P;

/* Block states (default storage) */
extern DW_ultrasonic_distance_T ultrasonic_distance_DW;

/* External function called from main */
extern void ultrasonic_distance_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void ultrasonic_distance_initialize(void);
extern void ultrasonic_distance_step0(void);
extern void ultrasonic_distance_step1(void);
extern void ultrasonic_distance_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ultrasonic_distance_T *const ultrasonic_distance_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'ultrasonic_distance'
 */
#endif                                 /* ultrasonic_distance_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
