#ifndef TEXTURE_H
#define TEXTURE_H

#include <stdint.h>
typedef unsigned char BYTE;

class Texture
{
public:
	Texture();
	~Texture();
	
	void SetData(BYTE* data, int32_t Length);
	int32_t GetData(BYTE* data);
	void SetWidthHeight(int32_t width, int32_t height);
	void GetWidthHeight(int32_t& width, int32_t& height);

private:
	BYTE* data = nullptr;
	int32_t dataLength = 0;

	int32_t width;
	int32_t height;

	std::string  name;
};

#endif // !TEXTURE_H