/*
 * File: Debounce_push_button_Led_2.h
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

#ifndef Debounce_push_button_Led_2_h_
#define Debounce_push_button_Led_2_h_
#ifndef Debounce_push_button_Led_2_COMMON_INCLUDES_
#define Debounce_push_button_Led_2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                         /* Debounce_push_button_Led_2_COMMON_INCLUDES_ */

#include "Debounce_push_button_Led_2_types.h"
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

/* Block signals (default storage) */
typedef struct {
  boolean_T PushButtonCondition;       /* '<Root>/PushButtonCondition' */
  boolean_T PushButtonStatus;          /* '<Root>/PushButtonStatus' */
} B_Debounce_push_button_Led_2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_blo_i_T obj; /* '<Root>/PushButtonStatus' */
  codertarget_arduinobase_block_T obj_l;/* '<Root>/LedStatus' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  boolean_T UnitDelay1_DSTATE;         /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE;         /* '<Root>/Unit Delay2' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<Root>/Enabled Subsystem' */
} DW_Debounce_push_button_Led_2_T;

/* Parameters (default storage) */
struct P_Debounce_push_button_Led_2_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S1>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T PushButtonStatus_SampleTime;  /* Expression: 0.1
                                        * Referenced by: '<Root>/PushButtonStatus'
                                        */
  real_T PushButtonCondition_Threshold;/* Expression: 10
                                        * Referenced by: '<Root>/PushButtonCondition'
                                        */
  boolean_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<Root>/Unit Delay1'
                               */
  boolean_T UnitDelay2_InitialCondition;
                              /* Computed Parameter: UnitDelay2_InitialCondition
                               * Referenced by: '<Root>/Unit Delay2'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_Debounce_push_button__T {
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
extern P_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_P;

/* Block signals (default storage) */
extern B_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_B;

/* Block states (default storage) */
extern DW_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_DW;

/* External function called from main */
extern void Debounce_push_button_Led_2_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Debounce_push_button_Led_2_initialize(void);
extern void Debounce_push_button_Led_2_step0(void);
extern void Debounce_push_button_Led_2_step1(void);
extern void Debounce_push_button_Led_2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Debounce_push_button_T *const Debounce_push_button_Led_2_M;
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
 * '<Root>' : 'Debounce_push_button_Led_2'
 * '<S1>'   : 'Debounce_push_button_Led_2/Enabled Subsystem'
 */
#endif                                 /* Debounce_push_button_Led_2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
