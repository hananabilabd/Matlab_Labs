/*
 * File: car1.c
 *
 * Code generated for Simulink model 'car1'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sat Jan 12 21:58:13 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "car1.h"
#include "car1_private.h"
#include "car1_dt.h"

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

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (car1_P.Constant1_Value < 256.0) {
    if (car1_P.Constant1_Value >= 0.0) {
      tmp = (uint8_T)car1_P.Constant1_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_digitalWrite(car1_P.DigitalOutput_pinNum_be11dsugft, tmp);

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  if (car1_P.Constant2_Value < 256.0) {
    if (car1_P.Constant2_Value >= 0.0) {
      tmp = (uint8_T)car1_P.Constant2_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_digitalWrite(car1_P.DigitalOutput_pinNum_er4ywp3lth, tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  if (car1_P.Constant3_Value < 256.0) {
    if (car1_P.Constant3_Value >= 0.0) {
      tmp = (uint8_T)car1_P.Constant3_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_digitalWrite(car1_P.DigitalOutput_pinNum_jyui1bkhpj, tmp);

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
  car1_M->Sizes.checksums[0] = (1999558496U);
  car1_M->Sizes.checksums[1] = (1805905134U);
  car1_M->Sizes.checksums[2] = (1924969449U);
  car1_M->Sizes.checksums[3] = (80482101U);

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

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    car1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNumber);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNum_be11dsugft);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNum_er4ywp3lth);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_pinModeOutput(car1_P.DigitalOutput_pinNum_jyui1bkhpj);
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
