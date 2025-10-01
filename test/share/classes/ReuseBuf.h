#ifndef _ReuseBuf_h_
#define _ReuseBuf_h_
//$ class ReuseBuf
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ReuseBuf : public ::java::lang::Object {
	$class(ReuseBuf, 0, ::java::lang::Object)
public:
	ReuseBuf();
	void init$();
	static void main($StringArray* args);
	static $StringArray* msgs;
	static int32_t port;
};

#endif // _ReuseBuf_h_