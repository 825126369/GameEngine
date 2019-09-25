#include "TextureManager.h"
#include <iostream>

TextureManager::TextureManager()
{
	
}

TextureManager::~TextureManager()
{
	mTextureDic.clear();
}

Texture* TextureManager::LoadTexture(std::wstring lpszPathName, int flag)
{
	std::wcout << "lpszPathName: "<< lpszPathName << std::endl;
	FREE_IMAGE_FORMAT fif = FIF_UNKNOWN;

	fif = FreeImage_GetFileTypeU(lpszPathName.c_str());

	if (fif == FIF_UNKNOWN)
	{
		fif = FreeImage_GetFIFFromFilenameU(lpszPathName.c_str());
	}

	if ((fif != FIF_UNKNOWN) && FreeImage_FIFSupportsReading(fif))
	{
		FIBITMAP * dib = FreeImage_LoadU(fif, lpszPathName.c_str(), flag);

		BYTE* pBits = FreeImage_GetBits(dib);
		uint32_t W = FreeImage_GetWidth(dib);
		uint32_t H = FreeImage_GetHeight(dib);
		uint32_t nPitch = FreeImage_GetPitch(dib);
		uint32_t nLineCount = FreeImage_GetLine(dib);
		uint32_t nSize = FreeImage_GetDIBSize(dib);
		uint32_t nBPP = FreeImage_GetBPP(dib);

		Texture* mm = new Texture(pBits, W, H, nPitch, nLineCount, nSize, nBPP);
		mTextureDic[lpszPathName] = mm;

		return mm;
	}

	return NULL;
}

Texture* TextureManager::GetTexture(std::wstring lpszPathName)
{
	return mTextureDic[lpszPathName];
}