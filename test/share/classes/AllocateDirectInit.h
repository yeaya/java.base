#ifndef _AllocateDirectInit_h_
#define _AllocateDirectInit_h_
//$ class AllocateDirectInit
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export AllocateDirectInit : public ::java::lang::Object {
	$class(AllocateDirectInit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AllocateDirectInit();
	void init$();
	static void main($StringArray* args);
	static void printByteBuffer(::java::nio::ByteBuffer* bb);
};

#endif // _AllocateDirectInit_h_