#ifndef _java_lang_Math$RandomNumberGeneratorHolder_h_
#define _java_lang_Math$RandomNumberGeneratorHolder_h_
//$ class java.lang.Math$RandomNumberGeneratorHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Random;
	}
}

namespace java {
	namespace lang {

class Math$RandomNumberGeneratorHolder : public ::java::lang::Object {
	$class(Math$RandomNumberGeneratorHolder, 0, ::java::lang::Object)
public:
	Math$RandomNumberGeneratorHolder();
	void init$();
	static ::java::util::Random* randomNumberGenerator;
};

	} // lang
} // java

#endif // _java_lang_Math$RandomNumberGeneratorHolder_h_