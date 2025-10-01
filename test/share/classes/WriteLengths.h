#ifndef _WriteLengths_h_
#define _WriteLengths_h_
//$ class WriteLengths
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class PrintStream;
	}
}

class $export WriteLengths : public ::java::lang::Object {
	$class(WriteLengths, 0, ::java::lang::Object)
public:
	WriteLengths();
	void init$();
	static void go(int32_t len, $String* enc);
	static void main($StringArray* args);
	static ::java::io::PrintStream* log;
	static int32_t failures;
	static ::java::io::ByteArrayOutputStream* bos;
};

#endif // _WriteLengths_h_