#include "Texture.h"

Texture::Texture(BYTE* data, uint32_t width, uint32_t height, uint32_t nPitch, uint32_t nLineCount, uint32_t nSize, uint32_t nBPP)
{
	this->data = data;
	this->width = width;
	this->height = height;
	this->nPitch = nPitch;
	this->nLineCount = nLineCount;
	this->nSize = nSize;
	this->nBPP = nBPP;
}

Texture::~Texture()
{

}