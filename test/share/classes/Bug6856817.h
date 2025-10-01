#ifndef _Bug6856817_h_
#define _Bug6856817_h_
//$ class Bug6856817
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

class $export Bug6856817 : public ::java::lang::Object {
	$class(Bug6856817, 0, ::java::lang::Object)
public:
	Bug6856817();
	void init$();
	static void checkFileContent(::java::nio::CharBuffer* charBuffer, ::java::io::File* file, $String* expectedValue);
	static bool isEqual(int32_t first, int32_t second);
	static void main($StringArray* args);
	static $String* str;
	static const int32_t BUF_SIZE = 1024;
};

#pragma pop_macro("BUF_SIZE")

#endif // _Bug6856817_h_