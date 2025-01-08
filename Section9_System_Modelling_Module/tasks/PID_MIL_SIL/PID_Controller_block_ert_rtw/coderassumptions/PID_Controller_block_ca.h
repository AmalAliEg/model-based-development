/*
 * File: PID_Controller_block_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef PID_CONTROLLER_BLOCK_CA_H
#define PID_CONTROLLER_BLOCK_CA_H

/* preprocessor validation checks */
#include "PID_Controller_block_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_PID_Controller_block_HWRes;
extern CA_PWS_TestResults CA_PID_Controller_block_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_PID_Controller_block_ExpHW;
extern CA_HWImpl CA_PID_Controller_block_ActHW;

/* entry point function to run tests */
void PID_Controller_block_caRunTests(void);

#endif                                 /* PID_CONTROLLER_BLOCK_CA_H */
