#ifndef _sun_security_ssl_Alert$AlertMessage_h_
#define _sun_security_ssl_Alert$AlertMessage_h_
//$ class sun.security.ssl.Alert$AlertMessage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Alert$AlertMessage : public ::java::lang::Object {
	$class(Alert$AlertMessage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Alert$AlertMessage();
	void init$(::sun::security::ssl::TransportContext* context, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	int8_t level = 0;
	int8_t id = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Alert$AlertMessage_h_