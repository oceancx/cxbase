#pragma once
#include <string>
#define  CX_MSG_HEADER_LEN 4

enum EProtocalType
{
	PTO_C2S_LOGIN = 0,
	PTO_C2S_LOGOUT,
	PTO_C2S_MOVE_TO_POS,
	PTO_C2S_CHAT,
	PTO_S2C_PLAYER_ENTER,
	PTO_S2C_MOVE_TO_POS,
	PTO_S2C_CHAT,
	PTO_C2S_CONNECT,
	PTO_C2S_DISCONNECT
};

struct MSGMeta
{
	int len;
	int type;
	virtual ~MSGMeta() {};
};

struct MSGC2SLogin : MSGMeta
{
	int namelen;
	std::string name;
	int scene_id;
	int dir;
	int role_id;
	int weapon_id;
	float pos_x;
	float pos_y;
};

struct MSGC2SLogout : MSGMeta
{
	int namelen;
	std::string name;
};

struct MSGC2SMoveToPos : MSGMeta
{
	int namelen;
	std::string name;
	float pos_x;
	float pos_y;
};

struct MSGC2SChat : MSGMeta
{
	int namelen;
	std::string name;
	int ctlen;
	std::string content;
};


struct MSGS2CPlayerEnter : MSGMeta
{
	int namelen;
	std::string name;
	int scene_id;
	int role_id;
	int weapon_id;
	int dir;
	float pos_x;
	float pos_y;
	int is_local;
};
