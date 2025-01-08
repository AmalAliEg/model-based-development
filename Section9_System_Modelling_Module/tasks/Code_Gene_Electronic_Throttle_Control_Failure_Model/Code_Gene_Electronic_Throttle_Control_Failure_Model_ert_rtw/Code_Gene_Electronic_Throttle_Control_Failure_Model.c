/*
 * File: Code_Gene_Electronic_Throttle_Control_Failure_Model.c
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

#include "Code_Gene_Electronic_Throttle_Control_Failure_Model.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void Code_Gene_Electronic_Throttle_Control_Failure_Model_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Outport: '<Root>/failure_sensor1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/TPS_Sensor1_Voltage'
   *  Logic: '<S1>/Logical Operator'
   *  RelationalOperator: '<S2>/Compare'
   *  RelationalOperator: '<S3>/Compare'
   */
  rtY.failure_sensor1 = ((rtU.TPS_Sensor1_Voltage < 0.5F) ||
    (rtU.TPS_Sensor1_Voltage > 4.5F));

  /* Outport: '<Root>/failure_sensor2' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/TPS_Sensor2_Voltage'
   *  Logic: '<S1>/Logical Operator1'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  rtY.failure_sensor2 = ((rtU.TPS_Sensor2_Voltage < 0.5F) ||
    (rtU.TPS_Sensor2_Voltage > 4.5F));

  /* Outport: '<Root>/failure_coherent' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/TPS_Sensor1_Voltage'
   *  Inport: '<Root>/TPS_Sensor2_Voltage'
   *  RelationalOperator: '<S6>/Compare'
   *  Sum: '<S1>/Add'
   */
  rtY.failure_coherent = (rtU.TPS_Sensor1_Voltage + rtU.TPS_Sensor2_Voltage !=
    5.0F);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model initialize function */
void Code_Gene_Electronic_Throttle_Control_Failure_Model_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
