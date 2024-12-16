/*
 * File: DC_Motor_control_speed_Direction_Push_Button.c
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
#include "rtwtypes.h"
#include "DC_Motor_control_speed_Direction_Push_Button_private.h"
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_DC_Motor_control_speed_Dire_T DC_Motor_control_speed_Direct_B;

/* Block states (default storage) */
DW_DC_Motor_control_speed_Dir_T DC_Motor_control_speed_Direc_DW;

/* Real-time model */
static RT_MODEL_DC_Motor_control_spe_T DC_Motor_control_speed_Direc_M_;
RT_MODEL_DC_Motor_control_spe_T *const DC_Motor_control_speed_Direc_M =
  &DC_Motor_control_speed_Direc_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void DC_Motor_control_speed_Direction_Push_Button_SetEventsForThisBaseStep
  (boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(DC_Motor_control_speed_Direc_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (DC_Motor_control_speed_Direc_M->Timing.TaskCounters.TID[1])++;
  if ((DC_Motor_control_speed_Direc_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    DC_Motor_control_speed_Direc_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<Root>/button1and button_status'
 *    '<Root>/button1_status'
 *    '<Root>/button2_status'
 */
void DC__button1andbutton_status(boolean_T *rty_Out1, boolean_T *rty_Out2,
  P_button1andbutton_status_DC__T *localP)
{
  /* SignalConversion generated from: '<S2>/Out1' incorporates:
   *  Constant: '<S2>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;

  /* SignalConversion generated from: '<S2>/Out2' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  *rty_Out2 = localP->Constant1_Value;
}

/* Model step function for TID0 */
void DC_Motor_control_speed_Direction_Push_Button_step0(void) /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void DC_Motor_control_speed_Direction_Push_Button_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  real_T rtb_switch;
  real_T rtb_switch1;
  uint16_T b_varargout_1;
  boolean_T c_value;
  boolean_T c_value_0;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (DC_Motor_control_speed_Direc_DW.obj.SampleTime !=
      DC_Motor_control_speed_Direct_P.AnalogInput_SampleTime) {
    DC_Motor_control_speed_Direc_DW.obj.SampleTime =
      DC_Motor_control_speed_Direct_P.AnalogInput_SampleTime;
  }

  DC_Motor_control_speed_Direc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(18UL);
  MW_AnalogInSingle_ReadResult
    (DC_Motor_control_speed_Direc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &b_varargout_1, MW_ANALOGIN_UINT16);

  /* MATLABSystem: '<Root>/PWM' */
  DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE =
    MW_PWM_GetHandle(9UL);

  /* Start for MATLABSystem: '<Root>/PWM' incorporates:
   *  Gain: '<Root>/Gain'
   *  MATLABSystem: '<Root>/Analog Input'
   * */
  rtb_switch = (real_T)((uint32_T)DC_Motor_control_speed_Direct_P.Gain_Gain *
                        b_varargout_1) * 3.814697265625E-6;
  if (!(rtb_switch <= 255.0)) {
    rtb_switch = 255.0;
  }

  /* MATLABSystem: '<Root>/PWM' */
  MW_PWM_SetDutyCycle
    (DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE,
     rtb_switch);

  /* Switch: '<Root>/switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Delay: '<Root>/delay 2ms'
   */
  if (DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[0]) {
    rtb_switch = DC_Motor_control_speed_Direct_P.Constant_Value;
  } else {
    rtb_switch = DC_Motor_control_speed_Direct_P.Constant1_Value;
  }

  /* End of Switch: '<Root>/switch' */

  /* If: '<Root>/button1_status_condition' */
  if (rtb_switch == 1.0) {
    /* Outputs for IfAction SubSystem: '<Root>/button1_status' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    DC__button1andbutton_status(&DC_Motor_control_speed_Direct_B.Merge,
      &DC_Motor_control_speed_Direct_B.Merge1,
      &DC_Motor_control_speed_Direct_P.button1_status);

    /* End of Outputs for SubSystem: '<Root>/button1_status' */
  }

  /* End of If: '<Root>/button1_status_condition' */

  /* Switch: '<Root>/switch1' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   *  Delay: '<Root>/delay 2ms1'
   */
  if (DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[0]) {
    rtb_switch1 = DC_Motor_control_speed_Direct_P.Constant2_Value;
  } else {
    rtb_switch1 = DC_Motor_control_speed_Direct_P.Constant3_Value;
  }

  /* End of Switch: '<Root>/switch1' */

  /* If: '<Root>/button2_status_condition' */
  if (rtb_switch1 == 1.0) {
    /* Outputs for IfAction SubSystem: '<Root>/button2_status' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    DC__button1andbutton_status(&DC_Motor_control_speed_Direct_B.Merge1,
      &DC_Motor_control_speed_Direct_B.Merge,
      &DC_Motor_control_speed_Direct_P.button2_status);

    /* End of Outputs for SubSystem: '<Root>/button2_status' */
  }

  /* End of If: '<Root>/button2_status_condition' */

  /* If: '<Root>/If1' incorporates:
   *  Logic: '<Root>/if 2 buttons r same'
   */
  if ((rtb_switch != 0.0) == (rtb_switch1 != 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/button1and button_status' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    DC__button1andbutton_status(&DC_Motor_control_speed_Direct_B.Merge,
      &DC_Motor_control_speed_Direct_B.Merge1,
      &DC_Motor_control_speed_Direct_P.button1andbutton_status);

    /* End of Outputs for SubSystem: '<Root>/button1and button_status' */
  }

  /* End of If: '<Root>/If1' */

  /* MATLABSystem: '<Root>/Digital Output to the motor' */
  writeDigitalPin(10, (uint8_T)DC_Motor_control_speed_Direct_B.Merge);

  /* MATLABSystem: '<Root>/Digital Output to the motor1' */
  writeDigitalPin(11, (uint8_T)DC_Motor_control_speed_Direct_B.Merge1);

  /* MATLABSystem: '<Root>/check button on pin 2' */
  if (DC_Motor_control_speed_Direc_DW.obj_dl.SampleTime !=
      DC_Motor_control_speed_Direct_P.checkbuttononpin2_SampleTime) {
    DC_Motor_control_speed_Direc_DW.obj_dl.SampleTime =
      DC_Motor_control_speed_Direct_P.checkbuttononpin2_SampleTime;
  }

  c_value = readDigitalPin(2);

  /* MATLABSystem: '<Root>/check button on pin 3' */
  if (DC_Motor_control_speed_Direc_DW.obj_d.SampleTime !=
      DC_Motor_control_speed_Direct_P.checkbuttononpin3_SampleTime) {
    DC_Motor_control_speed_Direc_DW.obj_d.SampleTime =
      DC_Motor_control_speed_Direct_P.checkbuttononpin3_SampleTime;
  }

  c_value_0 = readDigitalPin(3);

  /* Update for Delay: '<Root>/delay 2ms' incorporates:
   *  Logic: '<Root>/NOT'
   *  MATLABSystem: '<Root>/check button on pin 2'
   * */
  DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[0] =
    DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[1];
  DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[1] = !c_value;

  /* Update for Delay: '<Root>/delay 2ms1' incorporates:
   *  Logic: '<Root>/NOT1'
   *  MATLABSystem: '<Root>/check button on pin 3'
   * */
  DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[0] =
    DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[1];
  DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[1] = !c_value_0;
}

/* Model initialize function */
void DC_Motor_control_speed_Direction_Push_Button_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* InitializeConditions for Delay: '<Root>/delay 2ms' */
  DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[0] =
    DC_Motor_control_speed_Direct_P.delay2ms_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/delay 2ms1' */
  DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[0] =
    DC_Motor_control_speed_Direct_P.delay2ms1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/delay 2ms' */
  DC_Motor_control_speed_Direc_DW.delay2ms_DSTATE[1] =
    DC_Motor_control_speed_Direct_P.delay2ms_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/delay 2ms1' */
  DC_Motor_control_speed_Direc_DW.delay2ms1_DSTATE[1] =
    DC_Motor_control_speed_Direct_P.delay2ms1_InitialCondition;

  /* SystemInitialize for Merge: '<Root>/Merge' */
  DC_Motor_control_speed_Direct_B.Merge =
    DC_Motor_control_speed_Direct_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<Root>/Merge1' */
  DC_Motor_control_speed_Direct_B.Merge1 =
    DC_Motor_control_speed_Direct_P.Merge1_InitialOutput;

  /* Start for MATLABSystem: '<Root>/Analog Input' */
  DC_Motor_control_speed_Direc_DW.obj.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj.SampleTime =
    DC_Motor_control_speed_Direct_P.AnalogInput_SampleTime;
  DC_Motor_control_speed_Direc_DW.obj.isInitialized = 1L;
  DC_Motor_control_speed_Direc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(18UL);
  DC_Motor_control_speed_Direc_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/PWM' */
  DC_Motor_control_speed_Direc_DW.obj_i.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj_i.isInitialized = 1L;
  DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open
    (9UL, 0.0, 0.0);
  DC_Motor_control_speed_Direc_DW.obj_i.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output to the motor' */
  DC_Motor_control_speed_Direc_DW.obj_f.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj_f.isInitialized = 1L;
  digitalIOSetup(10, 1);
  DC_Motor_control_speed_Direc_DW.obj_f.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output to the motor1' */
  DC_Motor_control_speed_Direc_DW.obj_m.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj_m.isInitialized = 1L;
  digitalIOSetup(11, 1);
  DC_Motor_control_speed_Direc_DW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/check button on pin 2' */
  DC_Motor_control_speed_Direc_DW.obj_dl.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj_dl.SampleTime =
    DC_Motor_control_speed_Direct_P.checkbuttononpin2_SampleTime;
  DC_Motor_control_speed_Direc_DW.obj_dl.isInitialized = 1L;
  digitalIOSetup(2, 2.0);
  DC_Motor_control_speed_Direc_DW.obj_dl.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/check button on pin 3' */
  DC_Motor_control_speed_Direc_DW.obj_d.matlabCodegenIsDeleted = false;
  DC_Motor_control_speed_Direc_DW.obj_d.SampleTime =
    DC_Motor_control_speed_Direct_P.checkbuttononpin3_SampleTime;
  DC_Motor_control_speed_Direc_DW.obj_d.isInitialized = 1L;
  digitalIOSetup(3, 2.0);
  DC_Motor_control_speed_Direc_DW.obj_d.isSetupComplete = true;
}

/* Model terminate function */
void DC_Motor_control_speed_Direction_Push_Button_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!DC_Motor_control_speed_Direc_DW.obj.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj.matlabCodegenIsDeleted = true;
    if ((DC_Motor_control_speed_Direc_DW.obj.isInitialized == 1L) &&
        DC_Motor_control_speed_Direc_DW.obj.isSetupComplete) {
      DC_Motor_control_speed_Direc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(18UL);
      MW_AnalogIn_Close
        (DC_Motor_control_speed_Direc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  if (!DC_Motor_control_speed_Direc_DW.obj_i.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj_i.matlabCodegenIsDeleted = true;
    if ((DC_Motor_control_speed_Direc_DW.obj_i.isInitialized == 1L) &&
        DC_Motor_control_speed_Direc_DW.obj_i.isSetupComplete) {
      DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE =
        MW_PWM_GetHandle(9UL);
      MW_PWM_SetDutyCycle
        (DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE =
        MW_PWM_GetHandle(9UL);
      MW_PWM_Close
        (DC_Motor_control_speed_Direc_DW.obj_i.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */
  if (!DC_Motor_control_speed_Direc_DW.obj_f.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output to the motor' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output to the motor1' */
  if (!DC_Motor_control_speed_Direc_DW.obj_m.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output to the motor1' */

  /* Terminate for MATLABSystem: '<Root>/check button on pin 2' */
  if (!DC_Motor_control_speed_Direc_DW.obj_dl.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj_dl.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/check button on pin 2' */

  /* Terminate for MATLABSystem: '<Root>/check button on pin 3' */
  if (!DC_Motor_control_speed_Direc_DW.obj_d.matlabCodegenIsDeleted) {
    DC_Motor_control_speed_Direc_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/check button on pin 3' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
