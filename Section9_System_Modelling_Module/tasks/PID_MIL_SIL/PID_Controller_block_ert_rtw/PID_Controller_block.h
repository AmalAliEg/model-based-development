/*
 * File: PID_Controller_block.h
 *
 * Code generated for Simulink model 'PID_Controller_block'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Jan  8 14:37:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef PID_Controller_block_h_
#define PID_Controller_block_h_
#ifndef PID_Controller_block_COMMON_INCLUDES_
#define PID_Controller_block_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* PID_Controller_block_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S3>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S4>/UD' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ExpectedOut;                  /* '<Root>/ExpectedOut' */
  real_T outputsignal;                 /* '<Root>/ActualOut' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T CtrlSig;                      /* '<Root>/CtrlSig' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void PID_Controller_block_initialize(void);
extern void PID_Controller_block_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('PID_controller/PID_Controller_block')    - opens subsystem PID_controller/PID_Controller_block
 * hilite_system('PID_controller/PID_Controller_block/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PID_controller'
 * '<S1>'   : 'PID_controller/PID_Controller_block'
 * '<S2>'   : 'PID_controller/PID_Controller_block/discrete_derivative'
 * '<S3>'   : 'PID_controller/PID_Controller_block/discrete_integrator_block'
 * '<S4>'   : 'PID_controller/PID_Controller_block/discrete_derivative/Discrete Derivative'
 */
#endif                                 /* PID_Controller_block_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
