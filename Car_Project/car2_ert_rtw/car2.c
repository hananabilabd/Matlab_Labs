/*
 * File: car2.c
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

#include "car2.h"
#include "car2_private.h"
#include "car2_dt.h"

/* Block states (auto storage) */
DW_car2_T car2_DW;

/* Real-time model */
RT_MODEL_car2_T car2_M_;
RT_MODEL_car2_T *const car2_M = &car2_M_;

/* Model step function */
void car2_step(void)
{
  real_T rtb_PulseGenerator3;
  uint8_T rtb_PulseGenerator3_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator3 = (car2_DW.clockTickCounter < car2_P.PulseGenerator_Duty) &&
    (car2_DW.clockTickCounter >= 0L) ? car2_P.PulseGenerator_Amp : 0.0;
  if (car2_DW.clockTickCounter >= car2_P.PulseGenerator_Period - 1.0) {
    car2_DW.clockTickCounter = 0L;
  } else {
    car2_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (rtb_PulseGenerator3 < 256.0) {
    if (rtb_PulseGenerator3 >= 0.0) {
      rtb_PulseGenerator3_0 = (uint8_T)rtb_PulseGenerator3;
    } else {
      rtb_PulseGenerator3_0 = 0U;
    }
  } else {
    rtb_PulseGenerator3_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(car2_P.DigitalOutput_pinNumber, rtb_PulseGenerator3_0);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtb_PulseGenerator3 = (car2_DW.clockTickCounter_cwkcixsp5s <
    car2_P.PulseGenerator1_Duty) && (car2_DW.clockTickCounter_cwkcixsp5s >= 0L) ?
    car2_P.PulseGenerator1_Amp : 0.0;
  if (car2_DW.clockTickCounter_cwkcixsp5s >= car2_P.PulseGenerator1_Period - 1.0)
  {
    car2_DW.clockTickCounter_cwkcixsp5s = 0L;
  } else {
    car2_DW.clockTickCounter_cwkcixsp5s++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  if (rtb_PulseGenerator3 < 256.0) {
    if (rtb_PulseGenerator3 >= 0.0) {
      rtb_PulseGenerator3_0 = (uint8_T)rtb_PulseGenerator3;
    } else {
      rtb_PulseGenerator3_0 = 0U;
    }
  } else {
    rtb_PulseGenerator3_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_digitalWrite(car2_P.DigitalOutput_pinNum_bgu342fgw0, rtb_PulseGenerator3_0);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator2' */
  rtb_PulseGenerator3 = (car2_DW.clockTickCounter_fcnhfrrzpv <
    car2_P.PulseGenerator2_Duty) && (car2_DW.clockTickCounter_fcnhfrrzpv >= 0L) ?
    car2_P.PulseGenerator2_Amp : 0.0;
  if (car2_DW.clockTickCounter_fcnhfrrzpv >= car2_P.PulseGenerator2_Period - 1.0)
  {
    car2_DW.clockTickCounter_fcnhfrrzpv = 0L;
  } else {
    car2_DW.clockTickCounter_fcnhfrrzpv++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator2' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  if (rtb_PulseGenerator3 < 256.0) {
    if (rtb_PulseGenerator3 >= 0.0) {
      rtb_PulseGenerator3_0 = (uint8_T)rtb_PulseGenerator3;
    } else {
      rtb_PulseGenerator3_0 = 0U;
    }
  } else {
    rtb_PulseGenerator3_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_digitalWrite(car2_P.DigitalOutput_pinNum_gfu1pwvlvi, rtb_PulseGenerator3_0);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator3' */
  rtb_PulseGenerator3 = (car2_DW.clockTickCounter_gcse5x20dd <
    car2_P.PulseGenerator3_Duty) && (car2_DW.clockTickCounter_gcse5x20dd >= 0L) ?
    car2_P.PulseGenerator3_Amp : 0.0;
  if (car2_DW.clockTickCounter_gcse5x20dd >= car2_P.PulseGenerator3_Period - 1.0)
  {
    car2_DW.clockTickCounter_gcse5x20dd = 0L;
  } else {
    car2_DW.clockTickCounter_gcse5x20dd++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator3' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  if (rtb_PulseGenerator3 < 256.0) {
    if (rtb_PulseGenerator3 >= 0.0) {
      rtb_PulseGenerator3_0 = (uint8_T)rtb_PulseGenerator3;
    } else {
      rtb_PulseGenerator3_0 = 0U;
    }
  } else {
    rtb_PulseGenerator3_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_digitalWrite(car2_P.DigitalOutput_pinNum_fy041gyrvr, rtb_PulseGenerator3_0);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.05s, 0.0s] */
    rtExtModeUpload(0, car2_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.05s, 0.0s] */
    if ((rtmGetTFinal(car2_M)!=-1) &&
        !((rtmGetTFinal(car2_M)-car2_M->Timing.taskTime0) >
          car2_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(car2_M, "Simulation finished");
    }

    if (rtmGetStopRequested(car2_M)) {
      rtmSetErrorStatus(car2_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++car2_M->Timing.clockTick0)) {
    ++car2_M->Timing.clockTickH0;
  }

  car2_M->Timing.taskTime0 = car2_M->Timing.clockTick0 *
    car2_M->Timing.stepSize0 + car2_M->Timing.clockTickH0 *
    car2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void car2_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)car2_M, 0,
                sizeof(RT_MODEL_car2_T));
  rtmSetTFinal(car2_M, -1);
  car2_M->Timing.stepSize0 = 0.05;

  /* External mode info */
  car2_M->Sizes.checksums[0] = (3495179165U);
  car2_M->Sizes.checksums[1] = (1783815976U);
  car2_M->Sizes.checksums[2] = (2353853830U);
  car2_M->Sizes.checksums[3] = (3220110744U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    car2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(car2_M->extModeInfo,
      &car2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(car2_M->extModeInfo, car2_M->Sizes.checksums);
    rteiSetTPtr(car2_M->extModeInfo, rtmGetTPtr(car2_M));
  }

  /* states (dwork) */
  (void) memset((void *)&car2_DW, 0,
                sizeof(DW_car2_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    car2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  car2_DW.clockTickCounter = 0L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(car2_P.DigitalOutput_pinNumber);

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  car2_DW.clockTickCounter_cwkcixsp5s = 0L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(car2_P.DigitalOutput_pinNum_bgu342fgw0);

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator2' */
  car2_DW.clockTickCounter_fcnhfrrzpv = 0L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_pinModeOutput(car2_P.DigitalOutput_pinNum_gfu1pwvlvi);

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator3' */
  car2_DW.clockTickCounter_gcse5x20dd = 0L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_pinModeOutput(car2_P.DigitalOutput_pinNum_fy041gyrvr);
}

/* Model terminate function */
void car2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
