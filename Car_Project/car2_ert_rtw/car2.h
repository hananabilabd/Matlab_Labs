/*
 * File: car2.h
 *
 * Code generated for Simulink model 'car2'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Jan 15 14:49:18 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_car2_h_
#define RTW_HEADER_car2_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef car2_COMMON_INCLUDES_
# define car2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* car2_COMMON_INCLUDES_ */

#include "car2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_cwkcixsp5s; /* '<Root>/Pulse Generator1' */
  int32_T clockTickCounter_fcnhfrrzpv; /* '<Root>/Pulse Generator2' */
  int32_T clockTickCounter_gcse5x20dd; /* '<Root>/Pulse Generator3' */
} DW_car2_T;

/* Parameters (auto storage) */
struct P_car2_T_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S1>/Digital Output'
                                        */
  uint32_T DigitalOutput_pinNum_bgu342fgw0;/* Mask Parameter: DigitalOutput_pinNum_bgu342fgw0
                                            * Referenced by: '<S2>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_gfu1pwvlvi;/* Mask Parameter: DigitalOutput_pinNum_gfu1pwvlvi
                                            * Referenced by: '<S3>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_fy041gyrvr;/* Mask Parameter: DigitalOutput_pinNum_fy041gyrvr
                                            * Referenced by: '<S4>/Digital Output'
                                            */
  real_T PulseGenerator_Amp;           /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;       /* Computed Parameter: PulseGenerator1_Period
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Duty;         /* Computed Parameter: PulseGenerator1_Duty
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator2_Amp;          /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Period;       /* Computed Parameter: PulseGenerator2_Period
                                        * Referenced by: '<Root>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Duty;         /* Computed Parameter: PulseGenerator2_Duty
                                        * Referenced by: '<Root>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator2'
                                        */
  real_T PulseGenerator3_Amp;          /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_Period;       /* Computed Parameter: PulseGenerator3_Period
                                        * Referenced by: '<Root>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_Duty;         /* Computed Parameter: PulseGenerator3_Duty
                                        * Referenced by: '<Root>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_car2_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_car2_T car2_P;

/* Block states (auto storage) */
extern DW_car2_T car2_DW;

/* Model entry point functions */
extern void car2_initialize(void);
extern void car2_step(void);
extern void car2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_car2_T *const car2_M;

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
 * '<Root>' : 'car2'
 * '<S1>'   : 'car2/Digital Output'
 * '<S2>'   : 'car2/Digital Output1'
 * '<S3>'   : 'car2/Digital Output2'
 * '<S4>'   : 'car2/Digital Output3'
 */
#endif                                 /* RTW_HEADER_car2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
