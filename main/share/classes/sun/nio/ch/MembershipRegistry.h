#ifndef _sun_nio_ch_MembershipRegistry_h_
#define _sun_nio_ch_MembershipRegistry_h_
//$ class sun.nio.ch.MembershipRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class MembershipKey;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class MembershipKeyImpl;
			class MembershipRegistry$ThrowingConsumer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class MembershipRegistry : public ::java::lang::Object {
	$class(MembershipRegistry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MembershipRegistry();
	void init$();
	virtual void add(::sun::nio::ch::MembershipKeyImpl* key);
	virtual ::java::nio::channels::MembershipKey* checkMembership(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source);
	virtual void forEach(::sun::nio::ch::MembershipRegistry$ThrowingConsumer* action);
	virtual void invalidateAll();
	virtual void remove(::sun::nio::ch::MembershipKeyImpl* key);
	::java::util::Map* groups = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_MembershipRegistry_h_