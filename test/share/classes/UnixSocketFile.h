#ifndef _UnixSocketFile_h_
#define _UnixSocketFile_h_
//$ class UnixSocketFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_SUB_DIR")
#undef TEST_SUB_DIR
#pragma push_macro("CMD_BASE")
#undef CMD_BASE
#pragma push_macro("SOCKET_FILE_NAME")
#undef SOCKET_FILE_NAME

class $export UnixSocketFile : public ::java::lang::Object {
	$class(UnixSocketFile, 0, ::java::lang::Object)
public:
	UnixSocketFile();
	void init$();
	static void main($StringArray* args);
	static $String* TEST_SUB_DIR;
	static $String* SOCKET_FILE_NAME;
	static $String* CMD_BASE;
};

#pragma pop_macro("TEST_SUB_DIR")
#pragma pop_macro("CMD_BASE")
#pragma pop_macro("SOCKET_FILE_NAME")

#endif // _UnixSocketFile_h_