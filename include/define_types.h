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



class Direction
{
public:
	enum Dir
	{
		N = 6,
		S = 4,
		W = 5,
		E = 7,
		N_E = 3,
		N_W = 2,
		S_E = 0,
		S_W = 1,
	};
};
enum ActionEnums
{
	ACTION_IDLE = 0,
	ACTION_WALK,
	ACTION_SIT,
	ACTION_ANGRY,
	ACTION_SAYHI,
	ACTION_DANCE,
	ACTION_SALUTE,
	ACTION_CLPS,
	ACTION_CRY,
	ACTION_BATIDLE,
	ACTION_ATTACK,
	ACTION_CAST,
	ACTION_BEHIT,
	ACTION_RUNTO,
	ACTION_RUNBACK,
	ACTION_DEFEND,
	ACTION_COUNT
};

enum EActorType
{
	ACTOR_TYPE_DEFAULT = 0,
	ACTOR_TYPE_PLAYER,
	ACTOR_TYPE_PET,
	ACTOR_TYPE_NPC
};

#define AddonWDF      0x10
#define AtomWDF       0x20
#define ChatWDF       0x30
#define FireworkWDF   0x40
#define GoodsWDF      0x50
#define ItemWDF       0x60
#define MagicWDF      0x70
#define MapaniWDF     0x80
#define MhimageWDF    0x90
#define MiscWDF       0xa0
#define MusicWDF      0xb0
#define SceneWDF      0xc0
#define ShapeWDF      0xd0
#define ShapeWD1      0xd1
#define ShapeWD2      0xd2
#define ShapeWD3      0xd3
#define ShapeWD4      0xd4
#define ShapeWD5      0xd5
#define ShapeWD6      0xd6
#define ShapeWD7      0xd7
#define SmapWDF       0xe0
#define SoundWDF      0xf0
#define StockWDF      0x100
#define WaddonWDF     0x110
#define WzifeWDF      0x120
#define WzifeWD1      0x121
