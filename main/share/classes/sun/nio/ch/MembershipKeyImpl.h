#ifndef _sun_nio_ch_MembershipKeyImpl_h_
#define _sun_nio_ch_MembershipKeyImpl_h_
//$ class sun.nio.ch.MembershipKeyImpl
//$ extends java.nio.channels.MembershipKey

#include <java/nio/channels/MembershipKey.h>

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
	namespace util {
		class HashSet;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class MembershipKeyImpl : public ::java::nio::channels::MembershipKey {
	$class(MembershipKeyImpl, $NO_CLASS_INIT, ::java::nio::channels::MembershipKey)
public:
	MembershipKeyImpl();
	void init$(::java::nio::channels::MulticastChannel* ch, ::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source);
	virtual ::java::nio::channels::MembershipKey* block(::java::net::InetAddress* toBlock) override;
	virtual ::java::nio::channels::MulticastChannel* channel() override;
	virtual void drop() override;
	virtual ::java::net::InetAddress* group() override;
	virtual void invalidate();
	virtual bool isValid() override;
	virtual ::java::net::NetworkInterface* networkInterface() override;
	virtual ::java::net::InetAddress* sourceAddress() override;
	virtual $String* toString() override;
	virtual ::java::nio::channels::MembershipKey* unblock(::java::net::InetAddress* toUnblock) override;
	::java::nio::channels::MulticastChannel* ch = nullptr;
	::java::net::InetAddress* group$ = nullptr;
	::java::net::NetworkInterface* interf = nullptr;
	::java::net::InetAddress* source = nullptr;
	$volatile(bool) invalid = false;
	$Object* stateLock = nullptr;
	::java::util::HashSet* blockedSet = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_MembershipKeyImpl_h_