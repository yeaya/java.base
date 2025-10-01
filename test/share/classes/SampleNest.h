#ifndef _SampleNest_h_
#define _SampleNest_h_
//$ class SampleNest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

class $export SampleNest : public ::java::lang::Object {
	$class(SampleNest, 0, ::java::lang::Object)
public:
	SampleNest();
	void init$();
	static void gather($Class* c);
	static $ClassArray* nestedTypes();
	static ::java::util::List* _nestedTypes;
};

#endif // _SampleNest_h_