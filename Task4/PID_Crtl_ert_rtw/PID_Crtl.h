/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID_Crtl.h
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

#ifndef RTW_HEADER_PID_Crtl_h_
#define RTW_HEADER_PID_Crtl_h_
#ifndef PID_Crtl_COMMON_INCLUDES_
#define PID_Crtl_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PID_Crtl_COMMON_INCLUDES_ */

#include "PID_Crtl_types.h"

/* Child system includes */
#include "Subsystem.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_Subsystem_T Subsystem_InstanceData;/* '<Root>/Subsystem' */
} DW_PID_Crtl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ek;                           /* '<Root>/Inport' */
} ExtU_PID_Crtl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY_PID_Crtl_T;

/* Real-time Model Data Structure */
struct tag_RTM_PID_Crtl_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_PID_Crtl_T PID_Crtl_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_PID_Crtl_T PID_Crtl_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PID_Crtl_T PID_Crtl_Y;

/* Model entry point functions */
extern void PID_Crtl_initialize(void);
extern void PID_Crtl_step(void);
extern void PID_Crtl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PID_Crtl_T *const PID_Crtl_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PID_Crtl'
 */
#endif                                 /* RTW_HEADER_PID_Crtl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
