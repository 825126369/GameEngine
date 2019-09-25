#ifndef FREEIMAGEMANAGER_H
#define FREEIMAGEMANAGER_H

#include "../Plugin/TextureImport/FreeImage/FreeImage.h"
#pragma comment(lib, "FreeImage.lib")

#include "Texture.h"
#include <map>
#include <string>

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	Texture* LoadTexture(std::wstring lpszPathName, int flag);
	Texture* GetTexture(std::wstring lpszPathName);

private:
	std::map<std::wstring, Texture*> mTextureDic;
};

#endif // !FREEIMAGEMANAGER_H