
#pragma once

#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include <winsock2.h>
#include <Ws2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#include <windows.h>
#include <vector>
#include <string>
#include <tchar.h>
#include "Shellapi.h"
#include <strsafe.h>