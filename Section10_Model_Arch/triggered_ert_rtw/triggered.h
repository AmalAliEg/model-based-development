/*
 * File: triggered.h
 *
 * Code generated for Simulink model 'triggered'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:16:02 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef triggered_h_
#define triggered_h_
#ifndef triggered_COMMON_INCLUDES_
#define triggered_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* triggered_COMMON_INCLUDES_ */

#include "triggered_types.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_triggered_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState two_Trig_ZCE;             /* '<S1>/two' */
  ZCSigState one_Trig_ZCE;             /* '<S1>/one' */
} PrevZCX_triggered_T;

/* Real-time Model Data Structure */
struct tag_RTM_triggered_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_triggered_T triggered_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_triggered_T triggered_PrevZCX;

/* Model entry point functions */
extern void triggered_initialize(void);
extern void triggered_step(void);
extern void triggered_terminate(void);

/* Real-time Model object */
extern RT_MODEL_triggered_T *const triggered_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S2>/Add' : Unused code path elimination
 * Block '<S2>/Unit Delay' : Unused code path elimination
 * Block '<S3>/Add' : Unused code path elimination
 * Block '<S3>/Unit Delay' : Unused code path elimination
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
 * '<Root>' : 'triggered'
 * '<S1>'   : 'triggered/root'
 * '<S2>'   : 'triggered/root/one'
 * '<S3>'   : 'triggered/root/two'
 */
#endif                                 /* triggered_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
