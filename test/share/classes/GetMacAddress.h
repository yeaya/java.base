#ifndef _GetMacAddress_h_
#define _GetMacAddress_h_
//$ class GetMacAddress
//$ extends java.util.concurrent.Callable

#include <java/lang/Array.h>
#include <java/util/concurrent/Callable.h>

#pragma push_macro("NUM_ITERS")
#undef NUM_ITERS
#pragma push_macro("NUM_THREADS")
#undef NUM_THREADS

namespace java {
	namespace net {
		class NetworkInterface;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Phaser;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export GetMacAddress : public ::java::util::concurrent::Callable {
	$class(GetMacAddress, 0, ::java::util::concurrent::Callable)
public:
	GetMacAddress();
	void init$(::java::net::NetworkInterface* ni, $String* name, ::java::util::concurrent::Phaser* phaser);
	virtual $Object* call() override;
	static ::java::util::stream::Stream* getNetworkInterfacesAsStream();
	static bool lambda$static$0(::java::net::NetworkInterface* ni);
	static void main($StringArray* args);
	static const int32_t NUM_THREADS = 5;
	static const int32_t NUM_ITERS = 100;
	static $volatile(bool) failed;
	$String* threadName = nullptr;
	::java::net::NetworkInterface* ni = nullptr;
	::java::util::concurrent::Phaser* startingGate = nullptr;
	static ::java::util::function::Predicate* hasHardwareAddress;
};

#pragma pop_macro("NUM_ITERS")
#pragma pop_macro("NUM_THREADS")

#endif // _GetMacAddress_h_