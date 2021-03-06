#ifndef _LAN_H_
#define _LAN_H_

#define LAN_CLIENT_LOGIN_SUCCESS        0
#define LAN_CLIENT_LOGIN_FAIL           1

#define GAGENT_PROTOCOL_VERSION         (0x00000003)

#define GAGENT_LAN_CMD_ONBOARDING       0X0001
#define GAGENT_LAN_CMD_ONDISCOVER       0X0003
#define GAGENT_LAN_CMD_BINDING          0X0006
#define GAGENT_LAN_CMD_LOGIN            0X0008
#define GAGENT_LAN_CMD_TRANSMIT         0X0090
#define GAGENT_LAN_CMD_GETFVRINFO       0X000A
#define GAGENT_LAN_CMD_HOSTPOTS         0X000C
#define GAGENT_LAN_CMD_LOG              0X0010
#define GAGENT_LAN_CMD_INFO             0X0013
#define GAGENT_LAN_CMD_TICK             0X0015
#define GAGENT_LAN_CMD_TEST             0X0017

#define LAN_PROTOCOL_HEAD_LEN           4
#define LAN_PROTOCOL_FLAG_LEN           1
#define LAN_PROTOCOL_CMD_LEN            2

void Lan_CreateTCPServer(int32 *pFd, int32 tcp_port);
void Lan_CreateUDPServer(int32 *pFd, int udp_port);
void Lan_CreateUDPBroadCastServer(int32 *pFd, int udp_port );
#endif
