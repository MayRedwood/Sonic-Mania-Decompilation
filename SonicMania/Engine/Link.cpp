#include "RetroEngine.hpp" 

void *RSDK_GetConfirmButtonFlip;
void *RSDK_Unknown2;
void *RSDK_Unknown3;
void *RSDK_Unknown4;
void *RSDK_CheckDLC;
void *RSDK_Unknown5;
void *RSDK_UnlockAchievement;
void *RSDK_Unknown6;
void *RSDK_Unknown7;
void *RSDK_Unknown8;
void *RSDK_Unknown9;
void *RSDK_Unknown10;
void *RSDK_Unknown11;
void *RSDK_Unknown12;
void *RSDK_Unknown13;
void *RSDK_PossiblyGetStrings;
void *RSDK_Unknown14;
void *RSDK_Unknown15;
void *RSDK_Unknown16;
void *RSDK_Unknown17;
void *RSDK_Unknown18;
void *RSDK_Unknown19;
void *RSDK_Unknown20;
void *RSDK_Unknown21;
void *RSDK_Unknown22;
void *RSDK_Unknown23;
void *RSDK_Unknown24;
void *RSDK_Unknown25;
void *RSDK_Unknown26;
void *RSDK_Unknown27;
void *RSDK_Unknown28;
void *RSDK_LoadUserFile;
void *RSDK_SaveUserFile;
void *RSDK_DeleteUserFile;
void *RSDK_AddUserDBEntry;
int (*RSDK_OpenUserDB)(void *, void *, void *);
void *RSDK_SaveUserDB;
void *RSDK_Unknown30;
void *RSDK_Unknown31;
void *RSDK_Unknown32;
void *RSDK_Unknown33;
void *RSDK_Unknown34;
void *RSDK_Unknown35;
void *RSDK_Unknown36;
void *RSDK_Unknown37;
void *RSDK_Unknown38;
void *RSDK_Unknown39;
void *RSDK_AddUserDB;
void *RSDK_Unknown40;
void *RSDK_Unknown41;
void *RSDK_Unknown42;
void *RSDK_Unknown43;
void (*RSDK_ClearStruct)(void *, void *);
void (*RSDK_CreateObject)(Object *structPtr, const char *name, uint entitySize, uint objectSize, void (*update)(void), void (*lateUpdate)(void),
                          void (*staticUpdate)(void), void (*draw)(void), void(__cdecl *create)(void *), void (*stageLoad)(void),
                          void (*editorDraw)(void), void (*editorLoad)(void), void (*serialize)(void));
void (*RSDK_CreateObjectContainer)(Object *structPtr, const char *name, uint objectSize);
int (*RSDK_GetActiveObjects)(void *, void *);
int (*RSDK_GetObjects)(void *, void *);
int (*RSDK_Unknown45)(void);
void (*RSDK_SetEditableVar)(byte type, const char *name, byte object, int storeOffset);
int (*RSDK_GetObjectByID)(void *);
int (*RSDK_GetEntityID)(void *);
void *RSDK_GetEntityCount;
void *RSDK_Unknown47;
int (*RSDK_DestroyEntity)(void *, void *, void *);
int (*RSDK_ResetEntity)(void *, void *, void *);
int (*RSDK_SpawnEntity)(void *, void *, void *, void *);
void *RSDK_CopyEntity;
void *RSDK_CheckOnScreen;
void *RSDK_CheckPosOnScreen;
void *RSDK_AddDrawListRef;
void *RSDK_SwapDrawLayers;
int (*RSDK_SetDrawLayerProperties)(void *, void *, void *);
int (*RSDK_LoadScene)(void *, void *);
void *RSDK_SetGameMode;
int (*RSDK_Unknown53)(void *);
void *RSDK_CheckValidScene;
int (*RSDK_CheckStageFolder)(char *folderName);
int (*RSDK_InitSceneLoad)(void);
void *RSDK_GetObjectIDByName;
void *RSDK_Unknown57;
int (*RSDK_Unknown58)(void *, void *, void *, void *);
void *RSDK_GetSettingsValue;
void *RSDK_SetSettingsValue;
void *RSDK_ResizeWindow;
int (*RSDK_Sin1024)(int angle);
int (*RSDK_Cos1024)(int angle);
int (*RSDK_Sin512)(int angle);
int (*RSDK_Cos512)(int angle);
int (*RSDK_Sin256)(int angle);
int (*RSDK_Cos256)(int angle);
int (*RSDK_Rand)(int min, int max);
int (*RSDK_Random)(int min, int max, int *randKey);
void *RSDK_SetRandKey;
byte (*RSDK_ATan2)(int x, int y);
void *RSDK_MatrixMultiply;
void *RSDK_MatrixTranslateXYZ;
void *RSDK_MatrixScaleXYZ;
void *RSDK_MatrixRotateX;
void *RSDK_MatrixRotateY;
void *RSDK_MatrixRotateZ;
void *RSDK_MatrixRotateXYZ;
void *RSDK_SetText;
void *RSDK_Unknown64;
void *RSDK_Unknown65;
void *RSDK_Unknown66;
void *RSDK_Unknown67;
void *RSDK_LoadStrings;
void *RSDK_Unknown68;
void *RSDK_CopyString;
void *RSDK_Unknown69;
void *RSDK_Unknown70;
void *RSDK_Unknown71;
void (*RSDK_SetClipBounds)(byte screenID, int x1, int y1, int x2, int y2);
int (*RSDK_SetScreenFade)(void *, void *, void *, void *, void *);
short (*RSDK_LoadSpriteSheet)(const char *path, Scopes scope);
void (*RSDK_SetInkValue)(uint value);
void (*RSDK_SetPaletteMask)(uint colour);
void (*RSDK_SetPaletteEntry)(byte paletteID, byte index, uint colour);
uint (*RSDK_GetPaletteEntry)(byte paletteID, byte index);
void (*RSDK_SetActivePalette)(byte newActivePal, int startLine, int endLine);
void (*RSDK_CopyPalette)(byte sourcePalette, byte srcPaletteStart, byte destinationPalette, byte destPaletteStart, ushort count);
void (*RSDK_LoadPalette)(const char *filePath, int paletteID, int startPaletteIndex, int startIndex, int endIndex);
void (*RSDK_RotatePalette)(byte palID, byte startIndex, byte endIndex, bool right);
void (*RSDK_SetLimitedFade)(byte destPaletteID, byte srcPaletteA, byte srcPaletteB, ushort blendAmount, int startIndex, int endIndex);
void *RSDK_DrawRect;
void *RSDK_DrawLine;
void *RSDK_DrawCircle;
void *RSDK_DrawCircleOutline;
void *RSDK_DrawQuad;
void *RSDK_DrawTexturedQuad;
int (*RSDK_DrawSprite)(void *, void *, void *);
int (*RSDK_DrawUnknown)(void *, void *, void *);
void *RSDK_DrawText;
void *RSDK_DrawSprite3;
void *RSDK_DrawAniTile;
int (*RSDK_SetPaletteThing)(void *, void *, void *, void *);
void *RSDK_LoadMesh;
void *RSDK_Create3DScene;
void *RSDK_Init3DScene;
void *RSDK_View_Something1;
void *RSDK_View_Something2;
void *RSDK_View_Something3;
void *RSDK_SetupMesh;
void (*RSDK_SetModelAnimation)(ushort modelAnim, EntityAnimationData *data, short animSpeed, byte loopIndex, bool forceApply, ushort frameID);
void *RSDK_SetupMeshAnimation;
void *RSDK_Draw3DScene;
short (*RSDK_LoadAnimation)(const char* path, Scopes scope);
void (*RSDK_SetSpriteAnimation)(ushort spriteIndex, ushort animationID, EntityAnimationData *data, bool forceApply, ushort frameID);
void *RSDK_SetSpriteString;
SpriteFrame* (*RSDK_GetFrame)(ushort sprIndex, ushort anim, int frame);
Hitbox *(*RSDK_GetHitbox)(EntityAnimationData *data, byte hitboxID);
short (*RSDK_GetFrameID)(EntityAnimationData *data);
void *RSDK_Unknown82;
void (*RSDK_ProcessAnimation)(EntityAnimationData *data);
int (*RSDK_GetSceneLayerID)(void *);
void *(*RSDK_GetSceneLayerPtr)(void *);
void *RSDK_GetLayerSize;
void *RSDK_GetTileInfo;
void *RSDK_SetTileInfo;
int (*RSDK_CopyTileLayer)(void *, void *, void *, void *, void *, void *, void *, void *);
void *RSDK_ProcessParallax;
int (*RSDK_GetLinePosPtrs)(void);
void *RSDK_CheckObjectCollisionTouch;
void *RSDK_CheckObjectCollisionPoint;
void *RSDK_CheckObjectCollisionBox;
void *RSDK_CheckObjectCollisionPlatform;
void *RSDK_ObjectTileCollision;
void *RSDK_ObjectTileGrip;
void *RSDK_ProcessPlayerTileCollisions;
void *RSDK_GetTileAngle;
void *RSDK_GetTileBehaviour;
int (*RSDK_GetSFX)(const char *path);
int (*RSDK_PlaySFX)(void *, void *, void *);
void *RSDK_StopSFX;
void *RSDK_PlayMusic;
int (*RSDK_SetSoundAttributes)(void *, void *, void *, void *);
void *RSDK_Unknown91;
void *RSDK_Unknown92;
void *RSDK_Unknown93;
void *RSDK_Unknown94;
void *RSDK_Unknown95;
void *RSDK_Unknown96;
void *RSDK_LoadVideo;
void *RSDK_LoadPNG;
void *RSDK_Unknown98;
void *RSDK_Unknown99;
void *RSDK_Unknown100;
void *RSDK_Unknown101;
void *RSDK_Unknown102;
void *RSDK_Unknown103;
void *RSDK_Unknown104;
void (*RSDK_printLog)(SeverityModes severity, const char *message, ...);
void (*RSDK_printString)(SeverityModes severity, const char *message);
void (*RSDK_printText)(SeverityModes severity, const char* message, TextInfo *text);
void (*RSDK_printInteger)(SeverityModes severity, const char *message, int integer);
void (*RSDK_printVector2)(SeverityModes severity, const char *message, int x, int y);
void (*RSDK_Unknown105)();
void (*RSDK_Unknown106)();
void (*RSDK_SetDebugValue)(const char *name, int valPtr, int type, int unknown1, int unknown2);

SKUInfo curSKU;

void setupFunctions() {
    curSKU.platform = 0;
    curSKU.language = 0;
    curSKU.region = 0;

    CalculateTrigAngles();
    GenerateBlendLookupTable();
    InitGFXSystem();

    //FunctionPtrs                      = Engine_Unknown255;
    RSDK_CreateObject                 = CreateObject;
    RSDK_CreateObjectContainer        = CreateObjectContainer;
    //RSDK_GetActiveObjects             = GetActiveObjects;
    //RSDK_GetObjects                   = GetObjects;
    //RSDK_Unknown45                    = Unknown45;
    RSDK_SetEditableVar                = SetEditableVar;
    //RSDK_GetObjectByID                = GetObjectByID;
    //RSDK_GetEntityID                  = GetEntityID;
    //RSDK_GetEntityNoMaybe             = GetEntityNoMaybe;
    //RSDK_GetDrawListRef               = GetDrawListRef;
    //RSDK_GetDrawListRef2              = GetDrawListRef2;
    //RSDK_DestroyEntity                = DestroyEntity;
    //RSDK_ResetEntity                  = ResetEntity;
    //RSDK_SpawnEntity                  = SpawnEntity;
    //RSDK_CopyEntity                   = CopyEntity;
    //RSDK_CheckOnScreen                = CheckOnScreen;
    //RSDK_CheckPosOnScreen             = CheckPosOnScreen;
    //RSDK_AddDrawListRef               = AddDrawListRef;
    //RSDK_SwapDrawLayers               = SwapDrawLayers;
    //RSDK_SetDrawLayerProperties       = SetDrawLayerProperties;
    //RSDK_LoadGameScene                = LoadGameScene;
    //RSDK_SetEngineState1              = SetEngineState1;
    //RSDK_Unknown53                    = Unknown53;
    //RSDK_CheckValidStage              = CheckValidStage;
    //RSDK_CheckSceneFolder             = CheckSceneFolder;
    //RSDK_InitSceneLoad                = InitSceneLoad;
    //RSDK_GetObjectByName              = GetObjectByName;
    //RSDK_ResetScreenCount             = ResetScreenCount;
    //RSDK_AddScreen                    = AddScreen;
    //RSDK_GetSettingsValue             = GetSettingsValue;
    //RSDK_SetSettingsValue             = SetSettingsValue;
    //RSDK_ResizeWindow                 = ResizeWindow;
    RSDK_Sin1024                      = sin1024;
    RSDK_Cos1024                      = cos1024;
    //RSDK_ATan1024                     = aTan1024;
    //RSDK_ASin1024                     = aSin1024;
    //RSDK_ACos1024                     = aCos1024;
    RSDK_Sin512                       = sin512;
    RSDK_Cos512                       = cos512;
    //RSDK_ATan512                      = aTan512;
    //RSDK_ASin512                      = aSin512;
    //RSDK_ACos512                      = aCos512;
    RSDK_Sin256                       = sin256;
    RSDK_Cos256                       = cos256;
    //RSDK_ATan256                      = aTan256;
    //RSDK_ASin256                      = aSin256;
    //RSDK_ACos256                      = aCos256;
    RSDK_Rand                         = random;
    RSDK_Random                       = random2;
    RSDK_SetRandKey                   = setRandKey;
    RSDK_ATan2                        = ArcTanLookup;
    //RSDK_SetIdentityMatrix            = SetIdentityMatrix;
    //RSDK_3DSomething2                 = MatrixMultiply;
    //RSDK_MatrixSomething              = MatrixTranslateXYZ;
    //RSDK_MatrixScaleXYZ               = MatrixScaleXYZ;
    //RSDK_MatrixRotateX                = MatrixRotateX;
    //RSDK_MatrixRotateY                = MatrixRotateY;
    //RSDK_MatrixRotateZ                = MatrixRotateZ;
    //RSDK_MatrixRotateXYZ              = MatrixRotateXYZ;
    //RSDK_MatrixInvert                 = MatrixInvert;
    //RSDK_MatrixMultiply               = MatrixCopy;
    //RSDK_FuncUnknown1                 = FuncUnknown1;
    //RSDK_FuncUnknown2                 = FuncUnknown2;
    //RSDK_FuncUnknown3                 = FuncUnknown3;
    //RSDK_FuncUnknown4                 = FuncUnknown4;
    //RSDK_FuncUnknown5                 = FuncUnknown5;
    //RSDK_LoadStrings                  = LoadStrings;
    //RSDK_Unknown68                    = Unknown68;
    //RSDK_SetMusicTrack                = SetMusicTrack;
    //RSDK_Unknown69                    = Unknown69;
    //RSDK_Unknown70                    = Unknown70;
    //RSDK_Unknown71                    = Unknown71;
    //RSDK_SetScreenSize                = SetScreenSize;
    RSDK_SetClipBounds = SetClipBounds;
    //RSDK_SetScreenFade                = SetScreenFade;
    RSDK_LoadSpriteSheet  = LoadSpriteSheet;
    RSDK_SetInkValue      = SetInkValue;
    RSDK_SetPaletteMask   = SetPaletteMask;
    RSDK_SetPaletteEntry  = SetPaletteEntry;
    RSDK_GetPaletteEntry  = GetPaletteEntry;
    RSDK_SetActivePalette = SetActivePalette;
    RSDK_CopyPalette      = CopyPalette;
    RSDK_LoadPalette      = LoadPalette;
    RSDK_RotatePalette    = RotatePalette;
    RSDK_SetLimitedFade   = SetPaletteFade;
    //RSDK_DoPaletteSomething3          = DoPaletteSomething3;
    //RSDK_DrawRect                     = DrawRect;
    //RSDK_DrawLine                     = DrawLine;
    //RSDK_DrawCircle                   = DrawCircle;
    //RSDK_DrawCircleOutline            = DrawCircleOutline;
    //RSDK_DrawQuad                     = DrawQuad;
    //RSDK_DrawTexturedQuad             = DrawTexturedQuad;
    //RSDK_DrawSprite                   = DrawSprite;
    //RSDK_DrawUnknown                  = DrawUnknown;
    //RSDK_DrawText                     = DrawText;
    //RSDK_DrawSprite3                  = DrawSprite3;
    //RSDK_DrawTile                     = DrawTile;
    //RSDK_DrawAniTiles                 = DrawAniTiles;
    //RSDK_SetPaletteThing              = SetPaletteThing;
    //RSDK_LoadMesh                     = LoadMesh;
    //RSDK_Create3DScene                = Create3DScene;
    //RSDK_3DSomething3                 = Init3DScene;
    //RSDK_View_Something1              = View_Something1;
    //RSDK_View_Something2              = View_Something2;
    //RSDK_View_Something3              = View_Something3;
    //RSDK_SetupMesh                    = SetupMesh;
    RSDK_SetModelAnimation            = SetModelAnimation;
    //RSDK_DrawMeshSomething            = SetupMeshAnimation;
    //RSDK_Draw3DScene                  = Draw3DScene;
    RSDK_LoadAnimation                = LoadAnimation;
    //RSDK_AnimationDoSomething         = AnimationDoSomething;
    RSDK_SetSpriteAnimation           = SetSpriteAnimation;
    //RSDK_DoSpriteAnimationSomething   = DoSpriteAnimationSomething;
    //RSDK_DoAnimationListSomething     = DoAnimationListSomething;
    //RSDK_SetSpriteString              = SetSpriteString;
    RSDK_GetFrame   = GetFrame;
    RSDK_GetHitbox  = GetHitbox;
    RSDK_GetFrameID = GetFrameID;
    // RSDK_Unknown82                    = Unknown82;
    RSDK_ProcessAnimation = ProcessAnimation;
    //RSDK_GetSceneLayerInfo            = GetSceneLayerInfo;
    //RSDK_GetSceneLayerID              = GetSceneLayerID;
    //RSDK_GetLayerSize                 = GetLayerSize;
    //RSDK_GetTileInfo                  = GetTileInfo;
    //RSDK_SetTileInfo                  = SetTileInfo;
    //RSDK_CopyTileLayout               = CopyTileLayout;
    //RSDK_ProcessParallaxScroll        = ProcessParallaxScroll;
    //RSDK_GetLinePositions             = GetLinePositions;
    //RSDK_CheckObjectCollisionTouch    = CheckObjectCollisionTouch;
    //RSDK_CheckObjectCollisionPoint    = CheckObjectCollisionPoint;
    //RSDK_CheckObjectCollisionBox      = CheckObjectCollisionBox;
    //RSDK_CheckObjectCollisionPlatform = CheckObjectCollisionPlatform;
    //RSDK_ObjectCollision              = ObjectTileCollision;
    //RSDK_ObjectPathGrip               = ObjectTileGrip;
    //RSDK_ProcessPlayerCollisions      = ProcessPlayerTileCollisions;
    //RSDK_GetTileAngle                 = GetTileAngle;
    //RSDK_SetTileAngle                 = SetTileAngle;
    //RSDK_GetTileBehaviour             = GetTileBehaviour;
    //RSDK_SetTileBehaviour             = SetTileBehaviour;
    //RSDK_GetSoundFXID                 = GetSoundFXID;
    //RSDK_PlaySFX                      = PlaySFX;
    //RSDK_StopSFX                      = StopSFX;
    //RSDK_PlayMusicFile                = PlayMusicFile;
    //RSDK_SetSoundAttributes           = SetSoundAttributes;
    //RSDK_Unknown91                    = Unknown91;
    //RSDK_Unknown92                    = Unknown92;
    //RSDK_Unknown93                    = Unknown93;
    //RSDK_Unknown94                    = Unknown94;
    //RSDK_Unknown95                    = Unknown95;
    //RSDK_Unknown96                    = Unknown96;
    //RSDK_LoadVideo                    = LoadVideo;
    //RSDK_LoadPNG                      = LoadPNG;
    //RSDK_Unknown98                    = Unknown98;
    //RSDK_Unknown99                    = Unknown99;
    //RSDK_Unknown100                   = Unknown100;
    //RSDK_Unknown101                   = Unknown101;
    //RSDK_Unknown102                   = Unknown102;
    //RSDK_Unknown103                   = Unknown103;
    //RSDK_Unknown104                   = Unknown104;
    
    //Userdata
    //RSDK_UserDataUnknown1             = UserDataUnknown1;
    //RSDK_UserDataUnknown2             = UserDataUnknown2;
    //RSDK_UserDataUnknown3             = UserDataUnknown3;
    //RSDK_UserDataUnknown4             = UserDataUnknown4;
    //RSDK_UserDataUnknown5             = UserDataUnknown5;
    //RSDK_UserDataUnknown6             = UserDataUnknown6;
    //RSDK_LoadUserFile                 = LoadUserFile;
    //RSDK_SaveUserFile                 = SaveUserFile;
    RSDK_printLog             = printLog;
    RSDK_printString          = printString;
    RSDK_printText            = printText;
    //RSDK_printIntegerUnsigned = printIntegerUnsigned;
    RSDK_printInteger         = printInteger;
    //RSDK_printFloat           = printFloat;
    RSDK_printVector2         = printVector2;
    //RSDK_printHitbox          = printHitbox;
    //RSDK_UserDataUnknown7             = UserDataUnknown7;
    //RSDK_UserDataUnknown8             = UserDataUnknown8;
    //RSDK_ResetDebugValues             = ResetDebugValues;
    RSDK_SetDebugValue                = SetDebugValue;
}