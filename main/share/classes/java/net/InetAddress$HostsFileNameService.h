#ifndef _java_net_InetAddress$HostsFileNameService_h_
#define _java_net_InetAddress$HostsFileNameService_h_
//$ class java.net.InetAddress$HostsFileNameService
//$ extends java.net.InetAddress$NameService

#include <java/lang/Array.h>
#include <java/net/InetAddress$NameService.h>

#pragma push_macro("EMPTY_ARRAY")
#undef EMPTY_ARRAY

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace net {

class InetAddress$HostsFileNameService : public ::java::net::InetAddress$NameService {
	$class(InetAddress$HostsFileNameService, 0, ::java::net::InetAddress$NameService)
public:
	InetAddress$HostsFileNameService();
	void init$($String* hostsFileName);
	static ::java::util::List* concatAddresses(::java::util::List* firstPart, ::java::util::List* secondPart);
	$bytes* createAddressByteArray($String* addrStr);
	$String* extractHostAddr($String* hostEntry, $String* host);
	virtual $String* getHostByAddr($bytes* addr) override;
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* host) override;
	$String* removeComments($String* hostsEntry);
	static $Array<::java::net::InetAddress>* EMPTY_ARRAY;
	static bool preferIPv4Stack;
	$String* hostsFile = nullptr;
};

	} // net
} // java

#pragma pop_macro("EMPTY_ARRAY")

#endif // _java_net_InetAddress$HostsFileNameService_h_