#ifndef _DefineClassByteBuffer_h_
#define _DefineClassByteBuffer_h_
//$ class DefineClassByteBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

class $export DefineClassByteBuffer : public ::java::lang::Object {
	$class(DefineClassByteBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefineClassByteBuffer();
	void init$();
	static void main($StringArray* arg);
	static void test(::java::lang::ClassLoader* cl);
};

#endif // _DefineClassByteBuffer_h_