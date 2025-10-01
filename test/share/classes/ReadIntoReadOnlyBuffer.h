#ifndef _ReadIntoReadOnlyBuffer_h_
#define _ReadIntoReadOnlyBuffer_h_
//$ class ReadIntoReadOnlyBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("THE_STRING")
#undef THE_STRING

namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

class $export ReadIntoReadOnlyBuffer : public ::java::lang::Object {
	$class(ReadIntoReadOnlyBuffer, 0, ::java::lang::Object)
public:
	ReadIntoReadOnlyBuffer();
	void init$();
	static void main($StringArray* args);
	static void read(::java::io::Reader* r, ::java::nio::CharBuffer* b);
	static $String* THE_STRING;
};

#pragma pop_macro("THE_STRING")

#endif // _ReadIntoReadOnlyBuffer_h_