/*
 * File: Debounce_push_button_Led_2_data.c
 *
 * Code generated for Simulink model 'Debounce_push_button_Led_2'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 09:07:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Debounce_push_button_Led_2.h"

/* Block parameters (default storage) */
P_Debounce_push_button_Led_2_T Debounce_push_button_Led_2_P = {
  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S1>/Out1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/PushButtonStatus'
   */
  0.1,

  /* Expression: 10
   * Referenced by: '<Root>/PushButtonCondition'
   */
  10.0,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<Root>/Unit Delay1'
   */
  false,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<Root>/Unit Delay2'
   */
  false
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
