/*
 * File: Servo_check_initial_pos_Motor.h
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

#ifndef Servo_check_initial_pos_Motor_h_
#define Servo_check_initial_pos_Motor_h_
#ifndef Servo_check_initial_pos_Motor_COMMON_INCLUDES_
#define Servo_check_initial_pos_Motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_ServoWriteRead.h"
#endif                      /* Servo_check_initial_pos_Motor_COMMON_INCLUDES_ */

#include "Servo_check_initial_pos_Motor_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define Servo_check_initial_pos_Motor_M (Servo_check_initial_pos_Moto_M)

/* Block signals (default storage) */
typedef struct {
  int32_T StandardServoRead;           /* '<Root>/Standard Servo Read' */
  uint8_T Gain;                        /* '<Root>/Gain' */
} B_Servo_check_initial_pos_Mot_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_int_b_T obj_e;/* '<Root>/Standard Servo Read' */
  codertarget_arduinobase_in_bh_T obj_b;/* '<Root>/Standard Servo Write' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW_Servo_check_initial_pos_Mo_T;

/* Parameters (default storage) */
struct P_Servo_check_initial_pos_Mot_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T StandardServoRead_SampleTime; /* Expression: 0.1
                                        * Referenced by: '<Root>/Standard Servo Read'
                                        */
  uint16_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Servo_check_initial_p_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Servo_check_initial_pos_Mot_T Servo_check_initial_pos_Motor_P;

/* Block signals (default storage) */
extern B_Servo_check_initial_pos_Mot_T Servo_check_initial_pos_Motor_B;

/* Block states (default storage) */
extern DW_Servo_check_initial_pos_Mo_T Servo_check_initial_pos_Moto_DW;

/* External function called from main */
extern void Servo_check_initial_pos_Motor_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Servo_check_initial_pos_Motor_initialize(void);
extern void Servo_check_initial_pos_Motor_step0(void);
extern void Servo_check_initial_pos_Motor_step1(void);
extern void Servo_check_initial_pos_Motor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Servo_check_initial__T *const Servo_check_initial_pos_Moto_M;
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
 * '<Root>' : 'Servo_check_initial_pos_Motor'
 */
#endif                                 /* Servo_check_initial_pos_Motor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
