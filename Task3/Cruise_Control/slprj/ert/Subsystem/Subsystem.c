/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Dec  2 23:21:30 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem.h"
#include "Subsystem_private.h"

/* Output and update for referenced model: 'Subsystem' */
void Subsystem(const real_T *rtu_Inport, real_T *rty_Outport, DW_Subsystem_f_T
               *localDW)
{
  real_T rtb_Gain;
  real_T rtb_Kiek;

  /* Gain: '<Root>/Gain' */
  rtb_Gain = 300.0 * *rtu_Inport;

  /* Gain: '<Root>/Gain1' */
  rtb_Kiek = 13.0 * *rtu_Inport;

  /* Sum: '<Root>/Add1' incorporates:
   *  Gain: '<Root>/Gain3'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  localDW->UnitDelay_DSTATE += 0.01 * rtb_Kiek;

  /* Sum: '<Root>/Add2' incorporates:
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  rtb_Kiek = *rtu_Inport - localDW->UnitDelay1_DSTATE;

  /* Sum: '<Root>/Add' incorporates:
   *  Gain: '<Root>/Gain4'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  *rty_Outport = (rtb_Gain + localDW->UnitDelay_DSTATE) + 100.0 * rtb_Kiek;

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = *rtu_Inport;
}

/* Model initialize function */
void Subsystem_initialize(const char_T **rt_errorStatus, RT_MODEL_Subsystem_T *
  const Subsystem_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Subsystem_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
