#pragma once

using namespace DirectX;
using Microsoft::WRL::ComPtr;

class Triangle
{
public:
	Triangle();
	~Triangle();

	void Init();
	void LoadPipeline();
	void LoadAssets();

private:
	ComPtr<ID3D12Device> mDevice;
	ComPtr<ID3D12CommandQueue> mCommandQueue;
	const INT nFrameCount = 3;

};

