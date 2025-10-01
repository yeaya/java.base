#ifndef _java_net_InetAddress_h_
#define _java_net_InetAddress_h_
//$ class java.net.InetAddress
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("PREFER_IPV6_VALUE")
#undef PREFER_IPV6_VALUE
#pragma push_macro("PREFER_IPV4_VALUE")
#undef PREFER_IPV4_VALUE
#pragma push_macro("PREFER_SYSTEM_VALUE")
#undef PREFER_SYSTEM_VALUE
#pragma push_macro("UNSAFE")
#undef UNSAFE
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
		class InetAddress$CachedLocalHost;
		class InetAddress$InetAddressHolder;
		class InetAddress$NameService;
		class InetAddressImpl;
		class NetworkInterface;
	}
}
namespace java {
	namespace util {
		class NavigableSet;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
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

class $export InetAddress : public ::java::io::Serializable {
	$class(InetAddress, 0, ::java::io::Serializable)
public:
	InetAddress();
	void init$();
	static ::java::net::InetAddress* anyLocalAddress();
	static int32_t checkNumericZone($String* s);
	static ::java::net::InetAddress$NameService* createNameService();
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getAddress();
	static $Array<::java::net::InetAddress>* getAddressesFromNameService($String* host, ::java::net::InetAddress* reqAddr);
	static $Array<::java::net::InetAddress>* getAllByName($String* host);
	static $Array<::java::net::InetAddress>* getAllByName($String* host, ::java::net::InetAddress* reqAddr);
	static $Array<::java::net::InetAddress>* getAllByName0($String* host);
	static $Array<::java::net::InetAddress>* getAllByName0($String* host, bool check);
	static $Array<::java::net::InetAddress>* getAllByName0($String* host, ::java::net::InetAddress* reqAddr, bool check, bool useCache);
	static ::java::net::InetAddress* getByAddress($String* host, $bytes* addr);
	static ::java::net::InetAddress* getByAddress($bytes* addr);
	static ::java::net::InetAddress* getByName($String* host);
	static ::java::net::InetAddress* getByName($String* host, ::java::net::InetAddress* reqAddr);
	virtual $String* getCanonicalHostName();
	virtual $String* getHostAddress();
	static $String* getHostFromNameService(::java::net::InetAddress* addr, bool check);
	virtual $String* getHostName();
	virtual $String* getHostName(bool check);
	static ::java::net::InetAddress* getLocalHost();
	static ::java::net::InetAddress* getLoopbackAddress();
	virtual int32_t hashCode() override;
	virtual ::java::net::InetAddress$InetAddressHolder* holder();
	static void init();
	virtual bool isAnyLocalAddress();
	virtual bool isLinkLocalAddress();
	virtual bool isLoopbackAddress();
	virtual bool isMCGlobal();
	virtual bool isMCLinkLocal();
	virtual bool isMCNodeLocal();
	virtual bool isMCOrgLocal();
	virtual bool isMCSiteLocal();
	virtual bool isMulticastAddress();
	virtual bool isReachable(int32_t timeout);
	virtual bool isReachable(::java::net::NetworkInterface* netif, int32_t ttl, int32_t timeout);
	virtual bool isSiteLocalAddress();
	static ::java::net::InetAddressImpl* loadImpl($String* implName);
	void readObject(::java::io::ObjectInputStream* s);
	void readObjectNoData();
	$Object* readResolve();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t PREFER_IPV4_VALUE = 0;
	static const int32_t PREFER_IPV6_VALUE = 1;
	static const int32_t PREFER_SYSTEM_VALUE = 2;
	static const int32_t IPv4 = 1;
	static const int32_t IPv6 = 2;
	static int32_t preferIPv6Address;
	::java::net::InetAddress$InetAddressHolder* holder$ = nullptr;
	static ::java::net::InetAddress$NameService* nameService;
	$String* canonicalHostName = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2D9B57AF9FE3EBDB;
	static ::java::util::concurrent::ConcurrentMap* cache;
	static ::java::util::NavigableSet* expirySet;
	static ::java::net::InetAddressImpl* impl;
	static $volatile(::java::net::InetAddress$CachedLocalHost*) cachedLocalHost;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t FIELDS_OFFSET;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // net
} // java

#pragma pop_macro("PREFER_IPV6_VALUE")
#pragma pop_macro("PREFER_IPV4_VALUE")
#pragma pop_macro("PREFER_SYSTEM_VALUE")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("FIELDS_OFFSET")

#endif // _java_net_InetAddress_h_