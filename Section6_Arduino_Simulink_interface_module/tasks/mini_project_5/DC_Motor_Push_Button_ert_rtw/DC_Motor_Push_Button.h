/*
 * File: DC_Motor_Push_Button.h
 *
 * Code generated for Simulink model 'DC_Motor_Push_Button'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Nov 26 05:07:23 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DC_Motor_Push_Button_h_
#define DC_Motor_Push_Button_h_
#ifndef DC_Motor_Push_Button_COMMON_INCLUDES_
#define DC_Motor_Push_Button_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                               /* DC_Motor_Push_Button_COMMON_INCLUDES_ */

#include "DC_Motor_Push_Button_types.h"
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

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_blo_k_T obj; /* '<Root>/button status' */
  codertarget_arduinobase_block_T obj_f;
                                      /* '<Root>/Digital Output to the motor' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_m;        /* '<S2>/Unit Delay' */
  int8_T debbouncing_SubsysRanBC;      /* '<Root>/debbouncing' */
  int8_T motorenergized_SubsysRanBC;   /* '<Root>/motor energized' */
  boolean_T debbouncing_MODE;          /* '<Root>/debbouncing' */
} DW_DC_Motor_Push_Button_T;

/* Parameters (default storage) */
struct P_DC_Motor_Push_Button_T_ {
  real_T buttonstatus_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/button status'
                                        */
  real_T counter_Y0;                   /* Computed Parameter: counter_Y0
                                        * Referenced by: '<S1>/counter '
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S2>/Out1'
                                        */
  boolean_T UnitDelay_InitialCondition_i;
                             /* Computed Parameter: UnitDelay_InitialCondition_i
                              * Referenced by: '<S2>/Unit Delay'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_DC_Motor_Push_Button_T {
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
extern P_DC_Motor_Push_Button_T DC_Motor_Push_Button_P;

/* Block states (default storage) */
extern DW_DC_Motor_Push_Button_T DC_Motor_Push_Button_DW;

/* External function called from main */
extern void DC_Motor_Push_Button_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void DC_Motor_Push_Button_initialize(void);
extern void DC_Motor_Push_Button_step0(void);
extern void DC_Motor_Push_Button_step1(void);
extern void DC_Motor_Push_Button_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DC_Motor_Push_Button_T *const DC_Motor_Push_Button_M;
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
 * '<Root>' : 'DC_Motor_Push_Button'
 * '<S1>'   : 'DC_Motor_Push_Button/debbouncing'
 * '<S2>'   : 'DC_Motor_Push_Button/motor energized'
 */
#endif                                 /* DC_Motor_Push_Button_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
