/*
 * File: DC_Motor_control_Direction_Push_Button_data.c
 *
 * Code generated for Simulink model 'DC_Motor_control_Direction_Push_Button'.
 *
 * Model version                  : 1.33
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 27 14:35:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DC_Motor_control_Direction_Push_Button.h"

/* Block parameters (default storage) */
P_DC_Motor_control_Direction__T DC_Motor_control_Direction_Pu_P = {
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
