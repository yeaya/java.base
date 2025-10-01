#ifndef _sun_net_www_protocol_https_HttpsURLConnectionImpl_h_
#define _sun_net_www_protocol_https_HttpsURLConnectionImpl_h_
//$ class sun.net.www.protocol.https.HttpsURLConnectionImpl
//$ extends javax.net.ssl.HttpsURLConnection

#include <java/lang/Array.h>
#include <javax/net/ssl/HttpsURLConnection.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class Authenticator;
		class Proxy;
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
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
namespace java {
	namespace util {
		class Map;
		class Optional;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {
					class DelegateHttpsURLConnection;
					class Handler;
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {

class HttpsURLConnectionImpl : public ::javax::net::ssl::HttpsURLConnection {
	$class(HttpsURLConnectionImpl, $NO_CLASS_INIT, ::javax::net::ssl::HttpsURLConnection)
public:
	HttpsURLConnectionImpl();
	void init$(::java::net::URL* u, ::sun::net::www::protocol::https::Handler* handler);
	void init$(::java::net::URL* u, ::java::net::Proxy* p, ::sun::net::www::protocol::https::Handler* handler);
	virtual void addRequestProperty($String* key, $String* value) override;
	static ::java::net::URL* checkURL(::java::net::URL* u);
	virtual void connect() override;
	virtual void disconnect() override;
	virtual bool equals(Object$* obj) override;
	virtual bool getAllowUserInteraction() override;
	virtual $String* getCipherSuite() override;
	virtual int32_t getConnectTimeout() override;
	virtual $Object* getContent() override;
	virtual $Object* getContent($ClassArray* classes) override;
	virtual $String* getContentEncoding() override;
	virtual int32_t getContentLength() override;
	virtual int64_t getContentLengthLong() override;
	virtual $String* getContentType() override;
	virtual int64_t getDate() override;
	virtual bool getDefaultUseCaches() override;
	virtual bool getDoInput() override;
	virtual bool getDoOutput() override;
	virtual ::java::io::InputStream* getErrorStream() override;
	virtual int64_t getExpiration() override;
	virtual $String* getHeaderField($String* name) override;
	virtual $String* getHeaderField(int32_t n) override;
	virtual int64_t getHeaderFieldDate($String* name, int64_t Default) override;
	virtual int32_t getHeaderFieldInt($String* name, int32_t Default) override;
	virtual $String* getHeaderFieldKey(int32_t n) override;
	virtual int64_t getHeaderFieldLong($String* name, int64_t Default) override;
	virtual ::java::util::Map* getHeaderFields() override;
	virtual int64_t getIfModifiedSince() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual bool getInstanceFollowRedirects() override;
	virtual int64_t getLastModified() override;
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates() override;
	virtual ::java::security::Principal* getLocalPrincipal() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::security::Principal* getPeerPrincipal() override;
	virtual ::java::security::Permission* getPermission() override;
	virtual int32_t getReadTimeout() override;
	virtual $String* getRequestMethod() override;
	virtual ::java::util::Map* getRequestProperties() override;
	virtual $String* getRequestProperty($String* key) override;
	virtual int32_t getResponseCode() override;
	virtual $String* getResponseMessage() override;
	virtual ::java::util::Optional* getSSLSession() override;
	virtual $Array<::java::security::cert::Certificate>* getServerCertificates() override;
	virtual ::java::net::URL* getURL() override;
	virtual bool getUseCaches() override;
	virtual int32_t hashCode() override;
	virtual bool isConnected();
	virtual void setAllowUserInteraction(bool allowuserinteraction) override;
	virtual void setAuthenticator(::java::net::Authenticator* auth) override;
	virtual void setChunkedStreamingMode(int32_t chunklen) override;
	virtual void setConnectTimeout(int32_t timeout) override;
	virtual void setConnected(bool conn);
	virtual void setDefaultUseCaches(bool defaultusecaches) override;
	virtual void setDoInput(bool doinput) override;
	virtual void setDoOutput(bool dooutput) override;
	virtual void setFixedLengthStreamingMode(int32_t contentLength) override;
	virtual void setFixedLengthStreamingMode(int64_t contentLength) override;
	virtual void setIfModifiedSince(int64_t ifmodifiedsince) override;
	virtual void setInstanceFollowRedirects(bool shouldFollow) override;
	virtual void setNewClient(::java::net::URL* url);
	virtual void setNewClient(::java::net::URL* url, bool useCache);
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort);
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache);
	virtual void setReadTimeout(int32_t timeout) override;
	virtual void setRequestMethod($String* method) override;
	virtual void setRequestProperty($String* key, $String* value) override;
	virtual void setUseCaches(bool usecaches) override;
	virtual $String* toString() override;
	virtual bool usingProxy() override;
	::sun::net::www::protocol::https::DelegateHttpsURLConnection* delegate = nullptr;
};

				} // https
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_https_HttpsURLConnectionImpl_h_