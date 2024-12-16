/*
 * File: DC_Motor_control_speed_Direction_Push_Button.h
 *
 * Code generated for Simulink model 'DC_Motor_control_speed_Direction_Push_Button'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Nov 28 03:24:13 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DC_Motor_control_speed_Direction_Push_Button_h_
#define DC_Motor_control_speed_Direction_Push_Button_h_
#ifndef DC_Motor_control_speed_Direction_Push_Button_COMMON_INCLUDES_
#define DC_Motor_control_speed_Direction_Push_Button_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#endif       /* DC_Motor_control_speed_Direction_Push_Button_COMMON_INCLUDES_ */

#include "DC_Motor_control_speed_Direction_Push_Button_types.h"
#include "rt_nonfinite.h"
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

#define DC_Motor_control_speed_Direction_Push_Button_M (DC_Motor_control_speed_Direc_M)

/* Block signals (default storage) */
typedef struct {
  boolean_T Merge;                     /* '<Root>/Merge' */
  boolean_T Merge1;                    /* '<Root>/Merge1' */
} B_DC_Motor_control_speed_Dire_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_blo_k_T obj_d;/* '<Root>/check button on pin 3' */
  codertarget_arduinobase_blo_k_T obj_dl;/* '<Root>/check button on pin 2' */
  codertarget_arduinobase_block_T obj_m;
                                     /* '<Root>/Digital Output to the motor1' */
  codertarget_arduinobase_block_T obj_f;
                                      /* '<Root>/Digital Output to the motor' */
  codertarget_arduinobase_int_k_T obj_i;/* '<Root>/PWM' */
  boolean_T delay2ms_DSTATE[2];        /* '<Root>/delay 2ms' */
  boolean_T delay2ms1_DSTATE[2];       /* '<Root>/delay 2ms1' */
} DW_DC_Motor_control_speed_Dir_T;

/* Parameters for system: '<Root>/button1and button_status' */
struct P_button1andbutton_status_DC__T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S2>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S2>/Constant1'
                                        */
};

/* Parameters (default storage) */
struct P_DC_Motor_control_speed_Dire_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T checkbuttononpin2_SampleTime; /* Expression: 0.1
                                        * Referenced by: '<Root>/check button on pin 2'
                                        */
  real_T checkbuttononpin3_SampleTime; /* Expression: 0.1
                                        * Referenced by: '<Root>/check button on pin 3'
                                        */
  uint16_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  boolean_T delay2ms_InitialCondition;
                                /* Computed Parameter: delay2ms_InitialCondition
                                 * Referenced by: '<Root>/delay 2ms'
                                 */
  boolean_T delay2ms1_InitialCondition;
                               /* Computed Parameter: delay2ms1_InitialCondition
                                * Referenced by: '<Root>/delay 2ms1'
                                */
  boolean_T Merge_InitialOutput;      /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<Root>/Merge'
                                       */
  boolean_T Merge1_InitialOutput;    /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<Root>/Merge1'
                                      */
  P_button1andbutton_status_DC__T button2_status;/* '<Root>/button2_status' */
  P_button1andbutton_status_DC__T button1_status;/* '<Root>/button1_status' */
  P_button1andbutton_status_DC__T button1andbutton_status;/* '<Root>/button1and button_status' */
};

/* Real-time Model Data Structure */
struct tag_RTM_DC_Motor_control_spee_T {
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
extern P_DC_Motor_control_speed_Dire_T DC_Motor_control_speed_Direct_P;

/* Block signals (default storage) */
extern B_DC_Motor_control_speed_Dire_T DC_Motor_control_speed_Direct_B;

/* Block states (default storage) */
extern DW_DC_Motor_control_speed_Dir_T DC_Motor_control_speed_Direc_DW;

/* External function called from main */
extern void
  DC_Motor_control_speed_Direction_Push_Button_SetEventsForThisBaseStep
  (boolean_T *eventFlags);

/* Model entry point functions */
extern void DC_Motor_control_speed_Direction_Push_Button_initialize(void);
extern void DC_Motor_control_speed_Direction_Push_Button_step0(void);
extern void DC_Motor_control_speed_Direction_Push_Button_step1(void);
extern void DC_Motor_control_speed_Direction_Push_Button_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DC_Motor_control_spe_T *const DC_Motor_control_speed_Direc_M;
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
 * '<Root>' : 'DC_Motor_control_speed_Direction_Push_Button'
 * '<S1>'   : 'DC_Motor_control_speed_Direction_Push_Button/button1_status'
 * '<S2>'   : 'DC_Motor_control_speed_Direction_Push_Button/button1and button_status'
 * '<S3>'   : 'DC_Motor_control_speed_Direction_Push_Button/button2_status'
 */
#endif                     /* DC_Motor_control_speed_Direction_Push_Button_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
