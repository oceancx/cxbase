#pragma once
#include <string>
#define  CX_MSG_HEADER_LEN 4

enum EProtocalType
{
	PTO_C2C_SIGNUP = 0,
	PTO_C2C_LOGIN , 
	PTO_C2C_LOGOUT,
	PTO_C2C_MOVE_TO_POS,
	PTO_C2C_PLAYER_ENTER,
	PTO_C2C_CHAT,
	PTO_C2C_SAVE_PLAYER_DATABASE
};

void luaopen_protocol(lua_State* L);