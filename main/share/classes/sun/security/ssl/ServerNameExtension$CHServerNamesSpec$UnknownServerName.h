#ifndef _sun_security_ssl_ServerNameExtension$CHServerNamesSpec$UnknownServerName_h_
#define _sun_security_ssl_ServerNameExtension$CHServerNamesSpec$UnknownServerName_h_
//$ class sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName
//$ extends javax.net.ssl.SNIServerName

#include <java/lang/Array.h>
#include <javax/net/ssl/SNIServerName.h>

namespace sun {
	namespace security {
		namespace ssl {

class ServerNameExtension$CHServerNamesSpec$UnknownServerName : public ::javax::net::ssl::SNIServerName {
	$class(ServerNameExtension$CHServerNamesSpec$UnknownServerName, $NO_CLASS_INIT, ::javax::net::ssl::SNIServerName)
public:
	ServerNameExtension$CHServerNamesSpec$UnknownServerName();
	void init$(int32_t code, $bytes* encoded);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerNameExtension$CHServerNamesSpec$UnknownServerName_h_