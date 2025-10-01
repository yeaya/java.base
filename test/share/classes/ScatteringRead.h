#ifndef _ScatteringRead_h_
#define _ScatteringRead_h_
//$ class ScatteringRead
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export ScatteringRead : public ::java::lang::Object {
	$class(ScatteringRead, 0, ::java::lang::Object)
public:
	ScatteringRead();
	void init$();
	static void main($StringArray* args);
	static void scScatter();
	static ::java::util::Random* generator;
};

#endif // _ScatteringRead_h_