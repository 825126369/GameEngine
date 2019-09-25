#ifndef TEXTURE_H
#define TEXTURE_H

#include <stdint.h>
#include <string>
typedef unsigned char BYTE;

class Texture
{
public:
	Texture(BYTE* data, uint32_t width, uint32_t height, uint32_t nPitch, uint32_t nLineCount, uint32_t nSize, uint32_t nBPP);
	~Texture();
	
	BYTE* data = nullptr;

	int32_t width;
	int32_t height;
	uint32_t nPitch;
	uint32_t nSize;
	uint32_t nLineCount;
	uint32_t nBPP;

	std::string  name;
};

#endif // !TEXTURE_H