#ifndef OBJ_UIVSRESULTS_H
#define OBJ_UIVSRESULTS_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    uint16 textFrames;
} ObjectUIVsResults;

// Entity Class
typedef struct {
    MANIA_UI_ITEM_BASE
    uint8 playerID;
    int32 numRows;
    int32 trophyCount;
    uint8 row0Label;
    uint8 row1Label;
    uint8 row2Label;
    uint8 row3Label;
    uint8 row4Label;
    uint8 row5Label;
    uint8 row6Label;
    uint8 row7Label;
    uint8 row8Label;
    uint8 row9Label;
    uint8 row10Label;
    uint8 row11Label;
    uint8 row12Label;
    bool32 row0Highlight;
    bool32 row1Highlight;
    bool32 row2Highlight;
    bool32 row3Highlight;
    bool32 row4Highlight;
    bool32 row5Highlight;
    bool32 row6Highlight;
    bool32 row7Highlight;
    bool32 row8Highlight;
    bool32 row9Highlight;
    bool32 row10Highlight;
    bool32 row11Highlight;
    bool32 row12Highlight;
    TextInfo rowText[13];
    int32 characterID;
    int32 triBounceOffset;
    int32 playerBounceOffset;
    int32 numRowStore;
    Vector2 size;
    bool32 isWinner;
    bool32 isLoser;
    Animator playerAnimator;
    Animator shadowAnimator;
    Animator edgeAnimator;
    Animator textAnimator;
    Animator numbersAnimator;
    Animator rowAnimators[13];
    Animator trophyAnimator;
    uint16 textFrames;
} EntityUIVsResults;

// Object Struct
extern ObjectUIVsResults *UIVsResults;

// Standard Entity Events
void UIVsResults_Update(void);
void UIVsResults_LateUpdate(void);
void UIVsResults_StaticUpdate(void);
void UIVsResults_Draw(void);
void UIVsResults_Create(void* data);
void UIVsResults_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void UIVsResults_EditorDraw(void);
void UIVsResults_EditorLoad(void);
#endif
void UIVsResults_Serialize(void);

// Extra Entity Functions
void UIVsResults_SetupSprites(void);
void UIVsResults_DrawOutline(void);
void UIVsResults_DrawBG(void);
void UIVsResults_DrawRow(int32 row, int32 posX, int32 posY);
void UIVsResults_DrawTrophies(void);
void UIVsResults_DrawResults(void);
void UIVsResults_Unknown7(void);

#endif //!OBJ_UIVSRESULTS_H
