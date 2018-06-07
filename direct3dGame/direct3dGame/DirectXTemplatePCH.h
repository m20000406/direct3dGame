#pragma once
#include <windows.h>

#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>
#include <DirectXColors.h>

#include <iostream>
#include <string>
#include <algorithm>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "winmm.lib")

template<typename T>
inline void SafeRelease(T& ptr) {
	if (ptr != NULL) {
		ptr->Release();
		ptr = NULL;
	}
}

