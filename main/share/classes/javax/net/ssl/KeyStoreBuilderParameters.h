#ifndef _javax_net_ssl_KeyStoreBuilderParameters_h_
#define _javax_net_ssl_KeyStoreBuilderParameters_h_
//$ class javax.net.ssl.KeyStoreBuilderParameters
//$ extends javax.net.ssl.ManagerFactoryParameters

#include <javax/net/ssl/ManagerFactoryParameters.h>

namespace java {
	namespace security {
		class KeyStore$Builder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export KeyStoreBuilderParameters : public ::javax::net::ssl::ManagerFactoryParameters {
	$class(KeyStoreBuilderParameters, $NO_CLASS_INIT, ::javax::net::ssl::ManagerFactoryParameters)
public:
	KeyStoreBuilderParameters();
	void init$(::java::security::KeyStore$Builder* builder);
	void init$(::java::util::List* parameters);
	virtual ::java::util::List* getParameters();
	::java::util::List* parameters = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_KeyStoreBuilderParameters_h_