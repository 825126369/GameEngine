#include "Texture.h"

Texture::Texture()
{
    
}

Texture::~Texture()
{

}

void Texture::SetData(BYTE* data, int32_t Length)
{
    this->data = new BYTE[Length];
    *this->data = *data;
    dataLength = Length;
}

int32_t Texture::GetData(BYTE* data)
{
    *data = *this->data;
    return dataLength;
}

void Texture::SetWidthHeight(int32_t width, int32_t height)
{
    this->width = width;
    this->height = height;
}

void Texture::GetWidthHeight(int32_t& width, int32_t& height)
{
    width = this->width;
    height = this->height;
}

// void Texture::SetFormat(int32_t width, int32_t height)
// {
//     this->width = width;
//     this->height = height;
// }

// void Texture::GetFormat(int32_t& width, int32_t& height)
// {
//     width = this->width;
//     height = this->height;
// }