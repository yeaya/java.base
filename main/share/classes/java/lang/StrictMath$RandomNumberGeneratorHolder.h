#ifndef _java_lang_StrictMath$RandomNumberGeneratorHolder_h_
#define _java_lang_StrictMath$RandomNumberGeneratorHolder_h_
//$ class java.lang.StrictMath$RandomNumberGeneratorHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Random;
	}
}

namespace java {
	namespace lang {

class StrictMath$RandomNumberGeneratorHolder : public ::java::lang::Object {
	$class(StrictMath$RandomNumberGeneratorHolder, 0, ::java::lang::Object)
public:
	StrictMath$RandomNumberGeneratorHolder();
	void init$();
	static ::java::util::Random* randomNumberGenerator;
};

	} // lang
} // java

#endif // _java_lang_StrictMath$RandomNumberGeneratorHolder_h_