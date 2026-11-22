#ifndef _BLOOD_ANIMATION_H_
#define _BLOOD_ANIMATION_H_

#include <ultra64.h>

Gfx *clear_framebuffer_black(Gfx *gdl);
Gfx *sub_GAME_7F01C1A4(Gfx *gdl);
s32 die_blood_image_routine(s32 arg0);
#ifndef TARGET_N64
s32 portDeathBloodAdvance(s32 frames);
#endif
Gfx *gunbarrelBloodOverlayDL(Gfx *gdl);
Gfx *sub_GAME_7F01CA18(Gfx *gdl);
Gfx *gameplayBloodOverlayDL(Gfx *gdl);

#endif

