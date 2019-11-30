#include "protocol.h"

void luaopen_protocol(lua_State* L)
{
#define REG_ENUM(name)  (lua_pushinteger(L, name),lua_setglobal(L, #name))
	REG_ENUM(PTO_C2C_SIGNUP);
	REG_ENUM(PTO_C2C_LOGIN);
	REG_ENUM(PTO_C2C_LOGOUT);
	REG_ENUM(PTO_C2C_MOVE_TO_POS);
	REG_ENUM(PTO_C2C_PLAYER_ENTER);
	REG_ENUM(PTO_C2C_CHAT);
	REG_ENUM(PTO_C2C_SAVE_PLAYER_DATABASE);
	REG_ENUM(PTO_C2S_DOSTRING);
	REG_ENUM(PTO_C2S_COMBAT_START);
	REG_ENUM(PTO_C2S_COMBAT_CMD);
#undef REG_ENUM
	(lua_pushinteger(L, CX_MSG_HEADER_LEN), lua_setglobal(L, "CX_MSG_HEADER_LEN"));

}
