/*
 * File: enabled_subsystem.h
 *
 * Code generated for Simulink model 'enabled_subsystem'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:32:21 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef enabled_subsystem_h_
#define enabled_subsystem_h_
#ifndef enabled_subsystem_COMMON_INCLUDES_
#define enabled_subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* enabled_subsystem_COMMON_INCLUDES_ */

#include "enabled_subsystem_types.h"

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
} DW_enabled_subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_enabled_subsystem_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_enabled_subsystem_T enabled_subsystem_DW;

/* Model entry point functions */
extern void enabled_subsystem_initialize(void);
extern void enabled_subsystem_step(void);
extern void enabled_subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_enabled_subsystem_T *const enabled_subsystem_M;

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
 * '<Root>' : 'enabled_subsystem'
 * '<S1>'   : 'enabled_subsystem/root'
 * '<S2>'   : 'enabled_subsystem/root/Enabled Subsystem'
 * '<S3>'   : 'enabled_subsystem/root/Enabled Subsystem1'
 */
#endif                                 /* enabled_subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
