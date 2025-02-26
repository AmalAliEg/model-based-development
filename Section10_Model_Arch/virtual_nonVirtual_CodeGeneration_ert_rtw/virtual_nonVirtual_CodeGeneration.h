/*
 * File: virtual_nonVirtual_CodeGeneration.h
 *
 * Code generated for Simulink model 'virtual_nonVirtual_CodeGeneration'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 17:26:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef virtual_nonVirtual_CodeGeneration_h_
#define virtual_nonVirtual_CodeGeneration_h_
#ifndef virtual_nonVirtual_CodeGeneration_COMMON_INCLUDES_
#define virtual_nonVirtual_CodeGeneration_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                  /* virtual_nonVirtual_CodeGeneration_COMMON_INCLUDES_ */

#include "virtual_nonVirtual_CodeGeneration_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_virtual_nonVirtual_CodeG_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_virtual_nonVirtual_CodeG_T;

/* Real-time Model Data Structure */
struct tag_RTM_virtual_nonVirtual_Co_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_virtual_nonVirtual_CodeG_T virtual_nonVirtual_CodeGenera_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_virtual_nonVirtual_CodeG_T virtual_nonVirtual_CodeGenera_Y;

/* Model entry point functions */
extern void virtual_nonVirtual_CodeGeneration_initialize(void);
extern void virtual_nonVirtual_CodeGeneration_step(void);
extern void virtual_nonVirtual_CodeGeneration_terminate(void);

/* Real-time Model object */
extern RT_MODEL_virtual_nonVirtual_C_T *const virtual_nonVirtual_CodeGener_M;

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
 * '<Root>' : 'virtual_nonVirtual_CodeGeneration'
 * '<S1>'   : 'virtual_nonVirtual_CodeGeneration/non_virtual'
 * '<S2>'   : 'virtual_nonVirtual_CodeGeneration/virtual'
 */
#endif                                /* virtual_nonVirtual_CodeGeneration_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
