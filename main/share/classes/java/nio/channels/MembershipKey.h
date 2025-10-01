#ifndef _java_nio_channels_MembershipKey_h_
#define _java_nio_channels_MembershipKey_h_
//$ class java.nio.channels.MembershipKey
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
			class MulticastChannel;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export MembershipKey : public ::java::lang::Object {
	$class(MembershipKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MembershipKey();
	void init$();
	virtual ::java::nio::channels::MembershipKey* block(::java::net::InetAddress* source) {return nullptr;}
	virtual ::java::nio::channels::MulticastChannel* channel() {return nullptr;}
	virtual void drop() {}
	virtual ::java::net::InetAddress* group() {return nullptr;}
	virtual bool isValid() {return false;}
	virtual ::java::net::NetworkInterface* networkInterface() {return nullptr;}
	virtual ::java::net::InetAddress* sourceAddress() {return nullptr;}
	virtual ::java::nio::channels::MembershipKey* unblock(::java::net::InetAddress* source) {return nullptr;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_MembershipKey_h_