/*
 * File: bluetooth_send_types.h
 *
 * Code generated for Simulink model 'bluetooth_send'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Nov 29 00:46:06 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef bluetooth_send_types_h_
#define bluetooth_send_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_qbUFhX6Bp3RsgYGeqgZpEH
#define struct_tag_qbUFhX6Bp3RsgYGeqgZpEH

struct tag_qbUFhX6Bp3RsgYGeqgZpEH
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_qbUFhX6Bp3RsgYGeqgZpEH */

#ifndef typedef_c_arduinodriver_ArduinoSerial_T
#define typedef_c_arduinodriver_ArduinoSerial_T

typedef struct tag_qbUFhX6Bp3RsgYGeqgZpEH c_arduinodriver_ArduinoSerial_T;

#endif                             /* typedef_c_arduinodriver_ArduinoSerial_T */

#ifndef struct_tag_u91PmaKYLWTEg96W6r6aN
#define struct_tag_u91PmaKYLWTEg96W6r6aN

struct tag_u91PmaKYLWTEg96W6r6aN
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T Protocol;
  real_T QueueSizeFactor;
  uint16_T DataSizeInBytes;
  uint16_T DataTypeWidth;
  c_arduinodriver_ArduinoSerial_T SerialDriverObj;
};

#endif                                 /* struct_tag_u91PmaKYLWTEg96W6r6aN */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_u91PmaKYLWTEg96W6r6aN codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

#ifndef struct_tag_ghK8YWVQwtwpThnQHmUfd
#define struct_tag_ghK8YWVQwtwpThnQHmUfd

struct tag_ghK8YWVQwtwpThnQHmUfd
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T Protocol;
  real_T port;
  real_T dataSizeInBytes;
  real_T dataType;
  real_T sendModeEnum;
  real_T sendFormatEnum;
  c_arduinodriver_ArduinoSerial_T SerialDriverObj;
};

#endif                                 /* struct_tag_ghK8YWVQwtwpThnQHmUfd */

#ifndef typedef_codertarget_arduinobase_int_c_T
#define typedef_codertarget_arduinobase_int_c_T

typedef struct tag_ghK8YWVQwtwpThnQHmUfd codertarget_arduinobase_int_c_T;

#endif                             /* typedef_codertarget_arduinobase_int_c_T */

/* Parameters (default storage) */
typedef struct P_bluetooth_send_T_ P_bluetooth_send_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_bluetooth_send_T RT_MODEL_bluetooth_send_T;

#endif                                 /* bluetooth_send_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
