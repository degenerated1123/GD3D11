#include "pch.h"
#include "HookedFunctions.h"
#include "Engine.h"
#include "GothicAPI.h"
#include "zSTRING.h"



#ifndef BUILD_GOTHIC_1_08k
#define zCPARSER_CALL_FUNC(symbolId, ...)  do {((void (*)(zCParser*, ...))GothicMemoryLocations::zCParser::CallFunc)(zCParser::GetParser(), symbolId, __VA_ARGS__); } while (0)
#else
#define zCPARSER_CALL_FUNC(symbolId, ...)
#endif

class zCParser 
{
public:
#ifndef BUILD_GOTHIC_1_08k
	static zCParser* GetParser(){return (zCParser *)GothicMemoryLocations::GlobalObjects::zCParser;}
#else
	static void CallFunc(int symbolId, ...)
	{
		
	}

	static zCParser* GetParser(){return NULL;}
#endif
};