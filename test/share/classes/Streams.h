#ifndef _Streams_h_
#define _Streams_h_
//$ class Streams
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_THREADS")
#undef NUM_THREADS

namespace java {
	namespace net {
		class ServerSocket;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Phaser;
		}
	}
}

class $export Streams : public ::java::lang::Object {
	$class(Streams, 0, ::java::lang::Object)
public:
	Streams();
	void init$();
	static void main($StringArray* args);
	static void runTest($Class* klass, ::java::net::ServerSocket* ss);
	static const int32_t NUM_THREADS = 100;
	static $volatile(bool) failed;
	static ::java::util::concurrent::Phaser* startingGate;
};

#pragma pop_macro("NUM_THREADS")

#endif // _Streams_h_