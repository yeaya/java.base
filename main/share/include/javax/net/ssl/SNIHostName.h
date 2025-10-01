#ifndef _javax_net_ssl_SNIHostName_h_
#define _javax_net_ssl_SNIHostName_h_
//$ class javax.net.ssl.SNIHostName
//$ extends javax.net.ssl.SNIServerName

#include <java/lang/Array.h>
#include <javax/net/ssl/SNIServerName.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SNIMatcher;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SNIHostName : public ::javax::net::ssl::SNIServerName {
	$class(SNIHostName, $NO_CLASS_INIT, ::javax::net::ssl::SNIServerName)
public:
	SNIHostName();
	void init$($String* hostname);
	void init$($bytes* encoded);
	void checkHostName();
	static ::javax::net::ssl::SNIMatcher* createSNIMatcher($String* regex);
	virtual bool equals(Object$* other) override;
	$String* getAsciiName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* hostname = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SNIHostName_h_