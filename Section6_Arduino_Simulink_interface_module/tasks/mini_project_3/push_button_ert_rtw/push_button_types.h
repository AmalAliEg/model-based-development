/*
 * File: push_button_types.h
 *
 * Code generated for Simulink model 'push_button'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Nov 23 07:17:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef push_button_types_h_
#define push_button_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_d_arduinodriver_ArduinoDigita_T
#define typedef_d_arduinodriver_ArduinoDigita_T

typedef struct tag_04b6x6tDldj9IrIH2gmbjG d_arduinodriver_ArduinoDigita_T;

#endif                             /* typedef_d_arduinodriver_ArduinoDigita_T */

#ifndef struct_tag_HaWnjzA2iiR2NMKNB2VNI
#define struct_tag_HaWnjzA2iiR2NMKNB2VNI

struct tag_HaWnjzA2iiR2NMKNB2VNI
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  d_arduinodriver_ArduinoDigita_T DigitalIODriverObj;
  real_T SampleTime;
};

#endif                                 /* struct_tag_HaWnjzA2iiR2NMKNB2VNI */

#ifndef typedef_codertarget_arduinobase_block_T
#define typedef_codertarget_arduinobase_block_T

typedef struct tag_HaWnjzA2iiR2NMKNB2VNI codertarget_arduinobase_block_T;

#endif                             /* typedef_codertarget_arduinobase_block_T */

/* Parameters (default storage) */
typedef struct P_push_button_T_ P_push_button_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_push_button_T RT_MODEL_push_button_T;

#endif                                 /* push_button_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
