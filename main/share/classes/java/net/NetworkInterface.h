#ifndef _java_net_NetworkInterface_h_
#define _java_net_NetworkInterface_h_
//$ class java.net.NetworkInterface
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
		class InterfaceAddress;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace net {

class $export NetworkInterface : public ::java::lang::Object {
	$class(NetworkInterface, 0, ::java::lang::Object)
public:
	NetworkInterface();
	void init$();
	void init$($String* name, int32_t index, $Array<::java::net::InetAddress>* addrs);
	static bool boundInetAddress0(::java::net::InetAddress* addr);
	static ::java::util::Enumeration* enumerationFromArray($ObjectArray* a);
	virtual bool equals(Object$* obj) override;
	static $Array<::java::net::NetworkInterface>* getAll();
	static ::java::net::NetworkInterface* getByIndex(int32_t index);
	static ::java::net::NetworkInterface* getByIndex0(int32_t index);
	static ::java::net::NetworkInterface* getByInetAddress(::java::net::InetAddress* addr);
	static ::java::net::NetworkInterface* getByInetAddress0(::java::net::InetAddress* addr);
	static ::java::net::NetworkInterface* getByName($String* name);
	static ::java::net::NetworkInterface* getByName0($String* name);
	$Array<::java::net::InetAddress>* getCheckedInetAddresses();
	static ::java::net::NetworkInterface* getDefault();
	$String* getDisplayName();
	$bytes* getHardwareAddress();
	int32_t getIndex();
	::java::util::Enumeration* getInetAddresses();
	::java::util::List* getInterfaceAddresses();
	int32_t getMTU();
	static int32_t getMTU0($String* name, int32_t ind);
	static $bytes* getMacAddr0($bytes* inAddr, $String* name, int32_t ind);
	$String* getName();
	static ::java::util::Enumeration* getNetworkInterfaces();
	::java::net::NetworkInterface* getParent();
	::java::util::Enumeration* getSubInterfaces();
	virtual int32_t hashCode() override;
	::java::util::stream::Stream* inetAddresses();
	static void init();
	static bool isBoundInetAddress(::java::net::InetAddress* addr);
	bool isLoopback();
	static bool isLoopback0($String* name, int32_t ind);
	static bool isP2P0($String* name, int32_t ind);
	bool isPointToPoint();
	bool isUp();
	static bool isUp0($String* name, int32_t ind);
	bool isVirtual();
	static ::java::util::stream::Stream* networkInterfaces();
	static ::java::util::stream::Stream* streamFromArray($ObjectArray* a);
	::java::util::stream::Stream* subInterfaces();
	bool supportsMulticast();
	static bool supportsMulticast0($String* name, int32_t ind);
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* displayName = nullptr;
	int32_t index = 0;
	$Array<::java::net::InetAddress>* addrs = nullptr;
	$Array<::java::net::InterfaceAddress>* bindings = nullptr;
	$Array<::java::net::NetworkInterface>* childs = nullptr;
	::java::net::NetworkInterface* parent = nullptr;
	bool virtual$ = false;
	static ::java::net::NetworkInterface* defaultInterface;
	static int32_t defaultIndex;
};

	} // net
} // java

#endif // _java_net_NetworkInterface_h_