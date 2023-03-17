/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2016 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/* taken from SDL_system.h */

#ifdef __WEBOS__
enum {
    SDL_WEBOS_EXPORTED_TYPE_VIDEO = 0,
    SDL_WEBOS_EXPORTED_TYPE_SUBTITLE = 1
};
extern DECLSPEC const char* SDLCALL SDL_webOSCreateExportedWindow(unsigned int exportedType);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSSetExportedWindow(const char *windowID, SDL_Rect *srcRegion, SDL_Rect *dstRegion);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSExportedSetCropRegion(const char *windowID, SDL_Rect *orgRegion, SDL_Rect *srcRegion, SDL_Rect *dstRegion);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSExportedSetProperty(const char *windowID, const char *name, const char *value);
extern DECLSPEC void SDLCALL SDL_webOSDestroyExportedWindow(const char *windowID);

extern DECLSPEC void SDLCALL SDL_webOSCursorVisibility(unsigned int visibility);

typedef struct webOSMemInfo_{
    unsigned int totalSize;
    unsigned int freeSize;
} webOSMemInfo;

extern DECLSPEC SDL_bool SDLCALL SDL_webOSGetFlashInfo (webOSMemInfo *memInfo);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSGetRamInfo (webOSMemInfo *memInfo);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSGetPanelResolution (unsigned int *width, unsigned int *height);
extern DECLSPEC SDL_bool SDLCALL SDL_webOSGetRefreshRate (unsigned int *rate);
#endif /* __WEBOS__ */
