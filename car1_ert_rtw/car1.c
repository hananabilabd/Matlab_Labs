/*
 * File: car1.c
 *
 * Code generated for Simulink model 'car1'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Thu Jan 10 14:58:48 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "car1.h"
#include "car1_private.h"
#include "car1_dt.h"

/* Block signals (auto storage) */
B_car1_T car1_B;

/* Block states (auto storage) */
DW_car1_T car1_DW;

/* Real-time model */
RT_MODEL_car1_T car1_M_;
RT_MODEL_car1_T *const car1_M = &car1_M_;

/* Model step function */
void car1_step(void)
{
  uint8_T tmp;

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (car1_P.Constant_Value < 256.0) {
    if (car1_P.Constant_Value >= 0.0) {
      tmp = (uint8_T)car1_P.Constant_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(car1_P.DigitalOutput_pinNumber, tmp);

  /* Constant: '<Root>/Constant1' */
  car1_B.Constant1 = car1_P.Constant1_Value;

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  if (car1_B.Constant1 < 256.0) {
    if (car1_B.Constant1 >= 0.0) {
      tmp = (uint8_T)car1_B.Constant1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_digitalWrite(car1_P.DigitalOutput_pinNum_be11dsugft, tmp);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, car1_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(car1_M)!=-1) &&
        !((rtmGetTFinal(car1_M)-car1_M->Timing.taskTime0) >
          car1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(car1_M, "Simulation finished");
    }

    if (rtmGetStopRequested(car1_M)) {
      rtmSetErrorStatus(car1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  car1_M->Timing.taskTime0 =
    (++car1_M->Timing.clockTick0) * car1_M->Timing.stepSize0;
}

/* Model initialize function */
void car1_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)car1_M, 0,
                sizeof(RT_MODEL_car1_T));
  rtmSetTFinal(car1_M, -1);
  car1_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  car1_M->Sizes.checksums[0] = (1335067878U);
  car1_M->Sizes.checksums[1] = (378585427U);
  car1_M->Sizes.checksums[2] = (1111348171U);
  car1_M->Sizes.checksums[3] = (1785657073U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    car1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(car1_M->extModeInfo,
      &car1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(car1_M->extModeInfo, car1_M->Sizes.checksums);
    rteiSetTPtr(car1_M->extModeInfo, rtmGetTPtr(car1_M));
  }

  /* block I/O */
  (void) memset(((void *) &car1_B), 0,
                sizeof(B_car1_T));

  /* states (dwork) */
  (void) memset((void *)&car1_DW, 0,
                sizeof(DW_car1_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    car1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNumber);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNum_be11dsugft);
}

/* Model terminate function */
void car1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
