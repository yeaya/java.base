#ifndef _sun_nio_ch_SocketOptionRegistry$LazyInitialization_h_
#define _sun_nio_ch_SocketOptionRegistry$LazyInitialization_h_
//$ class sun.nio.ch.SocketOptionRegistry$LazyInitialization
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketOptionRegistry$LazyInitialization : public ::java::lang::Object {
	$class(SocketOptionRegistry$LazyInitialization, 0, ::java::lang::Object)
public:
	SocketOptionRegistry$LazyInitialization();
	void init$();
	static ::java::util::Map* options();
	static ::java::util::Map* options$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketOptionRegistry$LazyInitialization_h_