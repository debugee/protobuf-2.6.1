#pragma once


#ifdef _DEBUG
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smdd_libprotobuf.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smdd_libprotobuf.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smtd_libprotobuf.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smtd_libprotobuf.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smd_libprotobuf.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smd_libprotobuf.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smt_libprotobuf.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smt_libprotobuf.lib")
		#endif
	#endif
#endif