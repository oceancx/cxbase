#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <string>
#include <sstream>
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

namespace utils
{
	template< typename T >
	static std::string Int2Hex( T i )
	{
		std::stringstream stream;
		stream << "0x"<< std::hex << i;
		return stream.str();
	}
}
