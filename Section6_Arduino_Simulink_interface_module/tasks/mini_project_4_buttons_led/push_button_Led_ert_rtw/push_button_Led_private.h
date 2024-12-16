/*
 * File: push_button_Led_private.h
 *
 * Code generated for Simulink model 'push_button_Led'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 08:25:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef push_button_Led_private_h_
#define push_button_Led_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "push_button_Led.h"
#include "push_button_Led_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern void push_butt_IfActionSubsystem(boolean_T *rty_Out1,
  P_IfActionSubsystem_push_butt_T *localP);

#endif                                 /* push_button_Led_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
