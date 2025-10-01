#ifndef _java_net_InetAddress$PlatformNameService_h_
#define _java_net_InetAddress$PlatformNameService_h_
//$ class java.net.InetAddress$PlatformNameService
//$ extends java.net.InetAddress$NameService

#include <java/lang/Array.h>
#include <java/net/InetAddress$NameService.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$PlatformNameService : public ::java::net::InetAddress$NameService {
	$class(InetAddress$PlatformNameService, $NO_CLASS_INIT, ::java::net::InetAddress$NameService)
public:
	InetAddress$PlatformNameService();
	void init$();
	virtual $String* getHostByAddr($bytes* addr) override;
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* host) override;
};

	} // net
} // java

#endif // _java_net_InetAddress$PlatformNameService_h_