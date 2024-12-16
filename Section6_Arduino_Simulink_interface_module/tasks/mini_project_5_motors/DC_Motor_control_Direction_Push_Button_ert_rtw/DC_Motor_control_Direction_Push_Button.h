/*
 * File: DC_Motor_control_Direction_Push_Button.h
 *
 * Code generated for Simulink model 'DC_Motor_control_Direction_Push_Button'.
 *
 * Model version                  : 1.33
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 27 14:35:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DC_Motor_control_Direction_Push_Button_h_
#define DC_Motor_control_Direction_Push_Button_h_
#ifndef DC_Motor_control_Direction_Push_Button_COMMON_INCLUDES_
#define DC_Motor_control_Direction_Push_Button_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif             /* DC_Motor_control_Direction_Push_Button_COMMON_INCLUDES_ */

#include "DC_Motor_control_Direction_Push_Button_types.h"
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

#define DC_Motor_control_Direction_Push_Button_M (DC_Motor_control_Direction_P_M)

/* Block signals (default storage) */
typedef struct {
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Merge1;                       /* '<Root>/Merge1' */
} B_DC_Motor_control_Direction__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_blo_e_T obj; /* '<Root>/button status1' */
  codertarget_arduinobase_blo_e_T obj_d;/* '<Root>/button status' */
  codertarget_arduinobase_block_T obj_m;
                                     /* '<Root>/Digital Output to the motor1' */
  codertarget_arduinobase_block_T obj_f;
                                      /* '<Root>/Digital Output to the motor' */
} DW_DC_Motor_control_Direction_T;

/* Parameters for system: '<Root>/motor energized' */
struct P_motorenergized_DC_Motor_con_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
};

/* Parameters (default storage) */
struct P_DC_Motor_control_Direction__T_ {
  real_T buttonstatus_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/button status'
                                        */
  real_T buttonstatus1_SampleTime;     /* Expression: 0.1
                                        * Referenced by: '<Root>/button status1'
                                        */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<Root>/Merge'
                                       */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<Root>/Merge1'
                                      */
  P_motorenergized_DC_Motor_con_T motorenergized1;/* '<Root>/motor energized1' */
  P_motorenergized_DC_Motor_con_T motorenergized;/* '<Root>/motor energized' */
};

/* Real-time Model Data Structure */
struct tag_RTM_DC_Motor_control_Dire_T {
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
extern P_DC_Motor_control_Direction__T DC_Motor_control_Direction_Pu_P;

/* Block signals (default storage) */
extern B_DC_Motor_control_Direction__T DC_Motor_control_Direction_Pu_B;

/* Block states (default storage) */
extern DW_DC_Motor_control_Direction_T DC_Motor_control_Direction_P_DW;

/* External function called from main */
extern void DC_Motor_control_Direction_Push_Button_SetEventsForThisBaseStep
  (boolean_T *eventFlags);

/* Model entry point functions */
extern void DC_Motor_control_Direction_Push_Button_initialize(void);
extern void DC_Motor_control_Direction_Push_Button_step0(void);
extern void DC_Motor_control_Direction_Push_Button_step1(void);
extern void DC_Motor_control_Direction_Push_Button_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DC_Motor_control_Dir_T *const DC_Motor_control_Direction_P_M;
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
 * '<Root>' : 'DC_Motor_control_Direction_Push_Button'
 * '<S1>'   : 'DC_Motor_control_Direction_Push_Button/motor energized'
 * '<S2>'   : 'DC_Motor_control_Direction_Push_Button/motor energized1'
 */
#endif                           /* DC_Motor_control_Direction_Push_Button_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
