#ifndef _javax_net_ssl_HandshakeCompletedEvent_h_
#define _javax_net_ssl_HandshakeCompletedEvent_h_
//$ class javax.net.ssl.HandshakeCompletedEvent
//$ extends java.util.EventObject

#include <java/lang/Array.h>
#include <java/util/EventObject.h>

namespace java {
	namespace security {
		class Principal;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
			class SSLSocket;
		}
	}
}
namespace javax {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import HandshakeCompletedEvent : public ::java::util::EventObject {
	$class(HandshakeCompletedEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	HandshakeCompletedEvent();
	void init$(::javax::net::ssl::SSLSocket* sock, ::javax::net::ssl::SSLSession* s);
	virtual $String* getCipherSuite();
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates();
	virtual ::java::security::Principal* getLocalPrincipal();
	virtual $Array<::javax::security::cert::X509Certificate>* getPeerCertificateChain();
	virtual $Array<::java::security::cert::Certificate>* getPeerCertificates();
	virtual ::java::security::Principal* getPeerPrincipal();
	virtual ::javax::net::ssl::SSLSession* getSession();
	virtual ::javax::net::ssl::SSLSocket* getSocket();
	static const int64_t serialVersionUID = (int64_t)0x6DD7999712948132;
	::javax::net::ssl::SSLSession* session = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_HandshakeCompletedEvent_h_