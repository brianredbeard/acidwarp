void rollMainPalArrayAndLoadDACRegs(UCHAR *MainPalArray);
void rolNFadeWhtMainPalArrayNLoadDAC(UCHAR *MainPalArray);
void rolNFadeBlkMainPalArrayNLoadDAC(UCHAR *MainPalArray);
void rolNFadeMainPalAryToTargNLodDAC(UCHAR *MainPalArray, UCHAR *TargetPalArray);
void rolNFadMainPalAry2RndTargNLdDAC(UCHAR *MainPalArray, UCHAR *TargetPalArray);
void roll_rgb_palArray (UCHAR *MainpalArray);
void maybeInvertSubPalRollDirection(void);
int fadePalArrayToWhite (UCHAR *MainpalArray);
int fadePalArrayToBlack (UCHAR *MainpalArray);
int fadePalArrayToTarget (UCHAR *palArrayBeingChanged, UCHAR *targetPalArray);
