#ifndef _ReadUTF_h_
#define _ReadUTF_h_
//$ class ReadUTF
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_CORRUPTIONS_PER_CYCLE")
#undef MAX_CORRUPTIONS_PER_CYCLE
#pragma push_macro("TEST_ITERATIONS")
#undef TEST_ITERATIONS

namespace java {
	namespace util {
		class Random;
	}
}

class $export ReadUTF : public ::java::lang::Object {
	$class(ReadUTF, 0, ::java::lang::Object)
public:
	ReadUTF();
	void init$();
	static void main($StringArray* args);
	static void writeAndReadAString();
	static ::java::util::Random* generator;
	static const int32_t TEST_ITERATIONS = 1000;
	static const int32_t A_NUMBER_NEAR_65535 = 0x0000EA60;
	static const int32_t MAX_CORRUPTIONS_PER_CYCLE = 3;
};

#pragma pop_macro("MAX_CORRUPTIONS_PER_CYCLE")
#pragma pop_macro("TEST_ITERATIONS")

#endif // _ReadUTF_h_