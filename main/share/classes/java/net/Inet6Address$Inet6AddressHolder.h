#ifndef _java_net_Inet6Address$Inet6AddressHolder_h_
#define _java_net_Inet6Address$Inet6AddressHolder_h_
//$ class java.net.Inet6Address$Inet6AddressHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

namespace java {
	namespace net {

class Inet6Address$Inet6AddressHolder : public ::java::lang::Object {
	$class(Inet6Address$Inet6AddressHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Inet6Address$Inet6AddressHolder();
	void init$();
	void init$($bytes* ipaddress, int32_t scope_id, bool scope_id_set, ::java::net::NetworkInterface* ifname, bool scope_ifname_set);
	virtual bool equals(Object$* o) override;
	virtual $String* getHostAddress();
	virtual int32_t hashCode() override;
	virtual void init($bytes* addr, int32_t scope_id);
	virtual void init($bytes* addr, ::java::net::NetworkInterface* nif);
	virtual bool isAnyLocalAddress();
	virtual bool isIPv4CompatibleAddress();
	virtual bool isLinkLocalAddress();
	virtual bool isLoopbackAddress();
	virtual bool isMCGlobal();
	virtual bool isMCLinkLocal();
	virtual bool isMCNodeLocal();
	virtual bool isMCOrgLocal();
	virtual bool isMCSiteLocal();
	virtual bool isMulticastAddress();
	virtual bool isSiteLocalAddress();
	virtual void setAddr($bytes* addr);
	$bytes* ipaddress = nullptr;
	int32_t scope_id = 0;
	bool scope_id_set = false;
	::java::net::NetworkInterface* scope_ifname = nullptr;
	bool scope_ifname_set = false;
};

	} // net
} // java

#endif // _java_net_Inet6Address$Inet6AddressHolder_h_