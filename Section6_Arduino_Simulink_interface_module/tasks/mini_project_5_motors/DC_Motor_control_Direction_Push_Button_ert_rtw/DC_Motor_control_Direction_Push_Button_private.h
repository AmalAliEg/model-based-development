/*
 * File: DC_Motor_control_Direction_Push_Button_private.h
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

#ifndef DC_Motor_control_Direction_Push_Button_private_h_
#define DC_Motor_control_Direction_Push_Button_private_h_
#include "rtwtypes.h"
#include "DC_Motor_control_Direction_Push_Button.h"
#include "DC_Motor_control_Direction_Push_Button_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern real_T rt_roundd_snf(real_T u);
extern void DC_Motor_con_motorenergized(boolean_T rtu_Enable, real_T *rty_Out1,
  real_T *rty_Out2, P_motorenergized_DC_Motor_con_T *localP);

#endif                   /* DC_Motor_control_Direction_Push_Button_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
