#ifndef _WriteBytes_h_
#define _WriteBytes_h_
//$ class WriteBytes
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WriteBytes : public ::java::lang::Object {
	$class(WriteBytes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WriteBytes();
	void init$();
	static void assertTrue(bool condition, $String* msg);
	static void main($StringArray* args);
};

#endif // _WriteBytes_h_