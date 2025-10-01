#ifndef _ClosedByInterrupt_h_
#define _ClosedByInterrupt_h_
//$ class ClosedByInterrupt
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("K")
#undef K

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export ClosedByInterrupt : public ::java::lang::Object {
	$class(ClosedByInterrupt, 0, ::java::lang::Object)
public:
	ClosedByInterrupt();
	void init$();
	static void expected(::java::lang::Exception* e);
	static void expected($String* msg);
	static void main($StringArray* args);
	static void test(::java::io::File* f, int32_t nThreads);
	static void unexpected(::java::lang::Exception* e);
	static void unexpected($String* msg);
	static const int32_t K = 1024;
	static ::java::util::Random* rand;
	static $volatile(bool) failed;
};

#pragma pop_macro("K")

#endif // _ClosedByInterrupt_h_