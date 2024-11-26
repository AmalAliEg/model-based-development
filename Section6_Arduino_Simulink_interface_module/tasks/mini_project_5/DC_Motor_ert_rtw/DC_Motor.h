/*
 * File: DC_Motor.h
 *
 * Code generated for Simulink model 'DC_Motor'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Nov 26 06:15:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DC_Motor_h_
#define DC_Motor_h_
#ifndef DC_Motor_COMMON_INCLUDES_
#define DC_Motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* DC_Motor_COMMON_INCLUDES_ */

#include "DC_Motor_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Output' */
} DW_DC_Motor_T;

/* Parameters (default storage) */
struct P_DC_Motor_T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_DC_Motor_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_DC_Motor_T DC_Motor_P;

/* Block states (default storage) */
extern DW_DC_Motor_T DC_Motor_DW;

/* Model entry point functions */
extern void DC_Motor_initialize(void);
extern void DC_Motor_step(void);
extern void DC_Motor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DC_Motor_T *const DC_Motor_M;
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
 * '<Root>' : 'DC_Motor'
 */
#endif                                 /* DC_Motor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
