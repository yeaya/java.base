#ifndef _Restart_h_
#define _Restart_h_
//$ class Restart
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousChannelGroup;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Restart : public ::java::lang::Object {
	$class(Restart, 0, ::java::lang::Object)
public:
	Restart();
	void init$();
	static void main($StringArray* args);
	static void testRestart(::java::nio::channels::AsynchronousChannelGroup* group, int32_t count);
	static ::java::util::Random* rand;
};

#endif // _Restart_h_