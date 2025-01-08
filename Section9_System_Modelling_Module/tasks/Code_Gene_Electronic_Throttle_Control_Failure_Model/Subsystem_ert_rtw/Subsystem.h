/*
 * File: Subsystem.h
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Jan  3 02:47:36 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Subsystem_h_
#define Subsystem_h_
#ifndef Subsystem_COMMON_INCLUDES_
#define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Subsystem_COMMON_INCLUDES_ */

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
extern void Subsystem_initialize(void);
extern void Subsystem_step(void);

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
 * hilite_system('Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem')    - opens subsystem Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem
 * hilite_system('Code_Gene_Electronic_Throttle_Control_Failure_Model/Subsystem/Kp') - opens and selects block Kp
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
#endif                                 /* Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
