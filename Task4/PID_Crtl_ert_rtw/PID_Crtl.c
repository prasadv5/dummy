/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID_Crtl.c
 *
 * Code generated for Simulink model 'PID_Crtl'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Dec  2 21:52:54 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. MISRA C:2012 guidelines
 * Validation result: Not run
 */

#include "PID_Crtl.h"
#include "PID_Crtl_private.h"

/* Block states (default storage) */
DW_PID_Crtl_T PID_Crtl_DW;

/* External inputs (root inport signals with default storage) */
ExtU_PID_Crtl_T PID_Crtl_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PID_Crtl_T PID_Crtl_Y;

/* Real-time model */
static RT_MODEL_PID_Crtl_T PID_Crtl_M_;
RT_MODEL_PID_Crtl_T *const PID_Crtl_M = &PID_Crtl_M_;

/* Model step function */
void PID_Crtl_step(void)
{
  /* ModelReference: '<Root>/Subsystem' incorporates:
   *  Inport: '<Root>/Inport'
   *  Outport: '<Root>/Outport'
   */
  Subsystem(&PID_Crtl_U.ek, &PID_Crtl_Y.Outport,
            &(PID_Crtl_DW.Subsystem_InstanceData.rtdw));
}

/* Model initialize function */
void PID_Crtl_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Subsystem' */
  Subsystem_initialize(rtmGetErrorStatusPointer(PID_Crtl_M),
                       &(PID_Crtl_DW.Subsystem_InstanceData.rtm));
}

/* Model terminate function */
void PID_Crtl_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
