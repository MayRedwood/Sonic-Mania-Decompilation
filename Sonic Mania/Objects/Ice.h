#ifndef OBJ_ICE_H
#define OBJ_ICE_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectIce;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityIce;

// Object Struct
extern ObjectIce *Ice;

// Standard Entity Events
void Ice_Update();
void Ice_LateUpdate();
void Ice_StaticUpdate();
void Ice_Draw();
void Ice_Create(void* data);
void Ice_StageLoad();
void Ice_EditorDraw();
void Ice_EditorLoad();
void Ice_Serialize();

// Extra Entity Functions


#endif //!OBJ_ICE_H