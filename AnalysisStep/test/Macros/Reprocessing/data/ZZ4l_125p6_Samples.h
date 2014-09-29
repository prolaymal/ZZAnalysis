#ifndef ZZ4L_125.6_SAMPLES_H
#define ZZ4L_125.6_SAMPLES_H
#include <iostream>
#include <string>
#include "TMath.h"
#include "TH1D.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TCanvas.h"

const float PI_VAL = TMath::Pi();
const int kNumFiles=24;
const int nFinalStates=5;

enum sample {
	kfg2_0_fg4_0,
	kfg2_1_fg4_0,
	kfg2_0_fg4_1,
	kfLambda1_1,

	kfg2_05_fg4_0,
	kfg2_0_fg4_05,
	kfg2_05_fg4_05,
	kfLambda1_m05,

	kfg2_33_fg4_33,
	kfg2_01_fg4_0,
	kfg2_0_fg4_01,
	kfg2_01_fg4_01,

	kfLambda1_05,
	kfLambda1_03, // No sample here
	kfLambda1_01,

	kfg2_05_fg4_0_p290,
	kfg2_0_fg4_05_p390,
	kfg2_05_fg4_05_p390,

	kfLambda1_05_pL190,

	kfg2_33_fg4_33_p390,
	kfg2_01_fg4_0_p290,
	kfg2_0_fg4_01_p390,
	kfg2_01_fg4_01_p390,

	kfg2_05_fg4_0_p2Pi,
	kfg2_0_fg4_05_p3Pi,
	kfg2_05_fg4_05_p2Pi,

	kfg2_05_fLambda1_m05,
	kfg2_05_fLambda1_m05_p2270,
	kfg2_05_fLambda1_05,
	kfg2_33_fLambda1_33_p2Pi,

	kfg4_05_fLambda1_m05,
	kfg4_05_fLambda1_m05_p3270,
	kfg4_05_fLambda1_05,
	kfg4_33_fLambda1_33_p3Pi,

// ZZ LambdaQ and ZZ imaginary g1
	kfLambdaQ_1,
	kfLambdaQ_1_pLQ90,
	kfg1_p190,

	kfg1_05_fLambdaQ_05,
	kfg1_05_fLambdaQ_05_pLQ90,

// ZG and GG
	kfZG_1_fGG_0,
	kfZG_0_fGG_1,
	kfZG_05_fGG_0,
	kfZG_0_fGG_05,

	kfMZG_1_fMGG_0,
	kfMZG_0_fMGG_1,
	kfMZG_05_fMGG_0,
	kfMZG_0_fMGG_05,

	kfZG_05_fMZG_05,
	kfGG_05_fMGG_05,

	kfZG_SM_fGG_SM,

	kfZG_Lambda1_1,
	kfZG_Lambda1_05,

	kNumSamples
};
enum {
	p_mH,
	p_GH,
	p_Re_g1,
	p_Im_g1,
	p_Re_g2,
	p_Im_g2,
	p_Re_g3,
	p_Im_g3,
	p_Re_g4,
	p_Im_g4,
	p_Re_L1,
	p_Im_L1,
	p_Re_LQ,
	p_Im_LQ,
	p_Re_a2ZG,
	p_Im_a2ZG,
	p_Re_a2GG,
	p_Im_a2GG,
	p_Re_a3ZG,
	p_Im_a3ZG,
	p_Re_a3GG,
	p_Im_a3GG,
	p_Re_ZGL1,
	p_Im_ZGL1,
	p_NumArray_MEweight_SpinZero
};
string sampleName[kNumSamples] = {
	"fg2_0_fg4_0",
	"fg2_1_fg4_0",
	"fg2_0_fg4_1",
	"fLambda1_1",

	"fg2_05_fg4_0",
	"fg2_0_fg4_05",
	"fg2_05_fg4_05",
	"fLambda1_m05",

	"fg2_33_fg4_33",
	"fg2_01_fg4_0",
	"fg2_0_fg4_01",
	"fg2_01_fg4_01",

	"fLambda1_05",
	"fLambda1_03", // No sample here
	"fLambda1_01",

	"fg2_05_fg4_0_p290",
	"fg2_0_fg4_05_p390",
	"fg2_05_fg4_05_p390",

	"fLambda1_05_pL190",

	"fg2_33_fg4_33_p390",
	"fg2_01_fg4_0_p290",
	"fg2_0_fg4_01_p390",
	"fg2_01_fg4_01_p390",

	"fg2_05_fg4_0_p2Pi",
	"fg2_0_fg4_05_p3Pi",
	"fg2_05_fg4_05_p2Pi",

	"fg2_05_fLambda1_m05",
	"fg2_05_fLambda1_m05_p2270",
	"fg2_05_fLambda1_05",
	"fg2_33_fLambda1_33_p2Pi",

	"fg4_05_fLambda1_m05",
	"fg4_05_fLambda1_m05_p3270",
	"fg4_05_fLambda1_05",
	"fg4_33_fLambda1_33_p3Pi",

// ZZ LambdaQ and ZZ imaginary g1
	"fLambdaQ_1",
	"fLambdaQ_1_pLQ90",
	"fg1_p190",

	"fg1_05_fLambdaQ_05",
	"fg1_05_fLambdaQ_05_pLQ90",

// ZG and GG
	"fZG_1_fGG_0",
	"fZG_0_fGG_1",
	"fZG_05_fGG_0",
	"fZG_0_fGG_05",

	"fMZG_1_fMGG_0",
	"fMZG_0_fMGG_1",
	"fMZG_05_fMGG_0",
	"fMZG_0_fMGG_05",

	"fZG_05_fMZG_05",
	"fGG_05_fMGG_05",

	"fZG_SM_fGG_SM",

	"fZG_Lambda1_1",
	"fZG_Lambda1_05"
};
char* sampleName_label[kNumSamples]={
	"0^{+}_{m} 125.6 GeV",
	"0^{+}_{h} 125.6 GeV",
	"0^{-} 125.6 GeV",
	"0^{+}_{m} Pure Q^{2} 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=0 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=0 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a2}=#phi_{a3}=0 125.6 GeV",
	"f_{#Lambda1}=-0.5 125.6 GeV",

	"f_{a2}=f_{a3}=0.33 #phi_{a2}=#phi_{a3}=0 125.6 GeV",
	"f_{a2}=0.1 #phi_{a2}=0 125.6 GeV",
	"f_{a3}=0.1 #phi_{a3}=0 125.6 GeV",
	"f_{a2}=f_{a3}=0.1 #phi_{a2}=#phi_{a3}=0 125.6 GeV",

	"f_{#Lambda1}=0.5 125.6 GeV",
	"f_{#Lambda1}=0.3 125.6 GeV",
	"f_{#Lambda1}=0.1 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=#pi/2 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a3}=#pi/2 125.6 GeV",

	"f_{#Lambda1}=0.5 #phi_{#Lambda1}=#pi/2 125.6 GeV",

	"f_{a2}=f_{a3}=0.33 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=0.1 #phi_{a2}=#pi/2 125.6 GeV",
	"f_{a3}=0.1 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=f_{a3}=0.1 #phi_{a3}=#pi/2 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=#pi 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=#pi 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a2}=#pi 125.6 GeV",

	"f_{a2}=f_{#Lambda1}=0.5 #phi_{#Lambda1}=#pi 125.6 GeV",
	"f_{a2}=f_{#Lambda1}=0.5 #phi_{a2}=3#pi/2 #phi_{#Lambda1}=#pi 125.6 GeV",
	"f_{a2}=f_{#Lambda1}=0.5 #phi_{#Lambda1}=0 125.6 GeV",
	"f_{a2}=f_{#Lambda1}=0.33 #phi_{a2}=#pi 125.6 GeV",

	"f_{a3}=f_{#Lambda1}=0.5 #phi_{#Lambda1}=#pi 125.6 GeV",
	"f_{a3}=f_{#Lambda1}=0.5 #phi_{a3}=3#pi/2 #phi_{#Lambda1}=#pi 125.6 GeV",
	"f_{a3}=f_{#Lambda1}=0.5 #phi_{#Lambda1}=0 125.6 GeV",
	"f_{a3}=f_{#Lambda1}=0.33 #phi_{a3}=#pi 125.6 GeV",

// ZZ LambdaQ and ZZ imaginary g1
	"f_{#Lambda Q}=1 125.6 GeV",
	"f_{#Lambda Q}=1 #phi_{#Lambda Q}=#pi/2 125.6 GeV",
	"f_{a1}=1 #phi_{a1}=#pi/2 125.6 GeV",

	"f_{#Lambda Q}=0.5 125.6 GeV",
	"f_{#Lambda Q}=0.5 #phi_{#Lambda Q}=#pi/2 125.6 GeV",

// ZG and GG
	"f_{Z#gamma}=1, f_{#gamma#gamma}=0 125.6 GeV",
	"f_{Z#gamma}=0, f_{#gamma#gamma}=1 125.6 GeV",
	"f_{Z#gamma}=0.5, f_{#gamma#gamma}=0 125.6 GeV",
	"f_{Z#gamma}=0, f_{#gamma#gamma}=0.5 125.6 GeV",

	"f_{0M-Z#gamma}=1, f_{0M-#gamma#gamma}=0 125.6 GeV",
	"f_{0M-Z#gamma}=0, f_{0M-#gamma#gamma}=1 125.6 GeV",
	"f_{0M-Z#gamma}=0.5, f_{0M-#gamma#gamma}=0 125.6 GeV",
	"f_{0M-Z#gamma}=0, f_{0M-#gamma#gamma}=0.5 125.6 GeV",

	"f_{Z#gamma}=0.5, f_{0M-Z#gamma}=0.5 125.6 GeV",
	"f_{#gamma#gamma}=0.5, f_{0M-#gamma#gamma}=0.5 125.6 GeV",

	"f_{Z#gamma}, f_{#gamma#gamma} Full SM 125.6 GeV",

	"f_{Z#gamma, #Lambda1}=1 125.6 GeV",
	"f_{Z#gamma, #Lambda1}=0.5 125.6 GeV"
};
char* sample_file[kNumFiles]={
	"HZZ4lTree_powheg15jhuGenV3-0PMH125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHH125.6",
	"HZZ4lTree_powheg15jhuGenV3-0MH125.6",
	"HZZ4lTree_powheg15jhuGenV3-0L1H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0Mf05ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph0Mf05ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0L1f05ph180H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf033ph0Mf033ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf01ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0Mf01ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf01ph0Mf01ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0L1f05ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0L1f01ph0H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0Mf05ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph0Mf05ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf033ph0Mf033ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf01ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0Mf01ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf01ph0Mf01ph90H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph180H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0Mf05ph180H125.6",
	"HZZ4lTree_powheg15jhuGenV3-0PHf05ph180Mf05ph0H125.6"
};
char* sample_file_label[kNumFiles]={
	"0^{+}_{m} 125.6 GeV",
	"0^{+}_{h} 125.6 GeV",
	"0^{-} 125.6 GeV",
	"0^{+}_{m} Pure Q^{2} 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=0 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=0 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a2}=#phi_{a3}=0 125.6 GeV",
	"f_{#Lambda1}=-0.5 125.6 GeV",

	"f_{a2}=f_{a3}=0.33 #phi_{a2}=#phi_{a3}=0 125.6 GeV",
	"f_{a2}=0.1 #phi_{a2}=0 125.6 GeV",
	"f_{a3}=0.1 #phi_{a3}=0 125.6 GeV",
	"f_{a2}=f_{a3}=0.1 #phi_{a2}=#phi_{a3}=0 125.6 GeV",

	"f_{#Lambda1}=0.5 125.6 GeV",
	"f_{#Lambda1}=0.1 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=#pi/2 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a3}=#pi/2 125.6 GeV",

	"f_{a2}=f_{a3}=0.33 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=0.1 #phi_{a2}=#pi/2 125.6 GeV",
	"f_{a3}=0.1 #phi_{a3}=#pi/2 125.6 GeV",
	"f_{a2}=f_{a3}=0.1 #phi_{a3}=#pi/2 125.6 GeV",

	"f_{a2}=0.5 #phi_{a2}=#pi 125.6 GeV",
	"f_{a3}=0.5 #phi_{a3}=#pi 125.6 GeV",
	"f_{a2}=f_{a3}=0.5 #phi_{a2}=#pi 125.6 GeV"
};
char* sample_filePrimary[kNumFiles]={
	"ZZ4lAnalysis_powheg15jhuGenV3-0PMH125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHH125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0MH125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0L1H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0Mf05ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph0Mf05ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0L1f05ph180H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf033ph0Mf033ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf01ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0Mf01ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf01ph0Mf01ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0L1f05ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0L1f01ph0H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0Mf05ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph0Mf05ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf033ph0Mf033ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf01ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0Mf01ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf01ph0Mf01ph90H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph180H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0Mf05ph180H125.6",
	"ZZ4lAnalysis_powheg15jhuGenV3-0PHf05ph180Mf05ph0H125.6"
};
char* sample_fileLHE[kNumFiles]={
	"Higgs0PMToZZTo4L_M-125p6_",
	"Higgs0PHToZZTo4L_M-125p6_",
	"Higgs0MToZZTo4L_M-125p6_",
	"Higgs0L1ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph0ToZZTo4L_M-125p6_",
	"Higgs0Mf05ph0ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph0Mf05ph0ToZZTo4L_M-125p6_",
	"Higgs0L1f05ph180ToZZTo4L_M-125p6_",
	"Higgs0PHf033ph0Mf033ph0ToZZTo4L_M-125p6_",
	"Higgs0PHf01ph0ToZZTo4L_M-125p6_",
	"Higgs0Mf01ph0ToZZTo4L_M-125p6_",
	"Higgs0PHf01ph0Mf01ph0ToZZTo4L_M-125p6_",
	"Higgs0L1f05ph0ToZZTo4L_M-125p6_",
	"Higgs0L1f01ph0ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph90ToZZTo4L_M-125p6_",
	"Higgs0Mf05ph90ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph0Mf05ph90ToZZTo4L_M-125p6_",
	"Higgs0PHf033ph0Mf033ph90ToZZTo4L_M-125p6_",
	"Higgs0PHf01ph90ToZZTo4L_M-125p6_",
	"Higgs0Mf01ph90ToZZTo4L_M-125p6_",
	"Higgs0PHf01ph0Mf01ph90ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph180ToZZTo4L_M-125p6_",
	"Higgs0Mf05ph180ToZZTo4L_M-125p6_",
	"Higgs0PHf05ph180Mf05ph0ToZZTo4L_M-125p6_"
};
const double gi_phi2_phi4_files[kNumFiles][p_NumArray_MEweight_SpinZero]={
	//	mH	GH	Re-g1	Im-g1	Re-g2	Im-g2	Re-g3	Im-g3	Re-g4	Im-g4	Re-L1	Im-L1	Re-LQ	Im-LQ	Re-a2ZG	Im-a2ZG	Re-a2GG	Im-a2GG	Re-a3ZG	Im-a3ZG	Re-a3GG	Im-a3GG	Re-ZGL1	Im-ZGL1						
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	Pure	SM		
	{	125.6,	0.00415,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=1			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=1			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fL1=1			
																															
	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5			
	{	125.6,	0.00415,	0,	0,	0.650,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.5			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambda1=-0.5,	for	T3	templates
																															
	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=1/3			
	{	125.6,	0.00415,	1.0,	0,	0.546,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0.840,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.1			
	{	125.6,	0.00415,	1.0,	0,	0.579,	0,	0,	0,	0.891,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.1			
																															
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambda1=0.5			
//	//	NOTE:	No	FLambda1=0.3	sample	at	125.6	GeV	is	available																					
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	-4015.337,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	flambda1=0.1			
																															
	{	125.6,	0.00415,	1.0,	0,	0,	1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5,	phia2=90		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5,	phia3=90		
	{	125.6,	0.00415,	0,	0,	0.650,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.5,	phia3=90		
																															
	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=1/3,	phia3=90		
	{	125.6,	0.00415,	1.0,	0,	0,	0.546,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1,	phia2=90		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0.840,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.1,	phia3=90		
	{	125.6,	0.00415,	1.0,	0,	0.579,	0,	0,	0,	0,	0.891,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1,	fa3=0.1,	phia3=90	
																															
	{	125.6,	0.00415,	1.0,	0,	-1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=-0.5			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	-2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=-0.5	
	{	125.6,	0.00415,	0,	0,	-0.650,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	}	//	fa2=-0.5,	fa3=0.5		
};

double sample_mixedxsec_ratio[4]={ // Assuming g_i below
	3.660,	2.0,	0.3146, // 0+m0+h, 0+m0-, 0+h0-
	3.966863 // fL1=-0.5
};
double epspr_mixedSample_lambda1pr=10000.0;

const double gi_phi2_phi4[kNumSamples][p_NumArray_MEweight_SpinZero] = {
	//	mH	GH	Re-g1	Im-g1	Re-g2	Im-g2	Re-g3	Im-g3	Re-g4	Im-g4	Re-L1	Im-L1	Re-LQ	Im-LQ	Re-a2ZG	Im-a2ZG	Re-a2GG	Im-a2GG	Re-a3ZG	Im-a3ZG	Re-a3GG	Im-a3GG	Re-ZGL1	Im-ZGL1
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	Pure	SM	0		
	{	125.6,	0.00415,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=1	1			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=1	2			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fL1=1	3			
																															
	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5	4			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5	5			
	{	125.6,	0.00415,	0,	0,	0.650,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.5	6			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambda1=-0.5,	for	T3	templates	7
																															
	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=1/3	8			
	{	125.6,	0.00415,	1.0,	0,	0.546,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1	9			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0.840,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.1	10			
	{	125.6,	0.00415,	1.0,	0,	0.579,	0,	0,	0,	0.891,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.1	11			
																															
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambda1=0.5	12			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	-7885.965,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	flambda1=0.3	13			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	-4015.337,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	flambda1=0.1	14			
																															
	{	125.6,	0.00415,	1.0,	0,	0,	1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5,	phia2=90	15		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5,	phia3=90	16		
	{	125.6,	0.00415,	0,	0,	0.650,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=0.5,	phia3=90	17		

	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambda1=0.5,	phiL1=90	18			

	{	125.6,	0.00415,	1.0,	0,	1.638,	0,	0,	0,	0,	2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=fa3=1/3,	phia3=90	19		
	{	125.6,	0.00415,	1.0,	0,	0,	0.546,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1,	phia2=90	20		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0.840,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.1,	phia3=90	21		
	{	125.6,	0.00415,	1.0,	0,	0.579,	0,	0,	0,	0,	0.891,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.1,	fa3=0.1,	phia3=90	22	
																															
	{	125.6,	0.00415,	1.0,	0,	-1.638,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=-0.5	23			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	-2.521,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=-0.5	24			
	{	125.6,	0.00415,	0,	0,	-0.650,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=-0.5,	fa3=0.5	25		
																															
	{	125.6,	0.00415,	0,	0,	1.638,	0,	0,	0,	0,	0,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5,	fLambda1=-0.5,	for	templates	26
	{	125.6,	0.00415,	0,	0,	0,	-1.638,	0,	0,	0,	0,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=-0.5i,	fLambda1=-0.5,	for	templates	27
	{	125.6,	0.00415,	0,	0,	1.638,	0,	0,	0,	0,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=0.5,	fLambda1=0.5	28		
	{	125.6,	0.00415,	1.0,	0,	-1.638,	0,	0,	0,	0,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa2=-0.33,	fLambda1=0.33	29		
																															
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	2.521,	0,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5,	fLambda1=-0.5,	for	templates	30
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	-2.521,	12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=-0.5i,	fLambda1=-0.5,	for	templates	31
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	2.521,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=0.5,	fLambda1=0.5	32		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	-2.521,	0,	-12046.01,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fa3=-0.33,	fLambda1=0.33	33		


	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-6338.9995537,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambdaQ=1	34			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-6338.9995537,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fLambdaQ=1,	phiLQ=90	35			
	{	125.6,	0.00415,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fg1=1,	phig1=90	36			

	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-6338.9995537,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fg1=fLambdaQ=0.5,	phiLQ=0		37		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-6338.9995537,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fg1=fLambdaQ=0.5,	phiLQ=90	38			


	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	Pure	PM-ZG	39		
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0,	0,	0	},	//	Pure	PM-GG	40		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0.0473,	0,	0,	0,	0,	0,	0,	0,	0,	0	},	//	fPM-ZG=0.5	41			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-0.0531,	0,	0,	0,	0,	0,	0,	0	},	//	fPM-GG=0.5	42			
																															
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0,	0,	0	},	//	Pure	M-ZG	43		
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0,	0,	0	},	//	Pure	M-GG	44		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0.052161,	0,	0,	0,	0,	0	},	//	fM-ZG=0.5	45			
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-0.053666,	0,	0,	0	},	//	fM-GG=0.5	46			
																															
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0.0473,	0,	0,	0,	0.052161,	0,	0,	0,	0,	0	},	//	fZG=fM-ZG=0.5	47			
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-0.0531,	0,	0,	0,	-0.053666,	0,	0,	0	},	//	fGG=fM-GG=0.5	48			
																															
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0.00175,	0,	-0.002,	0,	0,	0,	0,	0,	0,	0	},	//	SM	ZZ,	ZG.	GG	49
																															
	{	125.6,	0.00415,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1.0,	0	},	//	Pure	ZG-L1	50		
	{	125.6,	0.00415,	1.0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	-7591.914,	0	}	//	fZG-L1=0.5	51			
};

string user_dir_raw = "/afs/cern.ch/work/u/usarica/ggtoH-PWGSamples-125_6/";
string user_dir="/afs/cern.ch/work/u/usarica/HZZ4l-125p6-FullAnalysis/";
string user_dir_gritsan="/afs/cern.ch/work/g/gritsan/public/backup/newProduction/";
string user_dir_newProduction="/afs/cern.ch/work/l/lfeng/public_write/usarica/Production/";
char* user_folder[5]={
	"4mu",
	"4e",
	"2mu2e",
	"CR",
	"data"
};

const int kNumBkg=8;
char hzz4lprefix[]="HZZ4lTree_";
char* sample_BackgroundFile[kNumBkg]={
	"ggZZ4l",
	"ggZZ2l2l",
	"ZZTo4mu",
	"ZZTo4e",
	"ZZTo2e2mu",
	"ZZTo2mu2tau",
	"ZZTo2e2tau",
	"ZZTo4tau"
};

#endif