#ifndef _AppendStringBuilder_h_
#define _AppendStringBuilder_h_
//$ class AppendStringBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export AppendStringBuilder : public ::java::lang::Object {
	$class(AppendStringBuilder, 0, ::java::lang::Object)
public:
	AppendStringBuilder();
	void init$();
	static ::java::lang::StringBuilder* generateTestBuilder(int32_t min, int32_t max);
	static int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _AppendStringBuilder_h_