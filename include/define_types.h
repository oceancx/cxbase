#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <string>
#include <sstream>
#include <nlohmann/json.hpp>
using Vec3 = glm::vec3;
using Vec4 = glm::vec4;
using Vec2 = glm::vec2;

using Vec3i = glm::tvec3<int>;
using Vec4i = glm::tvec4<int>;
using Vec2i = glm::tvec2<int>;

using Mat3 = glm::mat3;
using Mat4 = glm::mat4;
using Mat2 = glm::mat2;

using String = std::string;
using Json = nlohmann::json;

typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;

typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;

typedef float float32;
typedef double float64;
typedef long double float128;

typedef uint8_t byte;

#ifndef TGA_FILE_HEADER_H
#define TGA_FILE_HEADER_H
#pragma pack(push)
#pragma pack(1)
struct TGA_FILE_HEADER
{
	uint8 IdLength;
	uint8 ColorMapType;
	uint8 ImageType;
	uint16 ColorMapFirstIndex;
	uint16 ColorMapLength;
	uint8 ColorMapEntrySize;
	uint16 XOrigin;
	uint16 YOrigin;
	uint16 ImageWidth;
	uint16 ImageHeight;
	uint8 PixelDepth;
	uint8 ImageDescruptor;
};
#pragma pack(pop)
#endif

#ifdef _T
#undef _T
#endif

#define _T(x) std::string(x)