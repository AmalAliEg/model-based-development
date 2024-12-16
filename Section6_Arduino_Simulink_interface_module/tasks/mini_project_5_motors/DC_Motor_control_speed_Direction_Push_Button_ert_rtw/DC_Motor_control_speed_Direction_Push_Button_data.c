/*
 * File: DC_Motor_control_speed_Direction_Push_Button_data.c
 *
 * Code generated for Simulink model 'DC_Motor_control_speed_Direction_Push_Button'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Nov 28 03:24:13 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DC_Motor_control_speed_Direction_Push_Button.h"

/* Block parameters (default storage) */
P_DC_Motor_control_speed_Dire_T DC_Motor_control_speed_Direct_P = {
  /* Expression: -1
   * Referenced by: '<Root>/Analog Input'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/check button on pin 2'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<Root>/check button on pin 3'
   */
  0.1,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  65280U,

  /* Computed Parameter: delay2ms_InitialCondition
   * Referenced by: '<Root>/delay 2ms'
   */
  false,

  /* Computed Parameter: delay2ms1_InitialCondition
   * Referenced by: '<Root>/delay 2ms1'
   */
  false,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<Root>/Merge'
   */
  false,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<Root>/Merge1'
   */
  false,

  /* Start of '<Root>/button2_status' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S3>/Constant'
     */
    true,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S3>/Constant1'
     */
    false
  }
  ,

  /* End of '<Root>/button2_status' */

  /* Start of '<Root>/button1_status' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S1>/Constant'
     */
    true,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S1>/Constant1'
     */
    false
  }
  ,

  /* End of '<Root>/button1_status' */

  /* Start of '<Root>/button1and button_status' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S2>/Constant'
     */
    false,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S2>/Constant1'
     */
    false
  }
  /* End of '<Root>/button1and button_status' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
