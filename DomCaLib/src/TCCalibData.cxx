/*************************************************************************
 * Author: Dominik Werthmueller
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCCalibData                                                          //
//                                                                      //
// Calibration data class.                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TCCalibData.h"

ClassImp(TCCalibData)

//______________________________________________________________________________
TCCalibData::TCCalibData(const Char_t* name, const Char_t* title, Int_t nSize)
    : TNamed(name, title)
{
    // Constructor.

    fSize = nSize;
}

//______________________________________________________________________________
void TCCalibData::Print(Option_t* option) const
{
    // Print the content of this class.

    printf("CaLib Data Information\n");
    printf("Name           : %s\n", GetName());
    printf("Title          : %s\n", GetTitle());
    printf("Table name     : %s\n", fTableName.Data());
    printf("Number of par. : %d\n", fSize);
}

