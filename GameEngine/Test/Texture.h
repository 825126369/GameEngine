#ifndef TEXTURE_H
#define TEXTURE_H

#include <stdint.h>
typedef unsigned char BYTE;

class Texture
{
public:
	Texture();
	~Texture();

	void SetData(BYTE* data, int32_t Length)
	{
		this->data = new BYTE[Length];
		*this->data = *data;
		dataLength = Length;
	}

	int32_t GetData(BYTE* data)
	{
		*data = *this->data;
		return dataLength;
	}

	void SetWidthHeight(int32_t width, int32_t height)
	{
		this->width = width;
		this->height = height;
	}

	void GetWidthHeight(int32_t& width, int32_t& height)
	{
		width = this->width;
		height = this->height;
	}

private:
	BYTE* data = nullptr;
	int32_t dataLength = 0;

	int32_t width;
	int32_t height;

	std::string  name;
};

#endif // !TEXTURE_H