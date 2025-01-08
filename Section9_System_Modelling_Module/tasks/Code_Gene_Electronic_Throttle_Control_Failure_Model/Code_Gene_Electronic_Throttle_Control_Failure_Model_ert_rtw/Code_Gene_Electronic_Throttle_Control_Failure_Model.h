/*
 * File: Code_Gene_Electronic_Throttle_Control_Failure_Model.h
 *
 * Code generated for Simulink model 'Code_Gene_Electronic_Throttle_Control_Failure_Model'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Jan  2 08:29:35 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Code_Gene_Electronic_Throttle_Control_Failure_Model_h_
#define Code_Gene_Electronic_Throttle_Control_Failure_Model_h_
#ifndef Code_Gene_Electronic_Throttle_Control_Failure_Model_COMMON_INCLUDES_
#define Code_Gene_Electronic_Throttle_Control_Failure_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif
      /* Code_Gene_Electronic_Throttle_Control_Failure_Model_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T TPS_Sensor1_Voltage;        /* '<Root>/TPS_Sensor1_Voltage' */
  real32_T TPS_Sensor2_Voltage;        /* '<Root>/TPS_Sensor2_Voltage' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T failure_sensor1;           /* '<Root>/failure_sensor1' */
  boolean_T failure_sensor2;           /* '<Root>/failure_sensor2' */
  boolean_T failure_coherent;          /* '<Root>/failure_coherent' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Code_Gene_Electronic_Throttle_Control_Failure_Model_initialize(void);
extern void Code_Gene_Electronic_Throttle_Control_Failure_Model_step(void);

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
 * '<Root>' : 'Code_Gene_Electronic_Throttle_Control_Failure_Model'
 * '<S1>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem'
 * '<S2>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Compare To Constant'
 * '<S3>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Compare To Constant1'
 * '<S4>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Compare To Constant2'
 * '<S5>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Compare To Constant3'
 * '<S6>'   : 'Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Compare To Constant4'
 */
#endif              /* Code_Gene_Electronic_Throttle_Control_Failure_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
