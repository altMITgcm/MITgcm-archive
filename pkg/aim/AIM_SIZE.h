C $Header: /u/gcmpack/MITgcm/pkg/aim/Attic/AIM_SIZE.h,v 1.1.4.1 2003/03/06 22:46:50 heimbach Exp $
C $Name:  $

C     *==========================================================*
C     | AIM_SIZE.h Declare size of arrays for AIM Physics        |
C     *==========================================================*

C     MITgcm declaration of grid size. 
C     Latitudinal extent is one less than MITgcm ( i.e. NY-1)
C     because MITgcm has dummy layer of land at northern most
C     edge.  <-- no longer the case now
#include "SIZE.h"

C- dimension for AIM Physics package   
      INTEGER NLON, NLAT, NLEV, NGP
      PARAMETER ( NLON=sNx, NLAT=sNy, NLEV=Nr, NGP=NLON*NLAT ) 

