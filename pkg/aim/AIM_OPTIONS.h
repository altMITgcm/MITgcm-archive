C $Header: /u/gcmpack/MITgcm/pkg/aim/Attic/AIM_OPTIONS.h,v 1.3.20.1 2003/10/02 18:18:28 adcroft Exp $
C $Name:  $

C  CPP options file for AIM package 

#ifndef AIM_OPTIONS_H
#define AIM_OPTIONS_H
#include "PACKAGES_CONF.h"
#ifdef ALLOW_AIM

#include "CPP_OPTIONS.h"

C  restore the old AIM interface (ref: coupled run, summer 2000):
C  - use a simple shift of 1/2 mesh for mapping A.grid <-> C.grid.
C  - do not include minor changes (added to avoid negative Q).
#undef OLD_AIM_INTERFACE

C   Macro mapping dynamics vertical indexing (KD) to AIM vertical indexing (KA).
C   ( dynamics puts K=1 at bottom of atmos., AIM puts K=1 at top of atmos. )
#define _KD2KA( KD ) Nr-KD+1

#endif /* ALLOW_AIM */
#endif /* AIM_OPTIONS_H */
