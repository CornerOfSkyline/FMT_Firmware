/*
 * File: FMS.c
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.710
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Sep 14 08:38:14 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FMS.h"
#include "FMS_private.h"

/* Named constants for Chart: '<S78>/Motion_State' */
#define FMS_IN_Brake                   ((uint8_T)1U)
#define FMS_IN_Hold                    ((uint8_T)2U)
#define FMS_IN_Move                    ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)

/* Named constants for Chart: '<S95>/Z_Motion_State' */
#define FMS_IN_Brake_h                 ((uint8_T)1U)
#define FMS_IN_Hold_p                  ((uint8_T)2U)
#define FMS_IN_Move_k                  ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD_e       ((uint8_T)0U)

/* Named constants for Chart: '<S1>/Mode_Logic' */
#define FMS_IN_Acro                    ((uint8_T)1U)
#define FMS_IN_Altitude_Hold           ((uint8_T)2U)
#define FMS_IN_Manual                  ((uint8_T)3U)
#define FMS_IN_Mission                 ((uint8_T)4U)
#define FMS_IN_NO_ACTIVE_CHILD_h       ((uint8_T)0U)
#define FMS_IN_Position                ((uint8_T)5U)
#define FMS_IN_Unknow                  ((uint8_T)6U)

/* Named constants for Chart: '<S95>/XY_Motion_State' */
#define FMS_IN_Brake_hi                ((uint8_T)1U)
#define FMS_IN_Hold_n                  ((uint8_T)2U)
#define FMS_IN_Move_j                  ((uint8_T)3U)

/* Named constants for Chart: '<S129>/Arm_Event' */
#define FMS_IN_Idle                    ((uint8_T)1U)
#define FMS_IN_arm_event               ((uint8_T)2U)
#define FMS_IN_ready                   ((uint8_T)3U)

/* Named constants for Chart: '<S129>/Disarm_Event' */
#define FMS_IN_Disarm                  ((uint8_T)1U)
#define FMS_IN_Idle_o                  ((uint8_T)2U)
#define FMS_IN_On_Ground               ((uint8_T)3U)

/* Named constants for Chart: '<S3>/State_Logic' */
#define FMS_IN_Arm                     ((uint8_T)1U)
#define FMS_IN_Disarm_a                ((uint8_T)2U)
#define FMS_IN_Motor_Test              ((uint8_T)3U)
#define FMS_IN_Standby                 ((uint8_T)4U)

const FMS_Out_Bus FMS_rtZFMS_Out_Bus = {
  0U,                                  /* timestamp */
  0.0F,                                /* p_cmd */
  0.0F,                                /* q_cmd */
  0.0F,                                /* r_cmd */
  0.0F,                                /* phi_cmd */
  0.0F,                                /* theta_cmd */
  0.0F,                                /* psi_rate_cmd */
  0.0F,                                /* u_cmd */
  0.0F,                                /* v_cmd */
  0.0F,                                /* w_cmd */
  0U,                                  /* throttle_cmd */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  ,                                    /* actuator_cmd */
  0U,                                  /* state */
  0U,                                  /* mode */
  0U,                                  /* reset */
  0U                                   /* reserved */
} ;                                    /* FMS_Out_Bus ground */

/* Exported block parameters */
struct_QTHD3FieMDlB4oEKy11VyG FMS_PARAM = {
  0.1F,
  0.95F,
  1.0F,
  5.0F,
  2.5F,
  1.0F,
  1.04719758F,
  0.52359879F
} ;                                    /* Variable: FMS_PARAM
                                        * Referenced by:
                                        *   '<S120>/Constant'
                                        *   '<S120>/Dead Zone'
                                        *   '<S121>/Constant'
                                        *   '<S121>/Dead Zone'
                                        *   '<S122>/Constant'
                                        *   '<S122>/Dead Zone'
                                        *   '<S123>/Constant'
                                        *   '<S123>/Dead Zone'
                                        *   '<S14>/Gain'
                                        *   '<S14>/Gain1'
                                        *   '<S15>/Saturation1'
                                        *   '<S16>/Saturation'
                                        *   '<S55>/Gain1'
                                        *   '<S55>/Gain2'
                                        *   '<S56>/Saturation1'
                                        *   '<S78>/Saturation1'
                                        *   '<S25>/Gain2'
                                        *   '<S26>/Gain1'
                                        *   '<S66>/Gain2'
                                        *   '<S67>/Gain1'
                                        *   '<S84>/Gain2'
                                        *   '<S85>/Gain1'
                                        *   '<S96>/Saturation'
                                        *   '<S96>/Saturation1'
                                        *   '<S34>/Dead Zone'
                                        *   '<S34>/Gain'
                                        *   '<S42>/Gain4'
                                        *   '<S43>/Gain6'
                                        *   '<S75>/Dead Zone'
                                        *   '<S75>/Gain'
                                        *   '<S93>/Dead Zone'
                                        *   '<S93>/Gain'
                                        *   '<S103>/Gain2'
                                        *   '<S103>/Gain4'
                                        *   '<S104>/Gain1'
                                        *   '<S104>/Gain5'
                                        *   '<S104>/Gain6'
                                        *   '<S51>/Dead Zone'
                                        *   '<S51>/Gain'
                                        *   '<S115>/Dead Zone'
                                        *   '<S115>/Gain'
                                        *   '<S116>/Dead Zone'
                                        *   '<S116>/Gain'
                                        *   '<S117>/Dead Zone'
                                        *   '<S117>/Gain'
                                        */

struct_i7E80ZuatMf603HOn7rPOE FMS_EXPORT = {
  4U,

  { 66, 97, 115, 101, 32, 70, 77, 83, 0 }
} ;                                    /* Variable: FMS_EXPORT
                                        * Referenced by: '<S134>/Constant'
                                        */

/* Block signals (default storage) */
B_FMS_T FMS_B;

/* Block states (default storage) */
DW_FMS_T FMS_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FMS_T FMS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FMS_T FMS_Y;

/* Real-time model */
RT_MODEL_FMS_T FMS_M_;
RT_MODEL_FMS_T *const FMS_M = &FMS_M_;

/* Forward declaration for local functions */
static void FMS_Unknow(void);

/*
 * System initialize for atomic system:
 *    '<S78>/Motion_State'
 *    '<S15>/Motion_State'
 *    '<S56>/Motion_State'
 */
void FMS_Motion_State_Init(DW_Motion_State_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c5_FMS = 0U;
  localDW->is_c5_FMS = FMS_IN_NO_ACTIVE_CHILD;
}

/*
 * System reset for atomic system:
 *    '<S78>/Motion_State'
 *    '<S15>/Motion_State'
 *    '<S56>/Motion_State'
 */
void FMS_Motion_State_Reset(DW_Motion_State_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c5_FMS = 0U;
  localDW->is_c5_FMS = FMS_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S78>/Motion_State'
 *    '<S15>/Motion_State'
 *    '<S56>/Motion_State'
 */
void FMS_Motion_State(boolean_T rtu_move_cmd, real32_T rtu_heading_rate, real_T *
                      rty_state, DW_Motion_State_FMS_T *localDW)
{
  /* Chart: '<S78>/Motion_State' */
  if (localDW->temporalCounter_i1 < 255U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c5_FMS == 0U) {
    localDW->is_active_c5_FMS = 1U;
    localDW->is_c5_FMS = FMS_IN_Move;
    *rty_state = 0.0;
  } else {
    switch (localDW->is_c5_FMS) {
     case FMS_IN_Brake:
      *rty_state = 1.0;
      if ((rtu_heading_rate <= 0.1) || (localDW->temporalCounter_i1 >= 250U)) {
        localDW->is_c5_FMS = FMS_IN_Hold;
        *rty_state = 2.0;
      } else {
        if (rtu_move_cmd) {
          localDW->is_c5_FMS = FMS_IN_Move;
          *rty_state = 0.0;
        }
      }
      break;

     case FMS_IN_Hold:
      *rty_state = 2.0;
      if (rtu_move_cmd) {
        localDW->is_c5_FMS = FMS_IN_Move;
        *rty_state = 0.0;
      }
      break;

     default:
      *rty_state = 0.0;
      if (!rtu_move_cmd) {
        localDW->is_c5_FMS = FMS_IN_Brake;
        localDW->temporalCounter_i1 = 0U;
        *rty_state = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S78>/Motion_State' */
}

/*
 * System initialize for atomic system:
 *    '<S95>/Z_Motion_State'
 *    '<S36>/Z_Motion_State'
 */
void FMS_Z_Motion_State_Init(DW_Z_Motion_State_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c8_FMS = 0U;
  localDW->is_c8_FMS = FMS_IN_NO_ACTIVE_CHILD_e;
}

/*
 * System reset for atomic system:
 *    '<S95>/Z_Motion_State'
 *    '<S36>/Z_Motion_State'
 */
void FMS_Z_Motion_State_Reset(DW_Z_Motion_State_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c8_FMS = 0U;
  localDW->is_c8_FMS = FMS_IN_NO_ACTIVE_CHILD_e;
}

/*
 * Output and update for atomic system:
 *    '<S95>/Z_Motion_State'
 *    '<S36>/Z_Motion_State'
 */
void FMS_Z_Motion_State(boolean_T rtu_move_cmd, real32_T rtu_speed, real_T
  *rty_state, DW_Z_Motion_State_FMS_T *localDW)
{
  /* Chart: '<S95>/Z_Motion_State' */
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c8_FMS == 0U) {
    localDW->is_active_c8_FMS = 1U;
    localDW->is_c8_FMS = FMS_IN_Move_k;
    *rty_state = 0.0;
  } else {
    switch (localDW->is_c8_FMS) {
     case FMS_IN_Brake_h:
      *rty_state = 1.0;
      if ((fabsf(rtu_speed) <= 0.2) || (localDW->temporalCounter_i1 >= 375U)) {
        localDW->is_c8_FMS = FMS_IN_Hold_p;
        *rty_state = 2.0;
      } else {
        if (rtu_move_cmd) {
          localDW->is_c8_FMS = FMS_IN_Move_k;
          *rty_state = 0.0;
        }
      }
      break;

     case FMS_IN_Hold_p:
      *rty_state = 2.0;
      if (rtu_move_cmd) {
        localDW->is_c8_FMS = FMS_IN_Move_k;
        *rty_state = 0.0;
      }
      break;

     default:
      *rty_state = 0.0;
      if (!rtu_move_cmd) {
        localDW->is_c8_FMS = FMS_IN_Brake_h;
        localDW->temporalCounter_i1 = 0U;
        *rty_state = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S95>/Z_Motion_State' */
}

/* Function for Chart: '<S1>/Mode_Logic' */
static void FMS_Unknow(void)
{
  FMS_B.control_mode = FMS_DW.local_mode;

  /* Inport: '<Root>/Pilot_Cmd' */
  switch (FMS_U.Pilot_Cmd.mode) {
   case 5U:
    FMS_DW.is_c1_FMS = FMS_IN_Acro;
    FMS_DW.local_mode = 5U;
    break;

   case 4U:
    FMS_DW.is_c1_FMS = FMS_IN_Manual;
    FMS_DW.local_mode = 4U;
    break;

   case 3U:
    FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
    FMS_DW.local_mode = 3U;
    break;

   case 2U:
    FMS_DW.is_c1_FMS = FMS_IN_Position;
    FMS_DW.local_mode = 2U;
    break;

   case 1U:
    FMS_DW.is_c1_FMS = FMS_IN_Mission;
    FMS_DW.local_mode = 1U;
    break;

   default:
    FMS_DW.is_c1_FMS = FMS_IN_Unknow;
    FMS_DW.local_mode = 0U;
    break;
  }

  /* End of Inport: '<Root>/Pilot_Cmd' */
}

/* Model step function */
void FMS_step(void)
{
  real32_T rtb_stick_throttle_raw;
  real32_T rtb_stick_roll_raw;
  real32_T rtb_TrigoFcn;
  real32_T rtb_stick_pitch_raw;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_Compare_nq;
  uint16_T rtb_Multiply_ox[16];
  real32_T rtb_MatrixConcatenate3[9];
  uint8_T rtb_Compare;
  real32_T rtb_stick_yaw_raw;
  real32_T rtb_M_z[9];
  int8_T rtPrevAction;
  real_T rtb_state_a;
  boolean_T rtb_Compare_je;
  boolean_T rtb_Compare_ff;
  real32_T rtb_Divide_e2;
  real32_T rtb_Sign5_g;
  real32_T rtb_Multiply_a[3];
  real32_T rtb_Add_d;
  real32_T rtb_Add_m;
  int32_T i;
  int32_T i_0;
  real32_T rtb_Product_idx_0;
  real32_T rtb_Product_idx_1;
  real32_T rtb_Product_idx_2;
  uint32_T tmp;
  real32_T y;
  real32_T u;
  uint16_T tmp_0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* Saturate: '<S2>/Saturation1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.ls_ud > 1.0F) {
    rtb_stick_throttle_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.ls_ud < -1.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    rtb_stick_throttle_raw = FMS_U.Pilot_Cmd.ls_ud;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* Chart: '<S1>/Mode_Logic' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_DW.is_active_c1_FMS == 0U) {
    FMS_DW.is_active_c1_FMS = 1U;
    switch (FMS_U.Pilot_Cmd.mode) {
     case 5U:
      FMS_DW.is_c1_FMS = FMS_IN_Acro;
      FMS_DW.local_mode = 5U;
      break;

     case 4U:
      FMS_DW.is_c1_FMS = FMS_IN_Manual;
      FMS_DW.local_mode = 4U;
      break;

     case 3U:
      FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
      FMS_DW.local_mode = 3U;
      break;

     case 2U:
      FMS_DW.is_c1_FMS = FMS_IN_Position;
      FMS_DW.local_mode = 2U;
      break;

     case 1U:
      FMS_DW.is_c1_FMS = FMS_IN_Mission;
      FMS_DW.local_mode = 1U;
      break;

     default:
      FMS_DW.is_c1_FMS = FMS_IN_Unknow;
      FMS_DW.local_mode = 0U;
      break;
    }
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    switch (FMS_DW.is_c1_FMS) {
     case FMS_IN_Acro:
      FMS_B.control_mode = FMS_DW.local_mode;
      switch (FMS_U.Pilot_Cmd.mode) {
       case 5U:
        FMS_DW.is_c1_FMS = FMS_IN_Acro;
        FMS_DW.local_mode = 5U;
        break;

       case 4U:
        FMS_DW.is_c1_FMS = FMS_IN_Manual;
        FMS_DW.local_mode = 4U;
        break;

       case 3U:
        FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
        FMS_DW.local_mode = 3U;
        break;

       case 2U:
        FMS_DW.is_c1_FMS = FMS_IN_Position;
        FMS_DW.local_mode = 2U;
        break;

       case 1U:
        FMS_DW.is_c1_FMS = FMS_IN_Mission;
        FMS_DW.local_mode = 1U;
        break;

       default:
        FMS_DW.is_c1_FMS = FMS_IN_Unknow;
        FMS_DW.local_mode = 0U;
        break;
      }
      break;

     case FMS_IN_Altitude_Hold:
      if ((FMS_U.INS_Output.flag & 128U) != 0U) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          guard1 = true;
        } else {
          switch (FMS_U.Pilot_Cmd.mode) {
           case 3U:
            FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
            FMS_DW.local_mode = 3U;
            break;

           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }
        }
      } else {
        guard1 = true;
      }
      break;

     case FMS_IN_Manual:
      if ((FMS_U.INS_Output.flag & 4U) != 0U) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          guard2 = true;
        } else {
          switch (FMS_U.Pilot_Cmd.mode) {
           case 4U:
            FMS_DW.is_c1_FMS = FMS_IN_Manual;
            FMS_DW.local_mode = 4U;
            break;

           case 3U:
            FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
            FMS_DW.local_mode = 3U;
            break;

           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }
        }
      } else {
        guard2 = true;
      }
      break;

     case FMS_IN_Mission:
      if (((FMS_U.INS_Output.flag & 8U) != 0U) && ((FMS_U.INS_Output.flag & 32U)
           != 0U)) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          FMS_DW.is_c1_FMS = FMS_IN_Manual;
          FMS_DW.local_mode = 4U;
        } else if (FMS_U.Pilot_Cmd.mode == 3U) {
          FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
          FMS_DW.local_mode = 3U;
        } else if (FMS_U.Pilot_Cmd.mode == 2U) {
          guard3 = true;
        } else if (FMS_U.Pilot_Cmd.mode == 1U) {
          FMS_DW.is_c1_FMS = FMS_IN_Mission;
          FMS_DW.local_mode = 1U;
        } else {
          FMS_DW.is_c1_FMS = FMS_IN_Unknow;
          FMS_DW.local_mode = 0U;
        }
      } else {
        guard3 = true;
      }
      break;

     case FMS_IN_Position:
      if (((FMS_U.INS_Output.flag & 8U) != 0U) && ((FMS_U.INS_Output.flag & 64U)
           != 0U) && ((FMS_U.INS_Output.flag & 128U) != 0U)) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          FMS_DW.is_c1_FMS = FMS_IN_Manual;
          FMS_DW.local_mode = 4U;
        } else if (FMS_U.Pilot_Cmd.mode == 3U) {
          guard4 = true;
        } else {
          switch (FMS_U.Pilot_Cmd.mode) {
           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }
        }
      } else {
        guard4 = true;
      }
      break;

     default:
      FMS_Unknow();
      break;
    }

    if (guard4) {
      FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
      FMS_DW.local_mode = 3U;
    }

    if (guard3) {
      FMS_DW.is_c1_FMS = FMS_IN_Position;
      FMS_DW.local_mode = 2U;
    }

    if (guard2) {
      FMS_DW.is_c1_FMS = FMS_IN_Acro;
      FMS_DW.local_mode = 5U;
    }

    if (guard1) {
      FMS_DW.is_c1_FMS = FMS_IN_Manual;
      FMS_DW.local_mode = 4U;
    }
  }

  /* End of Chart: '<S1>/Mode_Logic' */

  /* Saturate: '<S2>/Saturation2' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.rs_lr > 1.0F) {
    rtb_stick_roll_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.rs_lr < -1.0F) {
    rtb_stick_roll_raw = -1.0F;
  } else {
    rtb_stick_roll_raw = FMS_U.Pilot_Cmd.rs_lr;
  }

  /* End of Saturate: '<S2>/Saturation2' */

  /* DeadZone: '<S122>/Dead Zone' */
  if (rtb_stick_roll_raw > FMS_PARAM.StickDeadZone) {
    rtb_TrigoFcn = rtb_stick_roll_raw - FMS_PARAM.StickDeadZone;
  } else if (rtb_stick_roll_raw >= -FMS_PARAM.StickDeadZone) {
    rtb_TrigoFcn = 0.0F;
  } else {
    rtb_TrigoFcn = rtb_stick_roll_raw - (-FMS_PARAM.StickDeadZone);
  }

  /* End of DeadZone: '<S122>/Dead Zone' */

  /* Signum: '<S122>/Sign' */
  if (rtb_TrigoFcn < 0.0F) {
    rtb_Add_d = -1.0F;
  } else if (rtb_TrigoFcn > 0.0F) {
    rtb_Add_d = 1.0F;
  } else {
    rtb_Add_d = rtb_TrigoFcn;
  }

  /* End of Signum: '<S122>/Sign' */

  /* Sum: '<S122>/Add' incorporates:
   *  Constant: '<S122>/Constant'
   *  Product: '<S122>/Multiply'
   */
  rtb_Add_m = rtb_Add_d * FMS_PARAM.StickDeadZone + rtb_TrigoFcn;

  /* Saturate: '<S2>/Saturation3' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.rs_ud > 1.0F) {
    rtb_stick_pitch_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.rs_ud < -1.0F) {
    rtb_stick_pitch_raw = -1.0F;
  } else {
    rtb_stick_pitch_raw = FMS_U.Pilot_Cmd.rs_ud;
  }

  /* End of Saturate: '<S2>/Saturation3' */

  /* DeadZone: '<S123>/Dead Zone' */
  if (rtb_stick_pitch_raw > FMS_PARAM.StickDeadZone) {
    rtb_TrigoFcn = rtb_stick_pitch_raw - FMS_PARAM.StickDeadZone;
  } else if (rtb_stick_pitch_raw >= -FMS_PARAM.StickDeadZone) {
    rtb_TrigoFcn = 0.0F;
  } else {
    rtb_TrigoFcn = rtb_stick_pitch_raw - (-FMS_PARAM.StickDeadZone);
  }

  /* End of DeadZone: '<S123>/Dead Zone' */

  /* Signum: '<S123>/Sign' */
  if (rtb_TrigoFcn < 0.0F) {
    rtb_Add_d = -1.0F;
  } else if (rtb_TrigoFcn > 0.0F) {
    rtb_Add_d = 1.0F;
  } else {
    rtb_Add_d = rtb_TrigoFcn;
  }

  /* End of Signum: '<S123>/Sign' */

  /* Sum: '<S123>/Add' incorporates:
   *  Constant: '<S123>/Constant'
   *  Product: '<S123>/Multiply'
   */
  rtb_Add_d = rtb_Add_d * FMS_PARAM.StickDeadZone + rtb_TrigoFcn;

  /* Chart: '<S129>/Arm_Event' */
  if (FMS_DW.is_active_c3_FMS == 0U) {
    FMS_DW.is_active_c3_FMS = 1U;
    FMS_DW.is_c3_FMS = FMS_IN_Idle;
    FMS_B.arm_event = 0.0;
  } else {
    switch (FMS_DW.is_c3_FMS) {
     case FMS_IN_Idle:
      FMS_B.arm_event = 0.0;
      if ((rtb_stick_throttle_raw < -0.8) && (rtb_Add_m < -0.8) && (rtb_Add_d <
           -0.8)) {
        FMS_DW.is_c3_FMS = FMS_IN_ready;
      }
      break;

     case FMS_IN_arm_event:
      FMS_DW.is_c3_FMS = FMS_IN_Idle;
      FMS_B.arm_event = 0.0;
      break;

     default:
      if ((fabsf(rtb_Add_m) < 0.15) && (fabsf(rtb_Add_d) < 0.15)) {
        FMS_DW.is_c3_FMS = FMS_IN_arm_event;
        FMS_B.arm_event = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S129>/Arm_Event' */

  /* Logic: '<S137>/Logical Operator1' incorporates:
   *  Constant: '<S138>/Constant'
   *  Constant: '<S139>/Lower Limit'
   *  Constant: '<S139>/Upper Limit'
   *  DiscreteIntegrator: '<S140>/Discrete-Time Integrator5'
   *  Inport: '<Root>/Control_Out'
   *  Logic: '<S139>/AND'
   *  Product: '<S137>/Divide'
   *  RelationalOperator: '<S138>/Compare'
   *  RelationalOperator: '<S139>/Lower Test'
   *  RelationalOperator: '<S139>/Upper Test'
   *  Sum: '<S137>/Sum of Elements'
   */
  rtb_LogicalOperator1 = ((-10.806F <= FMS_DW.DiscreteTimeIntegrator5_DSTATE) &&
    (FMS_DW.DiscreteTimeIntegrator5_DSTATE <= -8.806F) && ((int32_T)((uint32_T)
    (uint16_T)((((uint32_T)FMS_U.Control_Out.actuator_cmd[0] +
                 FMS_U.Control_Out.actuator_cmd[1]) +
                FMS_U.Control_Out.actuator_cmd[2]) +
               FMS_U.Control_Out.actuator_cmd[3]) >> 2) < 1200));

  /* Chart: '<S129>/Disarm_Event' incorporates:
   *  Delay: '<S3>/Delay'
   */
  if (FMS_DW.temporalCounter_i1_a < 511U) {
    FMS_DW.temporalCounter_i1_a++;
  }

  if (FMS_DW.is_active_c10_FMS == 0U) {
    FMS_DW.is_active_c10_FMS = 1U;
    FMS_DW.is_c10_FMS = FMS_IN_Idle_o;
    FMS_B.disarm_event = 0.0;
  } else {
    switch (FMS_DW.is_c10_FMS) {
     case FMS_IN_Disarm:
      FMS_DW.is_c10_FMS = FMS_IN_Idle_o;
      FMS_B.disarm_event = 0.0;
      break;

     case FMS_IN_Idle_o:
      FMS_B.disarm_event = 0.0;
      if (rtb_LogicalOperator1 && (FMS_DW.Delay_DSTATE_pi == 2)) {
        FMS_DW.is_c10_FMS = FMS_IN_On_Ground;
        FMS_DW.temporalCounter_i1_a = 0U;
      }
      break;

     default:
      if (!rtb_LogicalOperator1) {
        FMS_DW.is_c10_FMS = FMS_IN_Idle_o;
        FMS_B.disarm_event = 0.0;
      } else {
        if (FMS_DW.temporalCounter_i1_a >= 375U) {
          FMS_DW.is_c10_FMS = FMS_IN_Disarm;
          FMS_B.disarm_event = 1.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S129>/Disarm_Event' */

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Pilot_Cmd'
   */
  rtb_LogicalOperator1 = (FMS_U.Pilot_Cmd.cmd_1 == 1000U);

  /* RelationalOperator: '<S128>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S128>/Delay Input1'
   *
   * Block description for '<S128>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = ((int32_T)rtb_LogicalOperator1 > (int32_T)
    FMS_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Pilot_Cmd'
   */
  rtb_Compare_nq = (FMS_U.Pilot_Cmd.cmd_2 == 2000U);

  /* Chart: '<S3>/State_Logic' */
  if (FMS_DW.temporalCounter_i1 < 8191U) {
    FMS_DW.temporalCounter_i1++;
  }

  if (FMS_DW.is_active_c4_FMS == 0U) {
    FMS_DW.is_active_c4_FMS = 1U;
    FMS_DW.is_c4_FMS = FMS_IN_Disarm_a;
    FMS_DW.Delay_DSTATE_pi = 0U;
    FMS_B.PWM_Cmd = 1000U;
  } else {
    guard1 = false;
    switch (FMS_DW.is_c4_FMS) {
     case FMS_IN_Arm:
      FMS_DW.Delay_DSTATE_pi = 2U;
      if (((FMS_B.disarm_event == 1.0) && FMS_ConstB.Disarm_Allowed_Logical_Oper)
          || rtb_FixPtRelationalOperator) {
        FMS_DW.is_c4_FMS = FMS_IN_Disarm_a;
        FMS_DW.Delay_DSTATE_pi = 0U;
        FMS_B.PWM_Cmd = 1000U;
      }
      break;

     case FMS_IN_Disarm_a:
      FMS_DW.Delay_DSTATE_pi = 0U;
      if (rtb_Compare_nq && (FMS_B.arm_event == 1.0)) {
        FMS_DW.is_c4_FMS = FMS_IN_Motor_Test;
        FMS_DW.Delay_DSTATE_pi = 1U;
      } else {
        if ((FMS_B.arm_event == 1.0) && FMS_ConstB.Arm_Allowed_Logical_Operato)
        {
          FMS_DW.is_c4_FMS = FMS_IN_Standby;
          FMS_DW.temporalCounter_i1 = 0U;
          FMS_DW.Delay_DSTATE_pi = 1U;
          FMS_B.PWM_Cmd = 1150U;
        }
      }
      break;

     case FMS_IN_Motor_Test:
      FMS_DW.Delay_DSTATE_pi = 1U;
      if ((!rtb_Compare_nq) || (FMS_B.arm_event == 1.0)) {
        FMS_DW.is_c4_FMS = FMS_IN_Disarm_a;
        FMS_DW.Delay_DSTATE_pi = 0U;
        FMS_B.PWM_Cmd = 1000U;
      } else {
        rtb_Product_idx_0 = roundf((rtb_stick_throttle_raw + 1.0F) * 500.0F);
        if (rtb_Product_idx_0 < 65536.0F) {
          tmp_0 = (uint16_T)rtb_Product_idx_0;
        } else {
          tmp_0 = MAX_uint16_T;
        }

        tmp = 1000U + tmp_0;
        if (tmp > 65535U) {
          tmp = 65535U;
        }

        FMS_B.PWM_Cmd = (uint16_T)tmp;
      }
      break;

     default:
      FMS_DW.Delay_DSTATE_pi = 1U;
      if (FMS_DW.temporalCounter_i1 >= 7500U) {
        guard1 = true;
      } else if (rtb_stick_throttle_raw > -0.25F) {
        FMS_DW.is_c4_FMS = FMS_IN_Arm;
        FMS_DW.Delay_DSTATE_pi = 2U;
      } else {
        if ((FMS_B.arm_event == 1.0) || rtb_FixPtRelationalOperator) {
          guard1 = true;
        }
      }
      break;
    }

    if (guard1) {
      FMS_DW.is_c4_FMS = FMS_IN_Disarm_a;
      FMS_DW.Delay_DSTATE_pi = 0U;
      FMS_B.PWM_Cmd = 1000U;
    }
  }

  /* End of Chart: '<S3>/State_Logic' */

  /* Product: '<S133>/Multiply' */
  for (i = 0; i < 16; i++) {
    rtb_Multiply_ox[i] = FMS_B.PWM_Cmd;
  }

  /* End of Product: '<S133>/Multiply' */

  /* Product: '<S141>/Product' incorporates:
   *  Inport: '<Root>/INS_Output'
   */
  rtb_Product_idx_0 = FMS_U.INS_Output.quat[0] * FMS_U.INS_Output.quat[0];
  rtb_Product_idx_1 = FMS_U.INS_Output.quat[1] * FMS_U.INS_Output.quat[1];
  rtb_Product_idx_2 = FMS_U.INS_Output.quat[2] * FMS_U.INS_Output.quat[2];
  rtb_TrigoFcn = FMS_U.INS_Output.quat[3] * FMS_U.INS_Output.quat[3];

  /* Sum: '<S141>/Add' */
  rtb_MatrixConcatenate3[0] = ((rtb_Product_idx_0 + rtb_Product_idx_1) -
    rtb_Product_idx_2) - rtb_TrigoFcn;

  /* Sum: '<S141>/Add5' incorporates:
   *  Sum: '<S141>/Add8'
   */
  rtb_Product_idx_0 -= rtb_Product_idx_1;
  rtb_MatrixConcatenate3[4] = (rtb_Product_idx_0 + rtb_Product_idx_2) -
    rtb_TrigoFcn;

  /* Sum: '<S141>/Add8' */
  rtb_MatrixConcatenate3[8] = (rtb_Product_idx_0 - rtb_Product_idx_2) +
    rtb_TrigoFcn;

  /* Product: '<S141>/Product1' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product5'
   */
  rtb_Product_idx_0 = FMS_U.INS_Output.quat[1] * FMS_U.INS_Output.quat[2];

  /* Product: '<S141>/Product2' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product6'
   */
  rtb_Product_idx_2 = FMS_U.INS_Output.quat[0] * FMS_U.INS_Output.quat[3];

  /* Gain: '<S141>/Gain' incorporates:
   *  Product: '<S141>/Product1'
   *  Product: '<S141>/Product2'
   *  Sum: '<S141>/Add1'
   */
  rtb_MatrixConcatenate3[1] = (rtb_Product_idx_0 + rtb_Product_idx_2) * 2.0F;

  /* Product: '<S141>/Product3' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product9'
   */
  rtb_TrigoFcn = FMS_U.INS_Output.quat[1] * FMS_U.INS_Output.quat[3];

  /* Product: '<S141>/Product4' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product10'
   */
  rtb_Product_idx_1 = FMS_U.INS_Output.quat[0] * FMS_U.INS_Output.quat[2];

  /* Gain: '<S141>/Gain1' incorporates:
   *  Product: '<S141>/Product3'
   *  Product: '<S141>/Product4'
   *  Sum: '<S141>/Add2'
   */
  rtb_MatrixConcatenate3[2] = (rtb_TrigoFcn - rtb_Product_idx_1) * 2.0F;

  /* Gain: '<S141>/Gain2' incorporates:
   *  Sum: '<S141>/Add3'
   */
  rtb_MatrixConcatenate3[3] = (rtb_Product_idx_0 - rtb_Product_idx_2) * 2.0F;

  /* Product: '<S141>/Product7' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product12'
   */
  rtb_Product_idx_0 = FMS_U.INS_Output.quat[2] * FMS_U.INS_Output.quat[3];

  /* Product: '<S141>/Product8' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Product: '<S141>/Product11'
   */
  rtb_Product_idx_2 = FMS_U.INS_Output.quat[0] * FMS_U.INS_Output.quat[1];

  /* Gain: '<S141>/Gain3' incorporates:
   *  Product: '<S141>/Product7'
   *  Product: '<S141>/Product8'
   *  Sum: '<S141>/Add4'
   */
  rtb_MatrixConcatenate3[5] = (rtb_Product_idx_0 + rtb_Product_idx_2) * 2.0F;

  /* Gain: '<S141>/Gain4' incorporates:
   *  Sum: '<S141>/Add6'
   */
  rtb_MatrixConcatenate3[6] = (rtb_TrigoFcn + rtb_Product_idx_1) * 2.0F;

  /* Gain: '<S141>/Gain5' incorporates:
   *  Sum: '<S141>/Add7'
   */
  rtb_MatrixConcatenate3[7] = (rtb_Product_idx_0 - rtb_Product_idx_2) * 2.0F;

  /* RelationalOperator: '<S131>/Compare' incorporates:
   *  Constant: '<S131>/Constant'
   */
  rtb_Compare = (uint8_T)(FMS_DW.Delay_DSTATE_pi < 2);

  /* DeadZone: '<S121>/Dead Zone' */
  if (rtb_stick_throttle_raw > FMS_PARAM.StickDeadZone) {
    rtb_Product_idx_1 = rtb_stick_throttle_raw - FMS_PARAM.StickDeadZone;
  } else if (rtb_stick_throttle_raw >= -FMS_PARAM.StickDeadZone) {
    rtb_Product_idx_1 = 0.0F;
  } else {
    rtb_Product_idx_1 = rtb_stick_throttle_raw - (-FMS_PARAM.StickDeadZone);
  }

  /* End of DeadZone: '<S121>/Dead Zone' */

  /* Signum: '<S121>/Sign' */
  if (rtb_Product_idx_1 < 0.0F) {
    rtb_Product_idx_0 = -1.0F;
  } else if (rtb_Product_idx_1 > 0.0F) {
    rtb_Product_idx_0 = 1.0F;
  } else {
    rtb_Product_idx_0 = rtb_Product_idx_1;
  }

  /* End of Signum: '<S121>/Sign' */

  /* Sum: '<S121>/Add' incorporates:
   *  Constant: '<S121>/Constant'
   *  Product: '<S121>/Multiply'
   */
  rtb_Product_idx_2 = rtb_Product_idx_0 * FMS_PARAM.StickDeadZone +
    rtb_Product_idx_1;

  /* Saturate: '<S2>/Saturation' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.ls_lr > 1.0F) {
    rtb_stick_yaw_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.ls_lr < -1.0F) {
    rtb_stick_yaw_raw = -1.0F;
  } else {
    rtb_stick_yaw_raw = FMS_U.Pilot_Cmd.ls_lr;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* DeadZone: '<S120>/Dead Zone' */
  if (rtb_stick_yaw_raw > FMS_PARAM.StickDeadZone) {
    rtb_Product_idx_1 = rtb_stick_yaw_raw - FMS_PARAM.StickDeadZone;
  } else if (rtb_stick_yaw_raw >= -FMS_PARAM.StickDeadZone) {
    rtb_Product_idx_1 = 0.0F;
  } else {
    rtb_Product_idx_1 = rtb_stick_yaw_raw - (-FMS_PARAM.StickDeadZone);
  }

  /* End of DeadZone: '<S120>/Dead Zone' */

  /* Signum: '<S120>/Sign' */
  if (rtb_Product_idx_1 < 0.0F) {
    rtb_Product_idx_0 = -1.0F;
  } else if (rtb_Product_idx_1 > 0.0F) {
    rtb_Product_idx_0 = 1.0F;
  } else {
    rtb_Product_idx_0 = rtb_Product_idx_1;
  }

  /* End of Signum: '<S120>/Sign' */

  /* Sum: '<S120>/Add' incorporates:
   *  Constant: '<S120>/Constant'
   *  Product: '<S120>/Multiply'
   */
  rtb_Product_idx_0 = rtb_Product_idx_0 * FMS_PARAM.StickDeadZone +
    rtb_Product_idx_1;

  /* Trigonometry: '<S125>/TrigoFcn1' incorporates:
   *  Inport: '<Root>/INS_Output'
   */
  rtb_Product_idx_1 = arm_cos_f32(FMS_U.INS_Output.psi);

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentateIn1' */
  rtb_M_z[0] = rtb_Product_idx_1;

  /* Trigonometry: '<S125>/TrigoFcn' incorporates:
   *  Inport: '<Root>/INS_Output'
   */
  rtb_TrigoFcn = arm_sin_f32(FMS_U.INS_Output.psi);

  /* Gain: '<S125>/Gain' */
  rtb_M_z[1] = -rtb_TrigoFcn;

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentateIn3' incorporates:
   *  Constant: '<S125>/Constant1'
   */
  rtb_M_z[2] = 0.0F;

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentate2In1' */
  rtb_M_z[3] = rtb_TrigoFcn;

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentate2In2' */
  rtb_M_z[4] = rtb_Product_idx_1;

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentate2In3' incorporates:
   *  Constant: '<S125>/Constant1'
   */
  rtb_M_z[5] = 0.0F;

  /* SignalConversion: '<S125>/ConcatBufferAtVecConcentate1In3' */
  rtb_M_z[6] = FMS_ConstB.VecConcentate3[0];
  rtb_M_z[7] = FMS_ConstB.VecConcentate3[1];
  rtb_M_z[8] = FMS_ConstB.VecConcentate3[2];

  /* SwitchCase: '<S1>/Switch Case' */
  rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem;
  switch ((int32_T)FMS_B.control_mode) {
   case 2:
    FMS_DW.SwitchCase_ActiveSubsystem = 0;
    break;

   case 3:
    FMS_DW.SwitchCase_ActiveSubsystem = 1;
    break;

   case 4:
    FMS_DW.SwitchCase_ActiveSubsystem = 2;
    break;

   case 5:
    FMS_DW.SwitchCase_ActiveSubsystem = 3;
    break;

   default:
    FMS_DW.SwitchCase_ActiveSubsystem = 4;
    break;
  }

  switch (FMS_DW.SwitchCase_ActiveSubsystem) {
   case 0:
    if (FMS_DW.SwitchCase_ActiveSubsystem != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Delay: '<S111>/Delay'
       *  Delay: '<S112>/Delay'
       *  Delay: '<S91>/Delay'
       *  UnitDelay: '<S109>/Delay Input1'
       *  UnitDelay: '<S110>/Delay Input1'
       *  UnitDelay: '<S82>/Delay Input1'
       *  UnitDelay: '<S83>/Delay Input1'
       *
       * Block description for '<S109>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S110>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S82>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S83>/Delay Input1':
       *
       *  Store in Global RAM
       */
      FMS_DW.DelayInput1_DSTATE_iu = false;
      FMS_DW.icLoad_f = 1U;
      FMS_DW.DelayInput1_DSTATE_pv = false;
      FMS_DW.icLoad_a = 1U;
      FMS_DW.DelayInput1_DSTATE_n = false;
      FMS_DW.DelayInput1_DSTATE_c = false;
      FMS_DW.icLoad_o = 1U;

      /* End of InitializeConditions for SubSystem: '<S1>/Position_Mode' */

      /* SystemReset for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S78>/Motion_State'
       *  Chart: '<S95>/XY_Motion_State'
       *  Chart: '<S95>/Z_Motion_State'
       */
      FMS_DW.temporalCounter_i1_b = 0U;
      FMS_DW.is_active_c7_FMS = 0U;
      FMS_DW.is_c7_FMS = FMS_IN_NO_ACTIVE_CHILD_h;
      FMS_Z_Motion_State_Reset(&FMS_DW.sf_Z_Motion_State);
      FMS_Motion_State_Reset(&FMS_DW.sf_Motion_State);

      /* End of SystemReset for SubSystem: '<S1>/Position_Mode' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Logic: '<S98>/Logical Operator' incorporates:
     *  Constant: '<S118>/Constant'
     *  RelationalOperator: '<S118>/Compare'
     */
    rtb_FixPtRelationalOperator = ((rtb_Add_d != 0.0F) || (rtb_Add_m != 0.0F));

    /* Chart: '<S95>/XY_Motion_State' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  Math: '<S97>/Math Function'
     *  Math: '<S97>/Math Function1'
     *  Sqrt: '<S97>/Sqrt'
     *  Sum: '<S97>/Add'
     */
    if (FMS_DW.temporalCounter_i1_b < 1023U) {
      FMS_DW.temporalCounter_i1_b++;
    }

    if (FMS_DW.is_active_c7_FMS == 0U) {
      FMS_DW.is_active_c7_FMS = 1U;
      FMS_DW.is_c7_FMS = FMS_IN_Move_j;
      i = 0;
    } else {
      switch (FMS_DW.is_c7_FMS) {
       case FMS_IN_Brake_hi:
        i = 1;
        if ((sqrtf(FMS_U.INS_Output.vn * FMS_U.INS_Output.vn +
                   FMS_U.INS_Output.ve * FMS_U.INS_Output.ve) <= 0.2) ||
            (FMS_DW.temporalCounter_i1_b >= 625U)) {
          FMS_DW.is_c7_FMS = FMS_IN_Hold_n;
          i = 2;
        } else {
          if (rtb_FixPtRelationalOperator) {
            FMS_DW.is_c7_FMS = FMS_IN_Move_j;
            i = 0;
          }
        }
        break;

       case FMS_IN_Hold_n:
        i = 2;
        if (rtb_FixPtRelationalOperator) {
          FMS_DW.is_c7_FMS = FMS_IN_Move_j;
          i = 0;
        }
        break;

       default:
        i = 0;
        if (!rtb_FixPtRelationalOperator) {
          FMS_DW.is_c7_FMS = FMS_IN_Brake_hi;
          FMS_DW.temporalCounter_i1_b = 0U;
          i = 1;
        }
        break;
      }
    }

    /* End of Chart: '<S95>/XY_Motion_State' */

    /* RelationalOperator: '<S107>/Compare' incorporates:
     *  Constant: '<S107>/Constant'
     */
    rtb_FixPtRelationalOperator = (i == 2);

    /* Delay: '<S111>/Delay' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  SignalConversion: '<S111>/TmpSignal ConversionAtDelayInport2'
     */
    if (FMS_DW.icLoad_f != 0) {
      FMS_DW.Delay_DSTATE_pp[0] = FMS_U.INS_Output.x_R;
      FMS_DW.Delay_DSTATE_pp[1] = FMS_U.INS_Output.y_R;
    }

    /* End of Delay: '<S111>/Delay' */

    /* Switch: '<S111>/Switch1' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S109>/FixPt Relational Operator'
     *  SignalConversion: '<S111>/TmpSignal ConversionAtDelayInport2'
     *  UnitDelay: '<S109>/Delay Input1'
     *
     * Block description for '<S109>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if ((int32_T)rtb_FixPtRelationalOperator > (int32_T)
        FMS_DW.DelayInput1_DSTATE_iu) {
      FMS_DW.Delay_DSTATE_pp[0] = FMS_U.INS_Output.x_R;
      FMS_DW.Delay_DSTATE_pp[1] = FMS_U.INS_Output.y_R;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Chart: '<S95>/Z_Motion_State' incorporates:
     *  Constant: '<S119>/Constant'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S119>/Compare'
     */
    FMS_Z_Motion_State(rtb_Product_idx_2 != 0.0F, FMS_U.INS_Output.vd,
                       &rtb_state_a, &FMS_DW.sf_Z_Motion_State);

    /* RelationalOperator: '<S108>/Compare' incorporates:
     *  Constant: '<S108>/Constant'
     */
    rtb_Compare_nq = (rtb_state_a == 2.0);

    /* Delay: '<S112>/Delay' incorporates:
     *  Gain: '<S106>/Gain'
     *  Inport: '<Root>/INS_Output'
     */
    if (FMS_DW.icLoad_a != 0) {
      FMS_DW.Delay_DSTATE_n = -FMS_U.INS_Output.h_R;
    }

    /* End of Delay: '<S112>/Delay' */

    /* Switch: '<S112>/Switch1' incorporates:
     *  Gain: '<S106>/Gain'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S110>/FixPt Relational Operator'
     *  UnitDelay: '<S110>/Delay Input1'
     *
     * Block description for '<S110>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if ((int32_T)rtb_Compare_nq > (int32_T)FMS_DW.DelayInput1_DSTATE_pv) {
      FMS_DW.Delay_DSTATE_n = -FMS_U.INS_Output.h_R;
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Sum: '<S105>/Sum' incorporates:
     *  Gain: '<S106>/Gain'
     *  Inport: '<Root>/INS_Output'
     */
    rtb_stick_roll_raw = FMS_DW.Delay_DSTATE_pp[0] - FMS_U.INS_Output.x_R;
    rtb_stick_pitch_raw = FMS_DW.Delay_DSTATE_pp[1] - FMS_U.INS_Output.y_R;
    rtb_stick_throttle_raw = FMS_DW.Delay_DSTATE_n - (-FMS_U.INS_Output.h_R);

    /* Product: '<S105>/Multiply' */
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_Multiply_a[i_0] = rtb_M_z[i_0 + 6] * rtb_stick_throttle_raw +
        (rtb_M_z[i_0 + 3] * rtb_stick_pitch_raw + rtb_M_z[i_0] *
         rtb_stick_roll_raw);
    }

    /* End of Product: '<S105>/Multiply' */

    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S113>/Constant'
     *  DeadZone: '<S115>/Dead Zone'
     *  Gain: '<S103>/Gain2'
     *  RelationalOperator: '<S101>/Compare'
     *  RelationalOperator: '<S113>/Compare'
     *  Switch: '<S104>/Switch1'
     */
    if (i == 2) {
      rtb_stick_pitch_raw = FMS_PARAM.XY_P * rtb_Multiply_a[0];
      rtb_stick_roll_raw = FMS_PARAM.XY_P * rtb_Multiply_a[1];
    } else if (i == 1) {
      /* Switch: '<S104>/Switch1' */
      rtb_stick_pitch_raw = 0.0F;
      rtb_stick_roll_raw = 0.0F;
    } else {
      if (rtb_Add_d > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S115>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch1'
         */
        rtb_Add_d -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Add_d >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S115>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch1'
         */
        rtb_Add_d = 0.0F;
      } else {
        /* DeadZone: '<S115>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch1'
         */
        rtb_Add_d -= -FMS_PARAM.StickDeadZone;
      }

      /* Gain: '<S115>/Gain' incorporates:
       *  DeadZone: '<S115>/Dead Zone'
       *  Gain: '<S116>/Gain'
       *  Switch: '<S104>/Switch1'
       */
      rtb_stick_roll_raw = 1.0F / (1.0F - FMS_PARAM.StickDeadZone);

      /* Switch: '<S104>/Switch1' incorporates:
       *  Gain: '<S104>/Gain1'
       *  Gain: '<S115>/Gain'
       */
      rtb_stick_pitch_raw = rtb_stick_roll_raw * rtb_Add_d *
        FMS_PARAM.VEL_XY_LIM;

      /* DeadZone: '<S116>/Dead Zone' incorporates:
       *  Switch: '<S104>/Switch1'
       */
      if (rtb_Add_m > FMS_PARAM.StickDeadZone) {
        rtb_Add_m -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Add_m >= -FMS_PARAM.StickDeadZone) {
        rtb_Add_m = 0.0F;
      } else {
        rtb_Add_m -= -FMS_PARAM.StickDeadZone;
      }

      /* End of DeadZone: '<S116>/Dead Zone' */

      /* Switch: '<S104>/Switch1' incorporates:
       *  Gain: '<S104>/Gain5'
       *  Gain: '<S116>/Gain'
       */
      rtb_stick_roll_raw = rtb_stick_roll_raw * rtb_Add_m * FMS_PARAM.VEL_XY_LIM;
    }

    /* End of Switch: '<S96>/Switch' */

    /* Outport: '<Root>/FMS_Output' incorporates:
     *  Saturate: '<S96>/Saturation'
     */
    FMS_Y.FMS_Output.u_cmd = rtb_stick_pitch_raw;

    /* Saturate: '<S96>/Saturation' */
    if (rtb_stick_pitch_raw > FMS_PARAM.VEL_XY_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.u_cmd = FMS_PARAM.VEL_XY_LIM;
    } else {
      if (rtb_stick_pitch_raw < -FMS_PARAM.VEL_XY_LIM) {
        /* Outport: '<Root>/FMS_Output' */
        FMS_Y.FMS_Output.u_cmd = -FMS_PARAM.VEL_XY_LIM;
      }
    }

    /* Outport: '<Root>/FMS_Output' incorporates:
     *  Saturate: '<S96>/Saturation'
     */
    FMS_Y.FMS_Output.v_cmd = rtb_stick_roll_raw;

    /* Saturate: '<S96>/Saturation' */
    if (rtb_stick_roll_raw > FMS_PARAM.VEL_XY_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.v_cmd = FMS_PARAM.VEL_XY_LIM;
    } else {
      if (rtb_stick_roll_raw < -FMS_PARAM.VEL_XY_LIM) {
        /* Outport: '<Root>/FMS_Output' */
        FMS_Y.FMS_Output.v_cmd = -FMS_PARAM.VEL_XY_LIM;
      }
    }

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S114>/Constant'
     *  DeadZone: '<S117>/Dead Zone'
     *  Gain: '<S103>/Gain4'
     *  RelationalOperator: '<S102>/Compare'
     *  RelationalOperator: '<S114>/Compare'
     *  Switch: '<S104>/Switch2'
     */
    if (rtb_state_a == 2.0) {
      rtb_stick_roll_raw = FMS_PARAM.Z_P * rtb_Multiply_a[2];
    } else if (rtb_state_a == 1.0) {
      /* Switch: '<S104>/Switch2' incorporates:
       *  Constant: '<S104>/Constant1'
       */
      rtb_stick_roll_raw = 0.0F;
    } else {
      if (rtb_Product_idx_2 > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S117>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch2'
         */
        rtb_Product_idx_2 -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Product_idx_2 >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S117>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch2'
         */
        rtb_Product_idx_2 = 0.0F;
      } else {
        /* DeadZone: '<S117>/Dead Zone' incorporates:
         *  Switch: '<S104>/Switch2'
         */
        rtb_Product_idx_2 -= -FMS_PARAM.StickDeadZone;
      }

      /* Switch: '<S104>/Switch2' incorporates:
       *  DeadZone: '<S117>/Dead Zone'
       *  Gain: '<S104>/Gain6'
       *  Gain: '<S117>/Gain'
       */
      rtb_stick_roll_raw = 1.0F / (1.0F - FMS_PARAM.StickDeadZone) *
        rtb_Product_idx_2 * -FMS_PARAM.VEL_Z_LIM;
    }

    /* End of Switch: '<S96>/Switch1' */

    /* Saturate: '<S96>/Saturation1' */
    if (rtb_stick_roll_raw > FMS_PARAM.VEL_Z_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.w_cmd = FMS_PARAM.VEL_Z_LIM;
    } else if (rtb_stick_roll_raw < -FMS_PARAM.VEL_Z_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.w_cmd = -FMS_PARAM.VEL_Z_LIM;
    } else {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.w_cmd = rtb_stick_roll_raw;
    }

    /* End of Saturate: '<S96>/Saturation1' */

    /* Chart: '<S78>/Motion_State' incorporates:
     *  Abs: '<S88>/Abs'
     *  Constant: '<S94>/Constant'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S94>/Compare'
     */
    FMS_Motion_State(rtb_Product_idx_0 != 0.0F, fabsf(FMS_U.INS_Output.r),
                     &rtb_state_a, &FMS_DW.sf_Motion_State);

    /* RelationalOperator: '<S80>/Compare' incorporates:
     *  Constant: '<S80>/Constant'
     */
    rtb_Compare_je = (rtb_state_a == 2.0);

    /* RelationalOperator: '<S81>/Compare' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  Constant: '<S81>/Constant'
     */
    rtb_Compare_ff = (FMS_DW.Delay_DSTATE_pi == 2);

    /* Delay: '<S91>/Delay' incorporates:
     *  Inport: '<Root>/INS_Output'
     */
    if (FMS_DW.icLoad_o != 0) {
      FMS_DW.Delay_DSTATE_c = FMS_U.INS_Output.psi;
    }

    /* End of Delay: '<S91>/Delay' */

    /* Switch: '<S91>/Switch1' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  Logic: '<S78>/Logical Operator'
     *  RelationalOperator: '<S82>/FixPt Relational Operator'
     *  RelationalOperator: '<S83>/FixPt Relational Operator'
     *  UnitDelay: '<S82>/Delay Input1'
     *  UnitDelay: '<S83>/Delay Input1'
     *
     * Block description for '<S82>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S83>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((int32_T)rtb_Compare_ff > (int32_T)FMS_DW.DelayInput1_DSTATE_n) ||
        ((int32_T)rtb_Compare_je > (int32_T)FMS_DW.DelayInput1_DSTATE_c)) {
      FMS_DW.Delay_DSTATE_c = FMS_U.INS_Output.psi;
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S92>/Constant'
     *  DeadZone: '<S93>/Dead Zone'
     *  Gain: '<S84>/Gain2'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S92>/Compare'
     *  Sum: '<S89>/Sum'
     *  Switch: '<S85>/Switch1'
     */
    if (rtb_Compare_je) {
      rtb_stick_roll_raw = (FMS_DW.Delay_DSTATE_c - FMS_U.INS_Output.psi) *
        FMS_PARAM.YAW_P;
    } else if (rtb_state_a == 1.0) {
      /* Switch: '<S85>/Switch1' incorporates:
       *  Constant: '<S85>/Constant'
       */
      rtb_stick_roll_raw = 0.0F;
    } else {
      if (rtb_Product_idx_0 > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S93>/Dead Zone' incorporates:
         *  Switch: '<S85>/Switch1'
         */
        rtb_Product_idx_0 -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Product_idx_0 >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S93>/Dead Zone' incorporates:
         *  Switch: '<S85>/Switch1'
         */
        rtb_Product_idx_0 = 0.0F;
      } else {
        /* DeadZone: '<S93>/Dead Zone' incorporates:
         *  Switch: '<S85>/Switch1'
         */
        rtb_Product_idx_0 -= -FMS_PARAM.StickDeadZone;
      }

      /* Switch: '<S85>/Switch1' incorporates:
       *  DeadZone: '<S93>/Dead Zone'
       *  Gain: '<S85>/Gain1'
       *  Gain: '<S93>/Gain'
       */
      rtb_stick_roll_raw = 1.0F / (1.0F - FMS_PARAM.StickDeadZone) *
        rtb_Product_idx_0 * FMS_PARAM.YAW_RATE_LIM;
    }

    /* End of Switch: '<S78>/Switch' */

    /* Saturate: '<S78>/Saturation1' */
    if (rtb_stick_roll_raw > FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;
    } else if (rtb_stick_roll_raw < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;
    } else {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_stick_roll_raw;
    }

    /* End of Saturate: '<S78>/Saturation1' */

    /* Outport: '<Root>/FMS_Output' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  BusAssignment: '<S8>/Bus Assignment'
     *  Constant: '<S8>/Constant'
     *  DiscreteIntegrator: '<S134>/Discrete-Time Integrator'
     *  SignalConversion: '<S3>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;
    for (i = 0; i < 16; i++) {
      FMS_Y.FMS_Output.actuator_cmd[i] = rtb_Multiply_ox[i];
    }

    FMS_Y.FMS_Output.state = FMS_DW.Delay_DSTATE_pi;
    FMS_Y.FMS_Output.reset = rtb_Compare;
    FMS_Y.FMS_Output.reserved = 0U;
    FMS_Y.FMS_Output.mode = 2U;

    /* Update for UnitDelay: '<S109>/Delay Input1'
     *
     * Block description for '<S109>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_iu = rtb_FixPtRelationalOperator;

    /* Update for Delay: '<S111>/Delay' */
    FMS_DW.icLoad_f = 0U;

    /* Update for UnitDelay: '<S110>/Delay Input1'
     *
     * Block description for '<S110>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_pv = rtb_Compare_nq;

    /* Update for Delay: '<S112>/Delay' */
    FMS_DW.icLoad_a = 0U;

    /* Update for UnitDelay: '<S83>/Delay Input1'
     *
     * Block description for '<S83>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_n = rtb_Compare_ff;

    /* Update for UnitDelay: '<S82>/Delay Input1'
     *
     * Block description for '<S82>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_c = rtb_Compare_je;

    /* Update for Delay: '<S91>/Delay' */
    FMS_DW.icLoad_o = 0U;

    /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    break;

   case 1:
    if (FMS_DW.SwitchCase_ActiveSubsystem != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Delay: '<S32>/Delay'
       *  Delay: '<S49>/Delay'
       *  DiscreteIntegrator: '<S17>/Integrator'
       *  DiscreteIntegrator: '<S17>/Integrator1'
       *  DiscreteIntegrator: '<S18>/Integrator'
       *  DiscreteIntegrator: '<S18>/Integrator1'
       *  DiscreteIntegrator: '<S44>/Integrator'
       *  DiscreteIntegrator: '<S44>/Integrator1'
       *  UnitDelay: '<S23>/Delay Input1'
       *  UnitDelay: '<S24>/Delay Input1'
       *  UnitDelay: '<S48>/Delay Input1'
       *
       * Block description for '<S23>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S24>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S48>/Delay Input1':
       *
       *  Store in Global RAM
       */
      FMS_DW.Integrator1_DSTATE_f = 0.0F;
      FMS_DW.Integrator1_DSTATE_a = 0.0F;
      FMS_DW.Integrator1_DSTATE_p = 0.0F;
      FMS_DW.DelayInput1_DSTATE_j = false;
      FMS_DW.DelayInput1_DSTATE_p = false;
      FMS_DW.icLoad_i = 1U;
      FMS_DW.DelayInput1_DSTATE_a = false;
      FMS_DW.icLoad_d = 1U;
      FMS_DW.Integrator_DSTATE_g = 0.0F;
      FMS_DW.Integrator_DSTATE_b = 0.0F;
      FMS_DW.Integrator_DSTATE_gx = 0.0F;

      /* End of InitializeConditions for SubSystem: '<S1>/Altitude_Hold_Mode' */

      /* SystemReset for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S15>/Motion_State'
       *  Chart: '<S36>/Z_Motion_State'
       */
      FMS_Motion_State_Reset(&FMS_DW.sf_Motion_State_c);
      FMS_Z_Motion_State_Reset(&FMS_DW.sf_Z_Motion_State_l);

      /* End of SystemReset for SubSystem: '<S1>/Altitude_Hold_Mode' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Chart: '<S15>/Motion_State' incorporates:
     *  Abs: '<S29>/Abs'
     *  Constant: '<S35>/Constant'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S35>/Compare'
     */
    FMS_Motion_State(rtb_Product_idx_0 != 0.0F, fabsf(FMS_U.INS_Output.r),
                     &rtb_state_a, &FMS_DW.sf_Motion_State_c);

    /* RelationalOperator: '<S21>/Compare' incorporates:
     *  Constant: '<S21>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_state_a == 2.0);

    /* RelationalOperator: '<S22>/Compare' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  Constant: '<S22>/Constant'
     */
    rtb_Compare_nq = (FMS_DW.Delay_DSTATE_pi == 2);

    /* Delay: '<S32>/Delay' incorporates:
     *  Inport: '<Root>/INS_Output'
     */
    if (FMS_DW.icLoad_i != 0) {
      FMS_DW.Delay_DSTATE_p = FMS_U.INS_Output.psi;
    }

    /* End of Delay: '<S32>/Delay' */

    /* Switch: '<S32>/Switch1' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  Logic: '<S15>/Logical Operator'
     *  RelationalOperator: '<S23>/FixPt Relational Operator'
     *  RelationalOperator: '<S24>/FixPt Relational Operator'
     *  UnitDelay: '<S23>/Delay Input1'
     *  UnitDelay: '<S24>/Delay Input1'
     *
     * Block description for '<S23>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((int32_T)rtb_Compare_nq > (int32_T)FMS_DW.DelayInput1_DSTATE_j) ||
        ((int32_T)rtb_FixPtRelationalOperator > (int32_T)
         FMS_DW.DelayInput1_DSTATE_p)) {
      FMS_DW.Delay_DSTATE_p = FMS_U.INS_Output.psi;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S33>/Constant'
     *  DeadZone: '<S34>/Dead Zone'
     *  Gain: '<S25>/Gain2'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S33>/Compare'
     *  Sum: '<S30>/Sum'
     *  Switch: '<S26>/Switch1'
     */
    if (rtb_FixPtRelationalOperator) {
      rtb_Product_idx_0 = (FMS_DW.Delay_DSTATE_p - FMS_U.INS_Output.psi) *
        FMS_PARAM.YAW_P;
    } else if (rtb_state_a == 1.0) {
      /* Switch: '<S26>/Switch1' incorporates:
       *  Constant: '<S26>/Constant'
       */
      rtb_Product_idx_0 = 0.0F;
    } else {
      if (rtb_Product_idx_0 > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S34>/Dead Zone' incorporates:
         *  Switch: '<S26>/Switch1'
         */
        rtb_Product_idx_0 -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Product_idx_0 >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S34>/Dead Zone' incorporates:
         *  Switch: '<S26>/Switch1'
         */
        rtb_Product_idx_0 = 0.0F;
      } else {
        /* DeadZone: '<S34>/Dead Zone' incorporates:
         *  Switch: '<S26>/Switch1'
         */
        rtb_Product_idx_0 -= -FMS_PARAM.StickDeadZone;
      }

      /* Switch: '<S26>/Switch1' incorporates:
       *  DeadZone: '<S34>/Dead Zone'
       *  Gain: '<S26>/Gain1'
       *  Gain: '<S34>/Gain'
       */
      rtb_Product_idx_0 = 1.0F / (1.0F - FMS_PARAM.StickDeadZone) *
        rtb_Product_idx_0 * FMS_PARAM.YAW_RATE_LIM;
    }

    /* End of Switch: '<S15>/Switch' */

    /* Saturate: '<S15>/Saturation1' */
    if (rtb_Product_idx_0 > FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;
    } else if (rtb_Product_idx_0 < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;
    } else {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_Product_idx_0;
    }

    /* End of Saturate: '<S15>/Saturation1' */

    /* Outport: '<Root>/FMS_Output' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  BusAssignment: '<S5>/Bus Assignment'
     *  Constant: '<S5>/Constant'
     *  DiscreteIntegrator: '<S134>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S17>/Integrator1'
     *  DiscreteIntegrator: '<S18>/Integrator1'
     *  SignalConversion: '<S3>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;
    for (i = 0; i < 16; i++) {
      FMS_Y.FMS_Output.actuator_cmd[i] = rtb_Multiply_ox[i];
    }

    FMS_Y.FMS_Output.state = FMS_DW.Delay_DSTATE_pi;
    FMS_Y.FMS_Output.reset = rtb_Compare;
    FMS_Y.FMS_Output.reserved = 0U;
    FMS_Y.FMS_Output.mode = 3U;
    FMS_Y.FMS_Output.phi_cmd = FMS_DW.Integrator1_DSTATE_f;
    FMS_Y.FMS_Output.theta_cmd = FMS_DW.Integrator1_DSTATE_a;

    /* Saturate: '<S16>/Saturation' */
    if (FMS_DW.Integrator1_DSTATE_p > FMS_PARAM.VEL_Z_LIM) {
      /* Outport: '<Root>/FMS_Output' incorporates:
       *  BusAssignment: '<S5>/Bus Assignment'
       */
      FMS_Y.FMS_Output.w_cmd = FMS_PARAM.VEL_Z_LIM;
    } else if (FMS_DW.Integrator1_DSTATE_p < -FMS_PARAM.VEL_Z_LIM) {
      /* Outport: '<Root>/FMS_Output' incorporates:
       *  BusAssignment: '<S5>/Bus Assignment'
       */
      FMS_Y.FMS_Output.w_cmd = -FMS_PARAM.VEL_Z_LIM;
    } else {
      /* Outport: '<Root>/FMS_Output' incorporates:
       *  BusAssignment: '<S5>/Bus Assignment'
       */
      FMS_Y.FMS_Output.w_cmd = FMS_DW.Integrator1_DSTATE_p;
    }

    /* End of Saturate: '<S16>/Saturation' */

    /* Chart: '<S36>/Z_Motion_State' incorporates:
     *  Constant: '<S53>/Constant'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S53>/Compare'
     */
    FMS_Z_Motion_State(rtb_Product_idx_2 != 0.0F, FMS_U.INS_Output.vd,
                       &rtb_state_a, &FMS_DW.sf_Z_Motion_State_l);

    /* RelationalOperator: '<S47>/Compare' incorporates:
     *  Constant: '<S47>/Constant'
     */
    rtb_Compare_je = (rtb_state_a == 2.0);

    /* Delay: '<S49>/Delay' incorporates:
     *  Gain: '<S46>/Gain'
     *  Inport: '<Root>/INS_Output'
     */
    if (FMS_DW.icLoad_d != 0) {
      FMS_DW.Delay_DSTATE_e = -FMS_U.INS_Output.h_R;
    }

    /* End of Delay: '<S49>/Delay' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Gain: '<S46>/Gain'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S48>/FixPt Relational Operator'
     *  UnitDelay: '<S48>/Delay Input1'
     *
     * Block description for '<S48>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if ((int32_T)rtb_Compare_je > (int32_T)FMS_DW.DelayInput1_DSTATE_a) {
      FMS_DW.Delay_DSTATE_e = -FMS_U.INS_Output.h_R;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S41>/Constant'
     *  Constant: '<S50>/Constant'
     *  DeadZone: '<S51>/Dead Zone'
     *  Gain: '<S42>/Gain4'
     *  Gain: '<S46>/Gain'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S50>/Compare'
     *  Sum: '<S45>/Sum'
     *  Switch: '<S43>/Switch2'
     */
    if (rtb_state_a == 2.0) {
      rtb_Product_idx_0 = (FMS_DW.Delay_DSTATE_e - (-FMS_U.INS_Output.h_R)) *
        FMS_PARAM.Z_P;
    } else if (rtb_state_a == 1.0) {
      /* Switch: '<S43>/Switch2' incorporates:
       *  Constant: '<S43>/Constant1'
       */
      rtb_Product_idx_0 = 0.0F;
    } else {
      if (rtb_Product_idx_2 > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S51>/Dead Zone' incorporates:
         *  Switch: '<S43>/Switch2'
         */
        rtb_Product_idx_2 -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Product_idx_2 >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S51>/Dead Zone' incorporates:
         *  Switch: '<S43>/Switch2'
         */
        rtb_Product_idx_2 = 0.0F;
      } else {
        /* DeadZone: '<S51>/Dead Zone' incorporates:
         *  Switch: '<S43>/Switch2'
         */
        rtb_Product_idx_2 -= -FMS_PARAM.StickDeadZone;
      }

      /* Switch: '<S43>/Switch2' incorporates:
       *  DeadZone: '<S51>/Dead Zone'
       *  Gain: '<S43>/Gain6'
       *  Gain: '<S51>/Gain'
       */
      rtb_Product_idx_0 = 1.0F / (1.0F - FMS_PARAM.StickDeadZone) *
        rtb_Product_idx_2 * -FMS_PARAM.VEL_Z_LIM;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Sum: '<S44>/Subtract' incorporates:
     *  DiscreteIntegrator: '<S44>/Integrator1'
     */
    rtb_Add_m = FMS_DW.Integrator1_DSTATE_p - rtb_Product_idx_0;

    /* Product: '<S52>/Multiply1' incorporates:
     *  Constant: '<S52>/const1'
     *  DiscreteIntegrator: '<S44>/Integrator'
     */
    rtb_Product_idx_0 = FMS_DW.Integrator_DSTATE_g * 0.05F;

    /* Sum: '<S52>/Add' */
    rtb_Product_idx_2 = rtb_Add_m + rtb_Product_idx_0;

    /* Signum: '<S52>/Sign' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_stick_throttle_raw = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    } else {
      rtb_stick_throttle_raw = rtb_Product_idx_2;
    }

    /* End of Signum: '<S52>/Sign' */

    /* Sum: '<S52>/Add2' incorporates:
     *  Abs: '<S52>/Abs'
     *  Gain: '<S52>/Gain'
     *  Gain: '<S52>/Gain1'
     *  Product: '<S52>/Multiply2'
     *  Product: '<S52>/Multiply3'
     *  Sqrt: '<S52>/Sqrt'
     *  Sum: '<S52>/Add1'
     *  Sum: '<S52>/Subtract'
     */
    rtb_stick_yaw_raw = (sqrtf((8.0F * fabsf(rtb_Product_idx_2) + FMS_ConstB.d_a)
      * FMS_ConstB.d_a) - FMS_ConstB.d_a) * 0.5F * rtb_stick_throttle_raw +
      rtb_Product_idx_0;

    /* Sum: '<S52>/Add4' */
    rtb_Add_d = (rtb_Product_idx_2 - rtb_stick_yaw_raw) + rtb_Product_idx_0;

    /* Sum: '<S52>/Add3' */
    rtb_Add_m = rtb_Product_idx_2 + FMS_ConstB.d_a;

    /* Sum: '<S52>/Subtract1' */
    rtb_Product_idx_2 -= FMS_ConstB.d_a;

    /* Signum: '<S52>/Sign1' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S52>/Sign1' */

    /* Signum: '<S52>/Sign2' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_Product_idx_2 = -1.0F;
    } else {
      if (rtb_Product_idx_2 > 0.0F) {
        rtb_Product_idx_2 = 1.0F;
      }
    }

    /* End of Signum: '<S52>/Sign2' */

    /* Sum: '<S52>/Add5' incorporates:
     *  Gain: '<S52>/Gain2'
     *  Product: '<S52>/Multiply4'
     *  Sum: '<S52>/Subtract2'
     */
    rtb_stick_yaw_raw += (rtb_Add_m - rtb_Product_idx_2) * 0.5F * rtb_Add_d;

    /* Sum: '<S52>/Add6' */
    rtb_Add_m = rtb_stick_yaw_raw + FMS_ConstB.d_a;

    /* Sum: '<S52>/Subtract3' */
    rtb_Add_d = rtb_stick_yaw_raw - FMS_ConstB.d_a;

    /* Product: '<S52>/Divide' */
    rtb_TrigoFcn = rtb_stick_yaw_raw / FMS_ConstB.d_a;

    /* Signum: '<S52>/Sign5' incorporates:
     *  Signum: '<S52>/Sign6'
     */
    if (rtb_stick_yaw_raw < 0.0F) {
      rtb_Product_idx_1 = -1.0F;
      rtb_stick_throttle_raw = -1.0F;
    } else if (rtb_stick_yaw_raw > 0.0F) {
      rtb_Product_idx_1 = 1.0F;
      rtb_stick_throttle_raw = 1.0F;
    } else {
      rtb_Product_idx_1 = rtb_stick_yaw_raw;
      rtb_stick_throttle_raw = rtb_stick_yaw_raw;
    }

    /* End of Signum: '<S52>/Sign5' */

    /* Product: '<S20>/Multiply1' incorporates:
     *  Constant: '<S20>/const1'
     *  DiscreteIntegrator: '<S18>/Integrator'
     */
    rtb_stick_yaw_raw = FMS_DW.Integrator_DSTATE_b * 0.04F;

    /* Sum: '<S20>/Add' incorporates:
     *  DiscreteIntegrator: '<S18>/Integrator1'
     *  Gain: '<S14>/Gain1'
     *  Sum: '<S18>/Subtract'
     */
    rtb_Product_idx_0 = (FMS_DW.Integrator1_DSTATE_a - -FMS_PARAM.ROLL_PITCH_LIM
                         * rtb_stick_pitch_raw) + rtb_stick_yaw_raw;

    /* Signum: '<S20>/Sign' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_Product_idx_2 = -1.0F;
    } else if (rtb_Product_idx_0 > 0.0F) {
      rtb_Product_idx_2 = 1.0F;
    } else {
      rtb_Product_idx_2 = rtb_Product_idx_0;
    }

    /* End of Signum: '<S20>/Sign' */

    /* Sum: '<S20>/Add2' incorporates:
     *  Abs: '<S20>/Abs'
     *  Gain: '<S20>/Gain'
     *  Gain: '<S20>/Gain1'
     *  Product: '<S20>/Multiply2'
     *  Product: '<S20>/Multiply3'
     *  Sqrt: '<S20>/Sqrt'
     *  Sum: '<S20>/Add1'
     *  Sum: '<S20>/Subtract'
     */
    rtb_Product_idx_2 = (sqrtf((8.0F * fabsf(rtb_Product_idx_0) +
      FMS_ConstB.d_av) * FMS_ConstB.d_av) - FMS_ConstB.d_av) * 0.5F *
      rtb_Product_idx_2 + rtb_stick_yaw_raw;

    /* Sum: '<S20>/Add4' */
    rtb_stick_yaw_raw += rtb_Product_idx_0 - rtb_Product_idx_2;

    /* Sum: '<S20>/Add3' */
    rtb_stick_pitch_raw = rtb_Product_idx_0 + FMS_ConstB.d_av;

    /* Sum: '<S20>/Subtract1' */
    rtb_Product_idx_0 -= FMS_ConstB.d_av;

    /* Signum: '<S20>/Sign1' */
    if (rtb_stick_pitch_raw < 0.0F) {
      rtb_stick_pitch_raw = -1.0F;
    } else {
      if (rtb_stick_pitch_raw > 0.0F) {
        rtb_stick_pitch_raw = 1.0F;
      }
    }

    /* End of Signum: '<S20>/Sign1' */

    /* Signum: '<S20>/Sign2' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_Product_idx_0 = -1.0F;
    } else {
      if (rtb_Product_idx_0 > 0.0F) {
        rtb_Product_idx_0 = 1.0F;
      }
    }

    /* End of Signum: '<S20>/Sign2' */

    /* Sum: '<S20>/Add5' incorporates:
     *  Gain: '<S20>/Gain2'
     *  Product: '<S20>/Multiply4'
     *  Sum: '<S20>/Subtract2'
     */
    rtb_Product_idx_2 += (rtb_stick_pitch_raw - rtb_Product_idx_0) * 0.5F *
      rtb_stick_yaw_raw;

    /* Sum: '<S20>/Add6' */
    rtb_stick_pitch_raw = rtb_Product_idx_2 + FMS_ConstB.d_av;

    /* Sum: '<S20>/Subtract3' */
    u = rtb_Product_idx_2 - FMS_ConstB.d_av;

    /* Product: '<S20>/Divide' */
    rtb_Divide_e2 = rtb_Product_idx_2 / FMS_ConstB.d_av;

    /* Signum: '<S20>/Sign5' incorporates:
     *  Signum: '<S20>/Sign6'
     */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_Sign5_g = -1.0F;
      y = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_Sign5_g = 1.0F;
      y = 1.0F;
    } else {
      rtb_Sign5_g = rtb_Product_idx_2;
      y = rtb_Product_idx_2;
    }

    /* End of Signum: '<S20>/Sign5' */

    /* Product: '<S19>/Multiply1' incorporates:
     *  Constant: '<S19>/const1'
     *  DiscreteIntegrator: '<S17>/Integrator'
     */
    rtb_stick_yaw_raw = FMS_DW.Integrator_DSTATE_gx * 0.04F;

    /* Sum: '<S19>/Add' incorporates:
     *  DiscreteIntegrator: '<S17>/Integrator1'
     *  Gain: '<S14>/Gain'
     *  Sum: '<S17>/Subtract'
     */
    rtb_Product_idx_0 = (FMS_DW.Integrator1_DSTATE_f - FMS_PARAM.ROLL_PITCH_LIM *
                         rtb_stick_roll_raw) + rtb_stick_yaw_raw;

    /* Signum: '<S19>/Sign' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_Product_idx_2 = -1.0F;
    } else if (rtb_Product_idx_0 > 0.0F) {
      rtb_Product_idx_2 = 1.0F;
    } else {
      rtb_Product_idx_2 = rtb_Product_idx_0;
    }

    /* End of Signum: '<S19>/Sign' */

    /* Sum: '<S19>/Add2' incorporates:
     *  Abs: '<S19>/Abs'
     *  Gain: '<S19>/Gain'
     *  Gain: '<S19>/Gain1'
     *  Product: '<S19>/Multiply2'
     *  Product: '<S19>/Multiply3'
     *  Sqrt: '<S19>/Sqrt'
     *  Sum: '<S19>/Add1'
     *  Sum: '<S19>/Subtract'
     */
    rtb_Product_idx_2 = (sqrtf((8.0F * fabsf(rtb_Product_idx_0) + FMS_ConstB.d_f)
      * FMS_ConstB.d_f) - FMS_ConstB.d_f) * 0.5F * rtb_Product_idx_2 +
      rtb_stick_yaw_raw;

    /* Sum: '<S19>/Add4' */
    rtb_stick_roll_raw = (rtb_Product_idx_0 - rtb_Product_idx_2) +
      rtb_stick_yaw_raw;

    /* Sum: '<S19>/Add3' */
    rtb_stick_yaw_raw = rtb_Product_idx_0 + FMS_ConstB.d_f;

    /* Sum: '<S19>/Subtract1' */
    rtb_Product_idx_0 -= FMS_ConstB.d_f;

    /* Signum: '<S19>/Sign1' */
    if (rtb_stick_yaw_raw < 0.0F) {
      rtb_stick_yaw_raw = -1.0F;
    } else {
      if (rtb_stick_yaw_raw > 0.0F) {
        rtb_stick_yaw_raw = 1.0F;
      }
    }

    /* End of Signum: '<S19>/Sign1' */

    /* Signum: '<S19>/Sign2' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_Product_idx_0 = -1.0F;
    } else {
      if (rtb_Product_idx_0 > 0.0F) {
        rtb_Product_idx_0 = 1.0F;
      }
    }

    /* End of Signum: '<S19>/Sign2' */

    /* Sum: '<S19>/Add5' incorporates:
     *  Gain: '<S19>/Gain2'
     *  Product: '<S19>/Multiply4'
     *  Sum: '<S19>/Subtract2'
     */
    rtb_Product_idx_2 += (rtb_stick_yaw_raw - rtb_Product_idx_0) * 0.5F *
      rtb_stick_roll_raw;

    /* Update for DiscreteIntegrator: '<S17>/Integrator1' incorporates:
     *  DiscreteIntegrator: '<S17>/Integrator'
     */
    FMS_DW.Integrator1_DSTATE_f += 0.004F * FMS_DW.Integrator_DSTATE_gx;

    /* Update for DiscreteIntegrator: '<S18>/Integrator1' incorporates:
     *  DiscreteIntegrator: '<S18>/Integrator'
     */
    FMS_DW.Integrator1_DSTATE_a += 0.004F * FMS_DW.Integrator_DSTATE_b;

    /* Update for DiscreteIntegrator: '<S44>/Integrator1' incorporates:
     *  DiscreteIntegrator: '<S44>/Integrator'
     */
    FMS_DW.Integrator1_DSTATE_p += 0.004F * FMS_DW.Integrator_DSTATE_g;

    /* Update for UnitDelay: '<S24>/Delay Input1'
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_j = rtb_Compare_nq;

    /* Update for UnitDelay: '<S23>/Delay Input1'
     *
     * Block description for '<S23>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_p = rtb_FixPtRelationalOperator;

    /* Update for Delay: '<S32>/Delay' */
    FMS_DW.icLoad_i = 0U;

    /* Update for UnitDelay: '<S48>/Delay Input1'
     *
     * Block description for '<S48>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_a = rtb_Compare_je;

    /* Update for Delay: '<S49>/Delay' */
    FMS_DW.icLoad_d = 0U;

    /* Signum: '<S52>/Sign3' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S52>/Sign3' */

    /* Signum: '<S52>/Sign4' */
    if (rtb_Add_d < 0.0F) {
      rtb_Add_d = -1.0F;
    } else {
      if (rtb_Add_d > 0.0F) {
        rtb_Add_d = 1.0F;
      }
    }

    /* End of Signum: '<S52>/Sign4' */

    /* Update for DiscreteIntegrator: '<S44>/Integrator' incorporates:
     *  Constant: '<S52>/const'
     *  Gain: '<S52>/Gain3'
     *  Product: '<S52>/Multiply5'
     *  Product: '<S52>/Multiply6'
     *  Sum: '<S52>/Subtract4'
     *  Sum: '<S52>/Subtract5'
     *  Sum: '<S52>/Subtract6'
     */
    FMS_DW.Integrator_DSTATE_g += ((rtb_TrigoFcn - rtb_Product_idx_1) *
      FMS_ConstB.Gain4_m * ((rtb_Add_m - rtb_Add_d) * 0.5F) -
      rtb_stick_throttle_raw * 39.224F) * 0.004F;

    /* Signum: '<S20>/Sign3' */
    if (rtb_stick_pitch_raw < 0.0F) {
      rtb_stick_pitch_raw = -1.0F;
    } else {
      if (rtb_stick_pitch_raw > 0.0F) {
        rtb_stick_pitch_raw = 1.0F;
      }
    }

    /* End of Signum: '<S20>/Sign3' */

    /* Signum: '<S20>/Sign4' */
    if (u < 0.0F) {
      u = -1.0F;
    } else {
      if (u > 0.0F) {
        u = 1.0F;
      }
    }

    /* End of Signum: '<S20>/Sign4' */

    /* Update for DiscreteIntegrator: '<S18>/Integrator' incorporates:
     *  Constant: '<S20>/const'
     *  Gain: '<S20>/Gain3'
     *  Product: '<S20>/Multiply5'
     *  Product: '<S20>/Multiply6'
     *  Sum: '<S20>/Subtract4'
     *  Sum: '<S20>/Subtract5'
     *  Sum: '<S20>/Subtract6'
     */
    FMS_DW.Integrator_DSTATE_b += ((rtb_Divide_e2 - rtb_Sign5_g) *
      FMS_ConstB.Gain4_a * ((rtb_stick_pitch_raw - u) * 0.5F) - y * 12.566371F) *
      0.004F;

    /* Sum: '<S19>/Subtract3' */
    rtb_Add_m = rtb_Product_idx_2 - FMS_ConstB.d_f;

    /* Sum: '<S19>/Add6' */
    rtb_Add_d = rtb_Product_idx_2 + FMS_ConstB.d_f;

    /* Signum: '<S19>/Sign5' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_stick_throttle_raw = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    } else {
      rtb_stick_throttle_raw = rtb_Product_idx_2;
    }

    /* End of Signum: '<S19>/Sign5' */

    /* Signum: '<S19>/Sign3' */
    if (rtb_Add_d < 0.0F) {
      rtb_Add_d = -1.0F;
    } else {
      if (rtb_Add_d > 0.0F) {
        rtb_Add_d = 1.0F;
      }
    }

    /* End of Signum: '<S19>/Sign3' */

    /* Signum: '<S19>/Sign4' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S19>/Sign4' */

    /* Signum: '<S19>/Sign6' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_stick_roll_raw = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_stick_roll_raw = 1.0F;
    } else {
      rtb_stick_roll_raw = rtb_Product_idx_2;
    }

    /* End of Signum: '<S19>/Sign6' */

    /* Update for DiscreteIntegrator: '<S17>/Integrator' incorporates:
     *  Constant: '<S19>/const'
     *  Gain: '<S19>/Gain3'
     *  Product: '<S19>/Divide'
     *  Product: '<S19>/Multiply5'
     *  Product: '<S19>/Multiply6'
     *  Sum: '<S19>/Subtract4'
     *  Sum: '<S19>/Subtract5'
     *  Sum: '<S19>/Subtract6'
     */
    FMS_DW.Integrator_DSTATE_gx += ((rtb_Product_idx_2 / FMS_ConstB.d_f -
      rtb_stick_throttle_raw) * FMS_ConstB.Gain4_e * ((rtb_Add_d - rtb_Add_m) *
      0.5F) - rtb_stick_roll_raw * 12.566371F) * 0.004F;

    /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    break;

   case 2:
    if (FMS_DW.SwitchCase_ActiveSubsystem != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Manual_Mode' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Delay: '<S73>/Delay'
       *  DiscreteIntegrator: '<S58>/Integrator'
       *  DiscreteIntegrator: '<S58>/Integrator1'
       *  DiscreteIntegrator: '<S59>/Integrator'
       *  DiscreteIntegrator: '<S59>/Integrator1'
       *  UnitDelay: '<S64>/Delay Input1'
       *  UnitDelay: '<S65>/Delay Input1'
       *
       * Block description for '<S64>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S65>/Delay Input1':
       *
       *  Store in Global RAM
       */
      FMS_DW.Integrator1_DSTATE = 0.0F;
      FMS_DW.Integrator1_DSTATE_n = 0.0F;
      FMS_DW.DelayInput1_DSTATE_l = false;
      FMS_DW.DelayInput1_DSTATE_i = false;
      FMS_DW.icLoad = 1U;
      FMS_DW.Integrator_DSTATE = 0.0F;
      FMS_DW.Integrator_DSTATE_d = 0.0F;

      /* End of InitializeConditions for SubSystem: '<S1>/Manual_Mode' */

      /* SystemReset for IfAction SubSystem: '<S1>/Manual_Mode' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S56>/Motion_State'
       */
      FMS_Motion_State_Reset(&FMS_DW.sf_Motion_State_j);

      /* End of SystemReset for SubSystem: '<S1>/Manual_Mode' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Manual_Mode' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Chart: '<S56>/Motion_State' incorporates:
     *  Abs: '<S70>/Abs'
     *  Constant: '<S76>/Constant'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S76>/Compare'
     */
    FMS_Motion_State(rtb_Product_idx_0 != 0.0F, fabsf(FMS_U.INS_Output.r),
                     &rtb_state_a, &FMS_DW.sf_Motion_State_j);

    /* RelationalOperator: '<S62>/Compare' incorporates:
     *  Constant: '<S62>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_state_a == 2.0);

    /* RelationalOperator: '<S63>/Compare' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  Constant: '<S63>/Constant'
     */
    rtb_Compare_nq = (FMS_DW.Delay_DSTATE_pi == 2);

    /* Delay: '<S73>/Delay' incorporates:
     *  Inport: '<Root>/INS_Output'
     */
    if (FMS_DW.icLoad != 0) {
      FMS_DW.Delay_DSTATE = FMS_U.INS_Output.psi;
    }

    /* End of Delay: '<S73>/Delay' */

    /* Switch: '<S73>/Switch1' incorporates:
     *  Inport: '<Root>/INS_Output'
     *  Logic: '<S56>/Logical Operator'
     *  RelationalOperator: '<S64>/FixPt Relational Operator'
     *  RelationalOperator: '<S65>/FixPt Relational Operator'
     *  UnitDelay: '<S64>/Delay Input1'
     *  UnitDelay: '<S65>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((int32_T)rtb_Compare_nq > (int32_T)FMS_DW.DelayInput1_DSTATE_l) ||
        ((int32_T)rtb_FixPtRelationalOperator > (int32_T)
         FMS_DW.DelayInput1_DSTATE_i)) {
      FMS_DW.Delay_DSTATE = FMS_U.INS_Output.psi;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S74>/Constant'
     *  DeadZone: '<S75>/Dead Zone'
     *  Gain: '<S66>/Gain2'
     *  Inport: '<Root>/INS_Output'
     *  RelationalOperator: '<S74>/Compare'
     *  Sum: '<S71>/Sum'
     *  Switch: '<S67>/Switch1'
     */
    if (rtb_FixPtRelationalOperator) {
      rtb_Product_idx_0 = (FMS_DW.Delay_DSTATE - FMS_U.INS_Output.psi) *
        FMS_PARAM.YAW_P;
    } else if (rtb_state_a == 1.0) {
      /* Switch: '<S67>/Switch1' incorporates:
       *  Constant: '<S67>/Constant'
       */
      rtb_Product_idx_0 = 0.0F;
    } else {
      if (rtb_Product_idx_0 > FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S75>/Dead Zone' incorporates:
         *  Switch: '<S67>/Switch1'
         */
        rtb_Product_idx_0 -= FMS_PARAM.StickDeadZone;
      } else if (rtb_Product_idx_0 >= -FMS_PARAM.StickDeadZone) {
        /* DeadZone: '<S75>/Dead Zone' incorporates:
         *  Switch: '<S67>/Switch1'
         */
        rtb_Product_idx_0 = 0.0F;
      } else {
        /* DeadZone: '<S75>/Dead Zone' incorporates:
         *  Switch: '<S67>/Switch1'
         */
        rtb_Product_idx_0 -= -FMS_PARAM.StickDeadZone;
      }

      /* Switch: '<S67>/Switch1' incorporates:
       *  DeadZone: '<S75>/Dead Zone'
       *  Gain: '<S67>/Gain1'
       *  Gain: '<S75>/Gain'
       */
      rtb_Product_idx_0 = 1.0F / (1.0F - FMS_PARAM.StickDeadZone) *
        rtb_Product_idx_0 * FMS_PARAM.YAW_RATE_LIM;
    }

    /* End of Switch: '<S56>/Switch' */

    /* Saturate: '<S56>/Saturation1' */
    if (rtb_Product_idx_0 > FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;
    } else if (rtb_Product_idx_0 < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;
    } else {
      /* Outport: '<Root>/FMS_Output' */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_Product_idx_0;
    }

    /* End of Saturate: '<S56>/Saturation1' */

    /* Outport: '<Root>/FMS_Output' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  BusAssignment: '<S6>/Bus Assignment'
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     *  Constant: '<S6>/Constant'
     *  DiscreteIntegrator: '<S134>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S58>/Integrator1'
     *  DiscreteIntegrator: '<S59>/Integrator1'
     *  Gain: '<S57>/Gain'
     *  SignalConversion: '<S3>/TmpHiddenBufferAtBus AssignmentInport1'
     *  Sum: '<S57>/Add'
     *  Sum: '<S57>/Sum'
     */
    FMS_Y.FMS_Output.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    for (i = 0; i < 16; i++) {
      FMS_Y.FMS_Output.actuator_cmd[i] = rtb_Multiply_ox[i];
    }

    FMS_Y.FMS_Output.state = FMS_DW.Delay_DSTATE_pi;
    FMS_Y.FMS_Output.reset = rtb_Compare;
    FMS_Y.FMS_Output.reserved = 0U;
    FMS_Y.FMS_Output.mode = 4U;
    FMS_Y.FMS_Output.throttle_cmd = (uint32_T)fmodf(floorf
      ((rtb_stick_throttle_raw + 1.0F) * 500.0F), 4.2949673E+9F) + 1000U;
    FMS_Y.FMS_Output.phi_cmd = FMS_DW.Integrator1_DSTATE;
    FMS_Y.FMS_Output.theta_cmd = FMS_DW.Integrator1_DSTATE_n;

    /* Product: '<S61>/Multiply1' incorporates:
     *  Constant: '<S61>/const1'
     *  DiscreteIntegrator: '<S59>/Integrator'
     */
    rtb_Product_idx_0 = FMS_DW.Integrator_DSTATE * 0.04F;

    /* Sum: '<S61>/Add' incorporates:
     *  DiscreteIntegrator: '<S59>/Integrator1'
     *  Gain: '<S55>/Gain1'
     *  Sum: '<S59>/Subtract'
     */
    rtb_Product_idx_2 = (FMS_DW.Integrator1_DSTATE_n - -FMS_PARAM.ROLL_PITCH_LIM
                         * rtb_stick_pitch_raw) + rtb_Product_idx_0;

    /* Signum: '<S61>/Sign' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_stick_yaw_raw = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_stick_yaw_raw = 1.0F;
    } else {
      rtb_stick_yaw_raw = rtb_Product_idx_2;
    }

    /* End of Signum: '<S61>/Sign' */

    /* Sum: '<S61>/Add2' incorporates:
     *  Abs: '<S61>/Abs'
     *  Gain: '<S61>/Gain'
     *  Gain: '<S61>/Gain1'
     *  Product: '<S61>/Multiply2'
     *  Product: '<S61>/Multiply3'
     *  Sqrt: '<S61>/Sqrt'
     *  Sum: '<S61>/Add1'
     *  Sum: '<S61>/Subtract'
     */
    rtb_stick_pitch_raw = (sqrtf((8.0F * fabsf(rtb_Product_idx_2) + FMS_ConstB.d)
      * FMS_ConstB.d) - FMS_ConstB.d) * 0.5F * rtb_stick_yaw_raw +
      rtb_Product_idx_0;

    /* Sum: '<S61>/Add4' */
    rtb_Add_d = (rtb_Product_idx_2 - rtb_stick_pitch_raw) + rtb_Product_idx_0;

    /* Sum: '<S61>/Add3' */
    rtb_Add_m = rtb_Product_idx_2 + FMS_ConstB.d;

    /* Sum: '<S61>/Subtract1' */
    rtb_Product_idx_2 -= FMS_ConstB.d;

    /* Signum: '<S61>/Sign1' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S61>/Sign1' */

    /* Signum: '<S61>/Sign2' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_Product_idx_2 = -1.0F;
    } else {
      if (rtb_Product_idx_2 > 0.0F) {
        rtb_Product_idx_2 = 1.0F;
      }
    }

    /* End of Signum: '<S61>/Sign2' */

    /* Sum: '<S61>/Add5' incorporates:
     *  Gain: '<S61>/Gain2'
     *  Product: '<S61>/Multiply4'
     *  Sum: '<S61>/Subtract2'
     */
    rtb_stick_pitch_raw += (rtb_Add_m - rtb_Product_idx_2) * 0.5F * rtb_Add_d;

    /* Sum: '<S61>/Add6' */
    rtb_Add_m = rtb_stick_pitch_raw + FMS_ConstB.d;

    /* Sum: '<S61>/Subtract3' */
    rtb_Add_d = rtb_stick_pitch_raw - FMS_ConstB.d;

    /* Product: '<S61>/Divide' */
    rtb_TrigoFcn = rtb_stick_pitch_raw / FMS_ConstB.d;

    /* Signum: '<S61>/Sign5' incorporates:
     *  Signum: '<S61>/Sign6'
     */
    if (rtb_stick_pitch_raw < 0.0F) {
      rtb_Product_idx_1 = -1.0F;
      rtb_stick_throttle_raw = -1.0F;
    } else if (rtb_stick_pitch_raw > 0.0F) {
      rtb_Product_idx_1 = 1.0F;
      rtb_stick_throttle_raw = 1.0F;
    } else {
      rtb_Product_idx_1 = rtb_stick_pitch_raw;
      rtb_stick_throttle_raw = rtb_stick_pitch_raw;
    }

    /* End of Signum: '<S61>/Sign5' */

    /* Product: '<S60>/Multiply1' incorporates:
     *  Constant: '<S60>/const1'
     *  DiscreteIntegrator: '<S58>/Integrator'
     */
    rtb_stick_pitch_raw = FMS_DW.Integrator_DSTATE_d * 0.04F;

    /* Sum: '<S60>/Add' incorporates:
     *  DiscreteIntegrator: '<S58>/Integrator1'
     *  Gain: '<S55>/Gain2'
     *  Sum: '<S58>/Subtract'
     */
    rtb_Product_idx_2 = (FMS_DW.Integrator1_DSTATE - FMS_PARAM.ROLL_PITCH_LIM *
                         rtb_stick_roll_raw) + rtb_stick_pitch_raw;

    /* Signum: '<S60>/Sign' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_stick_yaw_raw = -1.0F;
    } else if (rtb_Product_idx_2 > 0.0F) {
      rtb_stick_yaw_raw = 1.0F;
    } else {
      rtb_stick_yaw_raw = rtb_Product_idx_2;
    }

    /* End of Signum: '<S60>/Sign' */

    /* Sum: '<S60>/Add2' incorporates:
     *  Abs: '<S60>/Abs'
     *  Gain: '<S60>/Gain'
     *  Gain: '<S60>/Gain1'
     *  Product: '<S60>/Multiply2'
     *  Product: '<S60>/Multiply3'
     *  Sqrt: '<S60>/Sqrt'
     *  Sum: '<S60>/Add1'
     *  Sum: '<S60>/Subtract'
     */
    rtb_Product_idx_0 = (sqrtf((8.0F * fabsf(rtb_Product_idx_2) + FMS_ConstB.d_i)
      * FMS_ConstB.d_i) - FMS_ConstB.d_i) * 0.5F * rtb_stick_yaw_raw +
      rtb_stick_pitch_raw;

    /* Sum: '<S60>/Add4' */
    rtb_stick_roll_raw = (rtb_Product_idx_2 - rtb_Product_idx_0) +
      rtb_stick_pitch_raw;

    /* Sum: '<S60>/Add3' */
    rtb_stick_pitch_raw = rtb_Product_idx_2 + FMS_ConstB.d_i;

    /* Sum: '<S60>/Subtract1' */
    rtb_Product_idx_2 -= FMS_ConstB.d_i;

    /* Signum: '<S60>/Sign1' */
    if (rtb_stick_pitch_raw < 0.0F) {
      rtb_stick_pitch_raw = -1.0F;
    } else {
      if (rtb_stick_pitch_raw > 0.0F) {
        rtb_stick_pitch_raw = 1.0F;
      }
    }

    /* End of Signum: '<S60>/Sign1' */

    /* Signum: '<S60>/Sign2' */
    if (rtb_Product_idx_2 < 0.0F) {
      rtb_Product_idx_2 = -1.0F;
    } else {
      if (rtb_Product_idx_2 > 0.0F) {
        rtb_Product_idx_2 = 1.0F;
      }
    }

    /* End of Signum: '<S60>/Sign2' */

    /* Sum: '<S60>/Add5' incorporates:
     *  Gain: '<S60>/Gain2'
     *  Product: '<S60>/Multiply4'
     *  Sum: '<S60>/Subtract2'
     */
    rtb_Product_idx_0 += (rtb_stick_pitch_raw - rtb_Product_idx_2) * 0.5F *
      rtb_stick_roll_raw;

    /* Update for DiscreteIntegrator: '<S58>/Integrator1' incorporates:
     *  DiscreteIntegrator: '<S58>/Integrator'
     */
    FMS_DW.Integrator1_DSTATE += 0.004F * FMS_DW.Integrator_DSTATE_d;

    /* Update for DiscreteIntegrator: '<S59>/Integrator1' incorporates:
     *  DiscreteIntegrator: '<S59>/Integrator'
     */
    FMS_DW.Integrator1_DSTATE_n += 0.004F * FMS_DW.Integrator_DSTATE;

    /* Update for UnitDelay: '<S65>/Delay Input1'
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_l = rtb_Compare_nq;

    /* Update for UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FMS_DW.DelayInput1_DSTATE_i = rtb_FixPtRelationalOperator;

    /* Update for Delay: '<S73>/Delay' */
    FMS_DW.icLoad = 0U;

    /* Signum: '<S61>/Sign3' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S61>/Sign3' */

    /* Signum: '<S61>/Sign4' */
    if (rtb_Add_d < 0.0F) {
      rtb_Add_d = -1.0F;
    } else {
      if (rtb_Add_d > 0.0F) {
        rtb_Add_d = 1.0F;
      }
    }

    /* End of Signum: '<S61>/Sign4' */

    /* Update for DiscreteIntegrator: '<S59>/Integrator' incorporates:
     *  Constant: '<S61>/const'
     *  Gain: '<S61>/Gain3'
     *  Product: '<S61>/Multiply5'
     *  Product: '<S61>/Multiply6'
     *  Sum: '<S61>/Subtract4'
     *  Sum: '<S61>/Subtract5'
     *  Sum: '<S61>/Subtract6'
     */
    FMS_DW.Integrator_DSTATE += ((rtb_TrigoFcn - rtb_Product_idx_1) *
      FMS_ConstB.Gain4 * ((rtb_Add_m - rtb_Add_d) * 0.5F) -
      rtb_stick_throttle_raw * 12.566371F) * 0.004F;

    /* Sum: '<S60>/Subtract3' */
    rtb_Add_m = rtb_Product_idx_0 - FMS_ConstB.d_i;

    /* Sum: '<S60>/Add6' */
    rtb_Add_d = rtb_Product_idx_0 + FMS_ConstB.d_i;

    /* Signum: '<S60>/Sign5' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_stick_roll_raw = -1.0F;
    } else if (rtb_Product_idx_0 > 0.0F) {
      rtb_stick_roll_raw = 1.0F;
    } else {
      rtb_stick_roll_raw = rtb_Product_idx_0;
    }

    /* End of Signum: '<S60>/Sign5' */

    /* Signum: '<S60>/Sign3' */
    if (rtb_Add_d < 0.0F) {
      rtb_Add_d = -1.0F;
    } else {
      if (rtb_Add_d > 0.0F) {
        rtb_Add_d = 1.0F;
      }
    }

    /* End of Signum: '<S60>/Sign3' */

    /* Signum: '<S60>/Sign4' */
    if (rtb_Add_m < 0.0F) {
      rtb_Add_m = -1.0F;
    } else {
      if (rtb_Add_m > 0.0F) {
        rtb_Add_m = 1.0F;
      }
    }

    /* End of Signum: '<S60>/Sign4' */

    /* Signum: '<S60>/Sign6' */
    if (rtb_Product_idx_0 < 0.0F) {
      rtb_stick_pitch_raw = -1.0F;
    } else if (rtb_Product_idx_0 > 0.0F) {
      rtb_stick_pitch_raw = 1.0F;
    } else {
      rtb_stick_pitch_raw = rtb_Product_idx_0;
    }

    /* End of Signum: '<S60>/Sign6' */

    /* Update for DiscreteIntegrator: '<S58>/Integrator' incorporates:
     *  Constant: '<S60>/const'
     *  Gain: '<S60>/Gain3'
     *  Product: '<S60>/Divide'
     *  Product: '<S60>/Multiply5'
     *  Product: '<S60>/Multiply6'
     *  Sum: '<S60>/Subtract4'
     *  Sum: '<S60>/Subtract5'
     *  Sum: '<S60>/Subtract6'
     */
    FMS_DW.Integrator_DSTATE_d += ((rtb_Product_idx_0 / FMS_ConstB.d_i -
      rtb_stick_roll_raw) * FMS_ConstB.Gain4_f * ((rtb_Add_d - rtb_Add_m) * 0.5F)
      - rtb_stick_pitch_raw * 12.566371F) * 0.004F;

    /* End of Outputs for SubSystem: '<S1>/Manual_Mode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S1>/Acro_Mode' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/FMS_Output' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  BusAssignment: '<S4>/Bus Assignment'
     *  Constant: '<S12>/Constant'
     *  Constant: '<S12>/Constant1'
     *  Constant: '<S4>/Constant'
     *  DiscreteIntegrator: '<S134>/Discrete-Time Integrator'
     *  Gain: '<S11>/Gain'
     *  Gain: '<S11>/Gain1'
     *  Gain: '<S11>/Gain2'
     *  Gain: '<S12>/Gain'
     *  SignalConversion: '<S3>/TmpHiddenBufferAtBus AssignmentInport1'
     *  Sum: '<S12>/Add'
     *  Sum: '<S12>/Sum'
     */
    FMS_Y.FMS_Output.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    for (i = 0; i < 16; i++) {
      FMS_Y.FMS_Output.actuator_cmd[i] = rtb_Multiply_ox[i];
    }

    FMS_Y.FMS_Output.state = FMS_DW.Delay_DSTATE_pi;
    FMS_Y.FMS_Output.reset = rtb_Compare;
    FMS_Y.FMS_Output.reserved = 0U;
    FMS_Y.FMS_Output.mode = 5U;
    FMS_Y.FMS_Output.throttle_cmd = (uint32_T)fmodf(floorf
      ((rtb_stick_throttle_raw + 1.0F) * 500.0F), 4.2949673E+9F) + 1000U;
    FMS_Y.FMS_Output.p_cmd = 1.04719758F * rtb_stick_roll_raw;
    FMS_Y.FMS_Output.q_cmd = -1.04719758F * rtb_stick_pitch_raw;
    FMS_Y.FMS_Output.r_cmd = 1.04719758F * rtb_stick_yaw_raw;

    /* End of Outputs for SubSystem: '<S1>/Acro_Mode' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S1>/Unknown_Mode' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Outport: '<Root>/FMS_Output' incorporates:
     *  BusAssignment: '<S3>/Bus Assignment'
     *  BusAssignment: '<S9>/Bus Assignment'
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant2'
     *  DiscreteIntegrator: '<S134>/Discrete-Time Integrator'
     *  SignalConversion: '<S3>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;
    for (i = 0; i < 16; i++) {
      FMS_Y.FMS_Output.actuator_cmd[i] = rtb_Multiply_ox[i];
    }

    FMS_Y.FMS_Output.state = FMS_DW.Delay_DSTATE_pi;
    FMS_Y.FMS_Output.reserved = 0U;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = 1U;

    /* End of Outputs for SubSystem: '<S1>/Unknown_Mode' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Product: '<S137>/Multiply' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  SignalConversion: '<S137>/ConcatBufferAtMatrix Concatenate3In1'
   *  SignalConversion: '<S137>/ConcatBufferAtMatrix Concatenate3In2'
   *  SignalConversion: '<S137>/ConcatBufferAtMatrix Concatenate3In3'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_Multiply_a[i_0] = rtb_MatrixConcatenate3[i_0 + 6] * FMS_U.INS_Output.az
      + (rtb_MatrixConcatenate3[i_0 + 3] * FMS_U.INS_Output.ay +
         rtb_MatrixConcatenate3[i_0] * FMS_U.INS_Output.ax);
  }

  /* End of Product: '<S137>/Multiply' */

  /* Update for DiscreteIntegrator: '<S140>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S140>/Gain2'
   *  Sum: '<S140>/Sum9'
   */
  FMS_DW.DiscreteTimeIntegrator5_DSTATE += (rtb_Multiply_a[2] -
    FMS_DW.DiscreteTimeIntegrator5_DSTATE) * 10.0F * 0.004F;

  /* Update for UnitDelay: '<S128>/Delay Input1'
   *
   * Block description for '<S128>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE = rtb_LogicalOperator1;

  /* Update for DiscreteIntegrator: '<S134>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S134>/Constant'
   */
  FMS_DW.DiscreteTimeIntegrator_DSTATE += FMS_EXPORT.period;
}

/* Model initialize function */
void FMS_init(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FMS_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &FMS_B), 0,
                sizeof(B_FMS_T));

  /* states (dwork) */
  (void) memset((void *)&FMS_DW, 0,
                sizeof(DW_FMS_T));

  /* external inputs */
  (void)memset(&FMS_U, 0, sizeof(ExtU_FMS_T));

  /* external outputs */
  FMS_Y.FMS_Output = FMS_rtZFMS_Out_Bus;

  /* Start for SwitchCase: '<S1>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem = -1;

  /* SystemInitialize for Chart: '<S1>/Mode_Logic' */
  FMS_DW.is_active_c1_FMS = 0U;
  FMS_DW.is_c1_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<S129>/Arm_Event' */
  FMS_DW.is_active_c3_FMS = 0U;
  FMS_DW.is_c3_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<S129>/Disarm_Event' */
  FMS_DW.temporalCounter_i1_a = 0U;
  FMS_DW.is_active_c10_FMS = 0U;
  FMS_DW.is_c10_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<S3>/State_Logic' */
  FMS_DW.temporalCounter_i1 = 0U;
  FMS_DW.is_active_c4_FMS = 0U;
  FMS_DW.is_c4_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for IfAction SubSystem: '<S1>/Position_Mode' */
  /* InitializeConditions for UnitDelay: '<S109>/Delay Input1'
   *
   * Block description for '<S109>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_iu = false;

  /* InitializeConditions for Delay: '<S111>/Delay' */
  FMS_DW.icLoad_f = 1U;

  /* InitializeConditions for UnitDelay: '<S110>/Delay Input1'
   *
   * Block description for '<S110>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_pv = false;

  /* InitializeConditions for Delay: '<S112>/Delay' */
  FMS_DW.icLoad_a = 1U;

  /* InitializeConditions for UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S82>/Delay Input1'
   *
   * Block description for '<S82>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_c = false;

  /* InitializeConditions for Delay: '<S91>/Delay' */
  FMS_DW.icLoad_o = 1U;

  /* SystemInitialize for Chart: '<S95>/XY_Motion_State' */
  FMS_DW.temporalCounter_i1_b = 0U;
  FMS_DW.is_active_c7_FMS = 0U;
  FMS_DW.is_c7_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<S95>/Z_Motion_State' */
  FMS_Z_Motion_State_Init(&FMS_DW.sf_Z_Motion_State);

  /* SystemInitialize for Chart: '<S78>/Motion_State' */
  FMS_Motion_State_Init(&FMS_DW.sf_Motion_State);

  /* End of SystemInitialize for SubSystem: '<S1>/Position_Mode' */

  /* SystemInitialize for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' */
  /* InitializeConditions for DiscreteIntegrator: '<S17>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_f = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_a = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S44>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_j = false;

  /* InitializeConditions for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_p = false;

  /* InitializeConditions for Delay: '<S32>/Delay' */
  FMS_DW.icLoad_i = 1U;

  /* InitializeConditions for UnitDelay: '<S48>/Delay Input1'
   *
   * Block description for '<S48>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_a = false;

  /* InitializeConditions for Delay: '<S49>/Delay' */
  FMS_DW.icLoad_d = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S44>/Integrator' */
  FMS_DW.Integrator_DSTATE_g = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Integrator' */
  FMS_DW.Integrator_DSTATE_b = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S17>/Integrator' */
  FMS_DW.Integrator_DSTATE_gx = 0.0F;

  /* SystemInitialize for Chart: '<S15>/Motion_State' */
  FMS_Motion_State_Init(&FMS_DW.sf_Motion_State_c);

  /* SystemInitialize for Chart: '<S36>/Z_Motion_State' */
  FMS_Z_Motion_State_Init(&FMS_DW.sf_Z_Motion_State_l);

  /* End of SystemInitialize for SubSystem: '<S1>/Altitude_Hold_Mode' */

  /* SystemInitialize for IfAction SubSystem: '<S1>/Manual_Mode' */
  /* InitializeConditions for DiscreteIntegrator: '<S58>/Integrator1' */
  FMS_DW.Integrator1_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_n = 0.0F;

  /* InitializeConditions for UnitDelay: '<S65>/Delay Input1'
   *
   * Block description for '<S65>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S64>/Delay Input1'
   *
   * Block description for '<S64>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_i = false;

  /* InitializeConditions for Delay: '<S73>/Delay' */
  FMS_DW.icLoad = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S59>/Integrator' */
  FMS_DW.Integrator_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S58>/Integrator' */
  FMS_DW.Integrator_DSTATE_d = 0.0F;

  /* SystemInitialize for Chart: '<S56>/Motion_State' */
  FMS_Motion_State_Init(&FMS_DW.sf_Motion_State_j);

  /* End of SystemInitialize for SubSystem: '<S1>/Manual_Mode' */
}

/* Model terminate function */
void FMS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
