#include "stdafx.h"
#include "Triangle.h"

Triangle::Triangle()
{

}

Triangle::~Triangle()
{

}

void Triangle::Init()
{
	this->LoadPipeline();
	this->LoadAssets();
}


void Triangle::LoadPipeline()
{
	UINT dxgifactoryFlags = 0;
	ComPtr<IDXGIFactory4> factory;

	CreateDXGIFactory2(dxgifactoryFlags, IID_PPV_ARGS(&factory));

	ComPtr<IDXGIAdapter> adapter;
	factory->EnumWarpAdapter(IID_PPV_ARGS(&adapter)));
	D3D12CreateDevice(adapter.Get(), D3D_FEATURE_LEVEL_12_1, IID_PPV_ARGS(&mDevice));

	D3D12_COMMAND_QUEUE_DESC mCommandQueueDes = {};
	mCommandQueueDes.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
	mCommandQueueDes.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
	mCommandQueueDes.NodeMask = 0;
	mCommandQueueDes.Priority = 0;

	mDevice->CreateCommandQueue(&mCommandQueueDes, IID_PPV_ARGS(&mCommandQueue));
	mCommandQueue->SetName(L"COMMAND_QUEUE");

	DXGI_SWAP_CHAIN_DESC1 mSwapChainDes = {};
	mSwapChainDes.Width = 123;
	mSwapChainDes.Height = 123;
	mSwapChainDes.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
	mSwapChainDes.BufferCount = nFrameCount;
	mSwapChainDes.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	mSwapChainDes.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
	mSwapChainDes.SampleDesc.Count = 1;



}

void Triangle::LoadAssets()
{

}

