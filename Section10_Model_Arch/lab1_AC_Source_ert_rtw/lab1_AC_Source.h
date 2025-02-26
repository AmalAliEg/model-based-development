/*
 * File: lab1_AC_Source.h
 *
 * Code generated for Simulink model 'lab1_AC_Source'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jan 13 19:51:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef lab1_AC_Source_h_
#define lab1_AC_Source_h_
#ifndef lab1_AC_Source_COMMON_INCLUDES_
#define lab1_AC_Source_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* lab1_AC_Source_COMMON_INCLUDES_ */

#include "lab1_AC_Source_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T lastSin;                      /* '<Root>/Sine Wave' */
  real_T lastCos;                      /* '<Root>/Sine Wave' */
  int32_T systemEnable;                /* '<Root>/Sine Wave' */
} DW_lab1_AC_Source_T;

/* Real-time Model Data Structure */
struct tag_RTM_lab1_AC_Source_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block states (default storage) */
extern DW_lab1_AC_Source_T lab1_AC_Source_DW;

/* Model entry point functions */
extern void lab1_AC_Source_initialize(void);
extern void lab1_AC_Source_step(void);
extern void lab1_AC_Source_terminate(void);

/* Real-time Model object */
extern RT_MODEL_lab1_AC_Source_T *const lab1_AC_Source_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'lab1_AC_Source'
 * '<S1>'   : 'lab1_AC_Source/Compare To Constant'
 * '<S2>'   : 'lab1_AC_Source/Compare To Constant1'
 * '<S3>'   : 'lab1_AC_Source/one'
 * '<S4>'   : 'lab1_AC_Source/zero'
 */
#endif                                 /* lab1_AC_Source_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
