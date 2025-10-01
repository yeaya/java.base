#ifndef _java_net_Inet6Address_h_
#define _java_net_Inet6Address_h_
//$ class java.net.Inet6Address
//$ extends java.net.InetAddress

#include <java/lang/Array.h>
#include <java/net/InetAddress.h>

#pragma push_macro("INADDRSZ")
#undef INADDRSZ
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("INT16SZ")
#undef INT16SZ
#pragma push_macro("FIELDS_OFFSET")
#undef FIELDS_OFFSET

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace net {
		class Inet6Address$Inet6AddressHolder;
		class NetworkInterface;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace net {

class $import Inet6Address : public ::java::net::InetAddress {
	$class(Inet6Address, 0, ::java::net::InetAddress)
public:
	Inet6Address();
	void init$();
	void init$($String* hostName, $bytes* addr, int32_t scope_id);
	void init$($String* hostName, $bytes* addr);
	void init$($String* hostName, $bytes* addr, ::java::net::NetworkInterface* nif);
	void init$($String* hostName, $bytes* addr, $String* ifname);
	$bytes* addressBytes();
	static int32_t deriveNumericScope($bytes* thisAddr, ::java::net::NetworkInterface* ifc);
	int32_t deriveNumericScope($String* ifname);
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getAddress() override;
	static ::java::net::Inet6Address* getByAddress($String* host, $bytes* addr, ::java::net::NetworkInterface* nif);
	static ::java::net::Inet6Address* getByAddress($String* host, $bytes* addr, int32_t scope_id);
	virtual $String* getHostAddress() override;
	int32_t getScopeId();
	::java::net::NetworkInterface* getScopedInterface();
	virtual int32_t hashCode() override;
	static void init();
	void initif($String* hostName, $bytes* addr, ::java::net::NetworkInterface* nif);
	void initstr($String* hostName, $bytes* addr, $String* ifname);
	virtual bool isAnyLocalAddress() override;
	static bool isDifferentLocalAddressType($bytes* thisAddr, $bytes* otherAddr);
	bool isIPv4CompatibleAddress();
	virtual bool isLinkLocalAddress() override;
	static bool isLinkLocalAddress($bytes* ipaddress);
	virtual bool isLoopbackAddress() override;
	virtual bool isMCGlobal() override;
	virtual bool isMCLinkLocal() override;
	virtual bool isMCNodeLocal() override;
	virtual bool isMCOrgLocal() override;
	virtual bool isMCSiteLocal() override;
	virtual bool isMulticastAddress() override;
	virtual bool isSiteLocalAddress() override;
	static bool isSiteLocalAddress($bytes* ipaddress);
	static $String* numericToTextFormat($bytes* src);
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t INADDRSZ = 16;
	::java::net::Inet6Address$Inet6AddressHolder* holder6 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x5F7C2081522C8021;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t FIELDS_OFFSET;
	static const int32_t INT16SZ = 2;
};

	} // net
} // java

#pragma pop_macro("INADDRSZ")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("INT16SZ")
#pragma pop_macro("FIELDS_OFFSET")

#endif // _java_net_Inet6Address_h_