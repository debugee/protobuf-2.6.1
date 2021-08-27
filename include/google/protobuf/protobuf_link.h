#pragma once


#ifdef _DEBUG
	#pragma comment(lib, "libprotobuf_mtd.lib")
#else
	#pragma comment(lib, "libprotobuf_mt.lib")
#endif

