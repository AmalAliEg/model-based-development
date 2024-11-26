/*
 * File: DC_Motor_control_speed_Direction_Push_Button_data.c
 *
 * Code generated for Simulink model 'DC_Motor_control_speed_Direction_Push_Button'.
 *
 * Model version                  : 1.34
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Nov 26 07:39:08 2024
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

  /* Expression: 0.1
   * Referenced by: '<Root>/button status'
   */
  0.1,

  /* Expression: 0.1
   * Referenced by: '<Root>/button status1'
   */
  0.1,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<Root>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<Root>/Merge1'
   */
  0.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  65280U,

  /* Start of '<Root>/motor energized1' */
  {
    /* Expression: 0
     * Referenced by: '<S2>/Constant'
     */
    0.0,

    /* Expression: 1
     * Referenced by: '<S2>/Constant1'
     */
    1.0
  }
  ,

  /* End of '<Root>/motor energized1' */

  /* Start of '<Root>/motor energized' */
  {
    /* Expression: 1
     * Referenced by: '<S1>/Constant'
     */
    1.0,

    /* Expression: 0
     * Referenced by: '<S1>/Constant1'
     */
    0.0
  }
  /* End of '<Root>/motor energized' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
