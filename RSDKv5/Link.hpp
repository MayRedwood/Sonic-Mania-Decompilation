#ifndef LINK_H
#define LINK_H

#define FUNCTABLE_COUNT (180)
#define UDATATABLE_COUNT (59)

extern void *functionTable[FUNCTABLE_COUNT];
extern void *userDataTable[UDATATABLE_COUNT];

struct SKUInfo {
    int platform;
    int language;
    int region;
};

extern SKUInfo curSKU;

struct GameInfo {
    void *functionPtrs;
    void *userdataPtrs;
    char *gameName;
    SKUInfo *currentSKU;
    SceneInfo *sceneInfo;
    void *activeDPad;
    void *activeAnalogStick;
    void *unknown1;
    void *unknown2;
    void *unknown3;
    void *mousePos;
    void *inputCount;
    ScreenInfo *screenInfo;
};

void setupFunctions();

#endif