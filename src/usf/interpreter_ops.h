/*
 * Project 64 - A Nintendo 64 emulator.
 *
 * (c) Copyright 2001 zilmar (zilmar@emulation64.com) and
 * Jabo (jabo@emulation64.com).
 *
 * pj64 homepage: www.pj64.net
 *
 * Permission to use, copy, modify and distribute Project64 in both binary and
 * source form, for non-commercial purposes, is hereby granted without fee,
 * providing that this license information and copyright notice appear with
 * all copies and any derived work.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event shall the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Project64 is freeware for PERSONAL USE only. Commercial users should
 * seek permission of the copyright holders first. Commercial use includes
 * charging money for Project64 or software derived from Project64.
 *
 * The copyright holders request that bug fixes and improvements to the code
 * should be forwarded to them so if they want them.
 *
 */  
/************************* OpCode functions *************************/ 
void r4300i_J(void);













































/********************** R4300i OpCodes: Special **********************/ 
void r4300i_SPECIAL_SLL(void);















































/********************** R4300i OpCodes: RegImm **********************/ 
void r4300i_REGIMM_BLTZ(void);






/************************** COP0 functions **************************/ 
void r4300i_COP0_MF(void);


/************************** COP0 CO functions ***********************/ 
void r4300i_COP0_CO_TLBR(void);





/************************** COP1 functions **************************/ 
void r4300i_COP1_MF(void);






/************************* COP1: BC1 functions ***********************/ 
void r4300i_COP1_BCF(void);




/************************** COP1: S functions ************************/ 
void r4300i_COP1_S_ADD(void);









void r4300i_COP1_S_FLOOR_L(void);	//added by Witten
void r4300i_COP1_S_ROUND_W(void);


void r4300i_COP1_S_FLOOR_W(void);





/************************** COP1: D functions ************************/ 
void r4300i_COP1_D_ADD(void);








void r4300i_COP1_D_CEIL_L(void);	//added by Witten
void r4300i_COP1_D_FLOOR_L(void);	//added by Witten
void r4300i_COP1_D_ROUND_W(void);


void r4300i_COP1_D_FLOOR_W(void);	//added by Witten
void r4300i_COP1_D_CVT_S(void);




/************************** COP1: W functions ************************/ 
void r4300i_COP1_W_CVT_S(void);


/************************** COP1: L functions ************************/ 
void r4300i_COP1_L_CVT_S(void);


/************************** Other functions **************************/ 
void R4300i_UnknownOpcode(void);



