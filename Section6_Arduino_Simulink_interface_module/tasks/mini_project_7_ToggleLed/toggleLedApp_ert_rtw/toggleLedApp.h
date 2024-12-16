/*
 * File: toggleLedApp.h
 *
 * Code generated for Simulink model 'toggleLedApp'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Nov 29 02:05:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef toggleLedApp_h_
#define toggleLedApp_h_
#ifndef toggleLedApp_COMMON_INCLUDES_
#define toggleLedApp_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* toggleLedApp_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  boolean_T UnitDelay_DSTATE;          /* '<S1>/Unit Delay' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T LedStatus;                 /* '<Root>/LedStatus' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void toggleLedApp_initialize(void);
extern void toggleLedApp_step(void);

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
 * '<Root>' : 'toggleLedApp'
 * '<S1>'   : 'toggleLedApp/ToggleFunc'
 */
#endif                                 /* toggleLedApp_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
