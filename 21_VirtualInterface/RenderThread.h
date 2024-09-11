#pragma once

enum RENDER_THREAD_EVENT_TYPE
{
	RENDER_THREAD_EVENT_TYPE_PROCESS,
	RENDER_THREAD_EVENT_TYPE_DESTROY,
	RENDER_THREAD_EVENT_TYPE_COUNT
};
struct RENDER_THREAD_DESC
{
	CD3D12Renderer* pRenderer;
	DWORD dwThreadIndex;
	HANDLE hThread;
	HANDLE hEventList[RENDER_THREAD_EVENT_TYPE_COUNT];
};

UINT WINAPI RenderThread(void* pArg);