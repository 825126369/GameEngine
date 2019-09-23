#include "TextureManager.h"

TextureManager::TextureManager()
{
	
}

TextureManager::~TextureManager()
{
	mTextureDic.clear();
}

Texture* TextureManager::LoadTexture(std::string lpszPathName, int flag)
{
	FREE_IMAGE_FORMAT fif = FIF_UNKNOWN;

	fif = FreeImage_GetFileType(lpszPathName.c_str());

	if (fif == FIF_UNKNOWN)
	{
		fif = FreeImage_GetFIFFromFilename(lpszPathName.c_str());
	}

	if ((fif != FIF_UNKNOWN) && FreeImage_FIFSupportsReading(fif))
	{
		FIBITMAP * dib = FreeImage_Load(fif, lpszPathName.c_str(), flag);
		BYTE* pBits = FreeImage_GetBits(dib);

		int W = FreeImage_GetWidth(dib);
		int H = FreeImage_GetHeight(dib);

		Texture mm;
		mm.SetData(pBits, sizeof(pBits) / sizeof(BYTE));
		mm.SetWidthHeight(W, H);
		
		mTextureDic[lpszPathName] = mm;
	}

	return NULL;
}