#pragma once

#include "../pch.h"
#include <d3d11_4.h>
#include <d3d12.h>
#include <dxgi1_6.h>

#include <ffx_api.h>
#include <dx12/ffx_api_dx12.h>
#include <ffx_framegeneration.h>

namespace ImGuiOverlayDx
{
	inline ID3D12QueryHeap* queryHeap = nullptr;
	inline ID3D12Resource* readbackBuffer = nullptr;
	inline bool dx12UpscaleTrig = false;

	inline const int QUERY_BUFFER_COUNT = 3;
	inline ID3D11Query* disjointQueries[QUERY_BUFFER_COUNT] = { nullptr, nullptr, nullptr };
	inline ID3D11Query* startQueries[QUERY_BUFFER_COUNT] = { nullptr, nullptr, nullptr };
	inline ID3D11Query* endQueries[QUERY_BUFFER_COUNT] = { nullptr, nullptr, nullptr };
	inline bool dx11UpscaleTrig[QUERY_BUFFER_COUNT] = { false, false, false };

	inline ID3D12CommandQueue* GameCommandQueue = nullptr;

	inline int currentFrameIndex = 0;
	inline int previousFrameIndex = 0;
	

	inline IDXGISwapChain* currentSwapchain = nullptr;
	inline DXGI_FORMAT swapchainFormat = DXGI_FORMAT_UNKNOWN;
	inline ffxContext fgSwapChainContext = nullptr;


	void UnHookDx();
	void HookDx();
}
