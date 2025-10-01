#ifndef _SelectPipe_h_
#define _SelectPipe_h_
//$ class SelectPipe
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export SelectPipe : public ::java::lang::Object {
	$class(SelectPipe, 0, ::java::lang::Object)
public:
	SelectPipe();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _SelectPipe_h_