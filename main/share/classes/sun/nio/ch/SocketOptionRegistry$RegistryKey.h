#ifndef _sun_nio_ch_SocketOptionRegistry$RegistryKey_h_
#define _sun_nio_ch_SocketOptionRegistry$RegistryKey_h_
//$ class sun.nio.ch.SocketOptionRegistry$RegistryKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class ProtocolFamily;
		class SocketOption;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketOptionRegistry$RegistryKey : public ::java::lang::Object {
	$class(SocketOptionRegistry$RegistryKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SocketOptionRegistry$RegistryKey();
	void init$(::java::net::SocketOption* name, ::java::net::ProtocolFamily* family);
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	::java::net::SocketOption* name = nullptr;
	::java::net::ProtocolFamily* family = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketOptionRegistry$RegistryKey_h_