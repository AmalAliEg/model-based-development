/*
 * File: Servo_check_initial_pos_Motor_types.h
 *
 * Code generated for Simulink model 'Servo_check_initial_pos_Motor'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Nov 25 14:48:56 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Servo_check_initial_pos_Motor_types_h_
#define Servo_check_initial_pos_Motor_types_h_
#include "MW_SVD.h"
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef struct_tag_UTG5XI0vJCsmjbgura8BP
#define struct_tag_UTG5XI0vJCsmjbgura8BP

struct tag_UTG5XI0vJCsmjbgura8BP
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_UTG5XI0vJCsmjbgura8BP */

#ifndef typedef_g_arduinodriver_ArduinoAnalog_T
#define typedef_g_arduinodriver_ArduinoAnalog_T

typedef struct tag_UTG5XI0vJCsmjbgura8BP g_arduinodriver_ArduinoAnalog_T;

#endif                             /* typedef_g_arduinodriver_ArduinoAnalog_T */

#ifndef struct_tag_8ohiN1FAOgR98njPNu14NC
#define struct_tag_8ohiN1FAOgR98njPNu14NC

struct tag_8ohiN1FAOgR98njPNu14NC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  g_arduinodriver_ArduinoAnalog_T AnalogInDriverObj;
  real_T SampleTime;
};

#endif                                 /* struct_tag_8ohiN1FAOgR98njPNu14NC */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_8ohiN1FAOgR98njPNu14NC codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

#ifndef struct_tag_KTkA27ETRcHGiJ6aMhIhbC
#define struct_tag_KTkA27ETRcHGiJ6aMhIhbC

struct tag_KTkA27ETRcHGiJ6aMhIhbC
{
  boolean_T matlabCodegenIsDeleted;
  real_T SampleTime;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_KTkA27ETRcHGiJ6aMhIhbC */

#ifndef typedef_codertarget_arduinobase_int_b_T
#define typedef_codertarget_arduinobase_int_b_T

typedef struct tag_KTkA27ETRcHGiJ6aMhIhbC codertarget_arduinobase_int_b_T;

#endif                             /* typedef_codertarget_arduinobase_int_b_T */

#ifndef struct_tag_VzK3jWyzjz6OGczb4jMFhG
#define struct_tag_VzK3jWyzjz6OGczb4jMFhG

struct tag_VzK3jWyzjz6OGczb4jMFhG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_VzK3jWyzjz6OGczb4jMFhG */

#ifndef typedef_codertarget_arduinobase_in_bh_T
#define typedef_codertarget_arduinobase_in_bh_T

typedef struct tag_VzK3jWyzjz6OGczb4jMFhG codertarget_arduinobase_in_bh_T;

#endif                             /* typedef_codertarget_arduinobase_in_bh_T */

/* Parameters (default storage) */
typedef struct P_Servo_check_initial_pos_Mot_T_ P_Servo_check_initial_pos_Mot_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Servo_check_initial_p_T RT_MODEL_Servo_check_initial__T;

#endif                              /* Servo_check_initial_pos_Motor_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
