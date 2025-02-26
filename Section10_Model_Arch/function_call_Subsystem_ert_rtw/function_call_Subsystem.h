/*
 * File: function_call_Subsystem.h
 *
 * Code generated for Simulink model 'function_call_Subsystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 21:37:45 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef function_call_Subsystem_h_
#define function_call_Subsystem_h_
#ifndef function_call_Subsystem_COMMON_INCLUDES_
#define function_call_Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                            /* function_call_Subsystem_COMMON_INCLUDES_ */

#include "function_call_Subsystem_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_function_call_Subsyst_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void function_call_Subsystem_initialize(void);
extern void function_call_Subsystem_terminate(void);

/* Exported entry point function */
extern void function_call(void);

/* Real-time Model object */
extern RT_MODEL_function_call_Subsys_T *const function_call_Subsystem_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S2>/Add' : Unused code path elimination
 * Block '<S2>/Unit Delay' : Unused code path elimination
 * Block '<Root>/step' : Unused code path elimination
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
 * '<Root>' : 'function_call_Subsystem'
 * '<S1>'   : 'function_call_Subsystem/Subsystem'
 * '<S2>'   : 'function_call_Subsystem/Subsystem/Function-Call Subsystem'
 */
#endif                                 /* function_call_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
