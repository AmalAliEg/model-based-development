/*
 * File: push_button_Led.h
 *
 * Code generated for Simulink model 'push_button_Led'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 08:25:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef push_button_Led_h_
#define push_button_Led_h_
#ifndef push_button_Led_COMMON_INCLUDES_
#define push_button_Led_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* push_button_Led_COMMON_INCLUDES_ */

#include "push_button_Led_types.h"
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

/* Block states (default storage) for system '<Root>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<Root>/If Action Subsystem' */
} DW_IfActionSubsystem_push_but_T;

/* Block signals (default storage) */
typedef struct {
  boolean_T Merge;                     /* '<Root>/Merge' */
  boolean_T DigitalInput;              /* '<Root>/Digital Input' */
} B_push_button_Led_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Input' */
  codertarget_arduinobase_blo_o_T obj_l;/* '<Root>/Digital Output' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  DW_IfActionSubsystem_push_but_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  DW_IfActionSubsystem_push_but_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
} DW_push_button_Led_T;

/* Parameters for system: '<Root>/If Action Subsystem' */
struct P_IfActionSubsystem_push_butt_T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_push_button_Led_T_ {
  real_T DigitalInput_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input'
                                        */
  P_IfActionSubsystem_push_butt_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  P_IfActionSubsystem_push_butt_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_push_button_Led_T {
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
extern P_push_button_Led_T push_button_Led_P;

/* Block signals (default storage) */
extern B_push_button_Led_T push_button_Led_B;

/* Block states (default storage) */
extern DW_push_button_Led_T push_button_Led_DW;

/* External function called from main */
extern void push_button_Led_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void push_button_Led_initialize(void);
extern void push_button_Led_step0(void);
extern void push_button_Led_step1(void);
extern void push_button_Led_terminate(void);

/* Real-time Model object */
extern RT_MODEL_push_button_Led_T *const push_button_Led_M;
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
 * '<Root>' : 'push_button_Led'
 * '<S1>'   : 'push_button_Led/If Action Subsystem'
 * '<S2>'   : 'push_button_Led/If Action Subsystem1'
 */
#endif                                 /* push_button_Led_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
