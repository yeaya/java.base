#ifndef _StringCharBufferSliceTest_h_
#define _StringCharBufferSliceTest_h_
//$ class StringCharBufferSliceTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class CharBuffer;
	}
}

class $export StringCharBufferSliceTest : public ::java::lang::Object {
	$class(StringCharBufferSliceTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringCharBufferSliceTest();
	void init$();
	static void lambda$main$0(::java::nio::CharBuffer* b, ::java::nio::CharBuffer* s);
	static void lambda$main$1(::java::nio::CharBuffer* b, ::java::nio::CharBuffer* s);
	static void lambda$main$2(::java::nio::CharBuffer* s);
	static void lambda$main$3(::java::nio::CharBuffer* s);
	static void lambda$main$4(::java::nio::CharBuffer* s);
	static void lambda$main$5(::java::nio::CharBuffer* s);
	static void main($StringArray* args);
	static void test(::java::nio::CharBuffer* buff, ::java::nio::CharBuffer* slice);
};

#endif // _StringCharBufferSliceTest_h_