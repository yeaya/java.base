#ifndef _CloseDuringWrite_h_
#define _CloseDuringWrite_h_
//$ class CloseDuringWrite
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export CloseDuringWrite : public ::java::lang::Object {
	$class(CloseDuringWrite, 0, ::java::lang::Object)
public:
	CloseDuringWrite();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* rand;
};

#endif // _CloseDuringWrite_h_