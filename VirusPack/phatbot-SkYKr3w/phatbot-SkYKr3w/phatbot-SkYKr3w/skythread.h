
#ifndef _SDTHREAD_
#define _SDTHREAD_

//nclude "cstring.h"
//#include "commands.h"
//clude "message.h"
#include "main.h"
#include "cthread.h"

// Standard TCP flags
#define URG 0x20
#define ACK 0x10
#define PSH 0x08
#define RST 0x04
#define SYN 0x02
#define FIN 0x01

typedef struct _iphdr {
	unsigned char h_lenver; //4?+4?IP?
	unsigned char tos; //8?TOS
	unsigned short total_len; //16
	unsigned short ident; //16
	unsigned short frag_and_flags; //3
	unsigned char ttl; //8? TTL
	unsigned char proto; //8? (TCP, UDP ?)
	unsigned short checksum; //16?IP?
	unsigned int sourceIP; //32IP
	unsigned int destIP; //32?IP
}IP_HEADER;



typedef struct _tcphdr {
	USHORT th_sport; //16
	USHORT th_dport; //16?
	unsigned intth_seq; //32
	unsigned intth_ack; //32
	unsigned char th_lenres; //4?/6
	unsigned char th_flag; //6
	USHORT th_win; //16?
	USHORT th_sum; //16
	USHORT th_urp; //16
}TCP_HEADER;

//SDbot Threads Struct
typedef struct threads_struct {
	char name [250];
	int id; 
	int num;
	int port;
	SOCKET sock;
	HANDLE Threat_Handle;
	char dir[MAX_PATH];
	char file[MAX_PATH];
} thread;

// Our tcp header struct
typedef struct sdtcp_hdr {
	unsigned short	sport;
	unsigned short	dport;
	unsigned int	seqnum;
	unsigned int	acknum;
	unsigned char	DataOffset;
	unsigned char	Flags;
	unsigned char	flags;
	unsigned short	Windows;
	unsigned short	Checksum;
	unsigned short	UrgPointer;
	}TCP_HDR;

// Our ip header struct

 typedef struct threds_struct {
	char name [250];
	int id;
	int num;
	int port;
	SOCKET sock;
	HANDLE Threat_Handle;
	char dir[MAX_PATH];
	char file[MAX_PATH];
 } thred;


 typedef struct syn_struct {
	char host[100];
	int port;
	int delay;
	int times;
	int thread;
	int state;
} syndata;

typedef struct sdip_hdr
{
    unsigned char  ip_verlen;        // IP version & length
    unsigned char  ip_tos;           // IP type of service
    unsigned short ip_totallength;   // Total length
    unsigned short ip_id;            // Unique identifier 
    unsigned short ip_offset;        // Fragment offset field
    unsigned char  ip_ttl;           // Time to live
    unsigned char  ip_protocol;      // Protocol(TCP, UDP, etc.)
    unsigned short ip_checksum;      // IP checksum
    unsigned int   ip_srcaddr;       // Source address
    unsigned int   ip_destaddr;      // Destination address

} IP_HDR; 



// Our pseudo header struct
typedef struct ps_hdr{
      unsigned int source_address;
      unsigned int dest_address;
      unsigned char placeholder;
      unsigned char protocol;
      unsigned short tcp_length;
      struct sdtcp_hdr tcp;
   }PS_HDR;

// Standard TCP/UDP checksum function.

#endif // SDTHREAD
