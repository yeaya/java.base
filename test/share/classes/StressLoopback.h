#ifndef _StressLoopback_h_
#define _StressLoopback_h_
//$ class StressLoopback
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export StressLoopback : public ::java::lang::Object {
	$class(StressLoopback, 0, ::java::lang::Object)
public:
	StressLoopback();
	void init$();
	static void closeUnchecked(::java::nio::channels::Channel* c);
	static void main($StringArray* args);
	static void waitUntilClosed(::java::nio::channels::Channel* c);
	static ::java::util::Random* rand;
};

#endif // _StressLoopback_h_