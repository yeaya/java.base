#ifndef _LotsOfWrites_h_
#define _LotsOfWrites_h_
//$ class LotsOfWrites
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export LotsOfWrites : public ::java::lang::Object {
	$class(LotsOfWrites, 0, ::java::lang::Object)
public:
	LotsOfWrites();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* rand;
};

#endif // _LotsOfWrites_h_