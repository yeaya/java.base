#ifndef _TinyBuffers_h_
#define _TinyBuffers_h_
//$ class TinyBuffers
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

class $export TinyBuffers : public ::java::lang::Object {
	$class(TinyBuffers, 0, ::java::lang::Object)
public:
	TinyBuffers();
	void init$();
	static void main($StringArray* args);
	static void test(int32_t sz);
	static ::java::nio::charset::Charset* cs;
};

#endif // _TinyBuffers_h_