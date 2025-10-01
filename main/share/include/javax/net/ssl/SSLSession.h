#ifndef _javax_net_ssl_SSLSession_h_
#define _javax_net_ssl_SSLSession_h_
//$ interface javax.net.ssl.SSLSession
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			class SSLSessionContext;
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

class $import SSLSession : public ::java::lang::Object {
	$interface(SSLSession, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getApplicationBufferSize() {return 0;}
	virtual $String* getCipherSuite() {return nullptr;}
	virtual int64_t getCreationTime() {return 0;}
	virtual $bytes* getId() {return nullptr;}
	virtual int64_t getLastAccessedTime() {return 0;}
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates() {return nullptr;}
	virtual ::java::security::Principal* getLocalPrincipal() {return nullptr;}
	virtual int32_t getPacketBufferSize() {return 0;}
	virtual $Array<::javax::security::cert::X509Certificate>* getPeerCertificateChain();
	virtual $Array<::java::security::cert::Certificate>* getPeerCertificates() {return nullptr;}
	virtual $String* getPeerHost() {return nullptr;}
	virtual int32_t getPeerPort() {return 0;}
	virtual ::java::security::Principal* getPeerPrincipal() {return nullptr;}
	virtual $String* getProtocol() {return nullptr;}
	virtual ::javax::net::ssl::SSLSessionContext* getSessionContext() {return nullptr;}
	virtual $Object* getValue($String* name) {return nullptr;}
	virtual $StringArray* getValueNames() {return nullptr;}
	virtual void invalidate() {}
	virtual bool isValid() {return false;}
	virtual void putValue($String* name, Object$* value) {}
	virtual void removeValue($String* name) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSession_h_