#ifndef _AppendCharSequence_h_
#define _AppendCharSequence_h_
//$ class AppendCharSequence
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export AppendCharSequence : public ::java::lang::Object {
	$class(AppendCharSequence, 0, ::java::lang::Object)
public:
	AppendCharSequence();
	void init$();
	static void bash();
	static void checkConstructor();
	static void checkNegativeLenCharSeq(int32_t len);
	static void checkNulls();
	static void checkOffsets();
	static ::java::lang::StringBuffer* generateTestBuffer(int32_t min, int32_t max);
	static int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _AppendCharSequence_h_