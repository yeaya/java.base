#ifndef _ContentEquals_h_
#define _ContentEquals_h_
//$ class ContentEquals
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ITERATIONS")
#undef ITERATIONS
#pragma push_macro("STR_LEN")
#undef STR_LEN

namespace java {
	namespace util {
		class Random;
	}
}

class $export ContentEquals : public ::java::lang::Object {
	$class(ContentEquals, 0, ::java::lang::Object)
public:
	ContentEquals();
	void init$();
	static void main($StringArray* args);
	static void testCharSequence();
	static void testString();
	static void testStringBuffer();
	static void testStringBuilder();
	static ::java::util::Random* rnd;
	static const int32_t ITERATIONS = 1000;
	static const int32_t STR_LEN = 20;
};

#pragma pop_macro("ITERATIONS")
#pragma pop_macro("STR_LEN")

#endif // _ContentEquals_h_