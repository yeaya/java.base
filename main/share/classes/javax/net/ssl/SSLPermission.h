#ifndef _javax_net_ssl_SSLPermission_h_
#define _javax_net_ssl_SSLPermission_h_
//$ class javax.net.ssl.SSLPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLPermission : public ::java::security::BasicPermission {
	$class(SSLPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	SSLPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0xD006A18FACF914D9;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLPermission_h_