#ifndef _sun_net_www_protocol_ftp_FtpURLConnection_h_
#define _sun_net_www_protocol_ftp_FtpURLConnection_h_
//$ class sun.net.www.protocol.ftp.FtpURLConnection
//$ extends sun.net.www.URLConnection

#include <sun/net/www/URLConnection.h>

#pragma push_macro("BIN")
#undef BIN
#pragma push_macro("ASCII")
#undef ASCII
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("DIR")
#undef DIR

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class Proxy;
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace sun {
	namespace net {
		namespace ftp {
			class FtpClient;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class HttpURLConnection;
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

class $import FtpURLConnection : public ::sun::net::www::URLConnection {
	$class(FtpURLConnection, $NO_CLASS_INIT, ::sun::net::www::URLConnection)
public:
	FtpURLConnection();
	void init$(::java::net::URL* url);
	void init$(::java::net::URL* url, ::java::net::Proxy* p);
	void cd($String* path);
	static ::java::net::URL* checkURL(::java::net::URL* u);
	virtual void connect() override;
	void decodePath($String* path);
	virtual int32_t getConnectTimeout() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::security::Permission* getPermission() override;
	virtual int32_t getReadTimeout() override;
	virtual $String* getRequestProperty($String* key) override;
	virtual $String* guessContentTypeFromFilename($String* fname);
	virtual void setConnectTimeout(int32_t timeout) override;
	virtual void setReadTimeout(int32_t timeout) override;
	virtual void setRequestProperty($String* key, $String* value) override;
	void setTimeouts();
	::sun::net::www::protocol::http::HttpURLConnection* http = nullptr;
	::java::net::Proxy* instProxy = nullptr;
	::java::io::InputStream* is = nullptr;
	::java::io::OutputStream* os = nullptr;
	::sun::net::ftp::FtpClient* ftp = nullptr;
	::java::security::Permission* permission = nullptr;
	$String* password = nullptr;
	$String* user = nullptr;
	$String* host = nullptr;
	$String* pathname = nullptr;
	$String* filename = nullptr;
	$String* fullpath = nullptr;
	int32_t port = 0;
	static const int32_t NONE = 0;
	static const int32_t ASCII = 1;
	static const int32_t BIN = 2;
	static const int32_t DIR = 3;
	int32_t type = 0;
	int32_t connectTimeout = 0;
	int32_t readTimeout = 0;
};

				} // ftp
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("BIN")
#pragma pop_macro("ASCII")
#pragma pop_macro("NONE")
#pragma pop_macro("DIR")

#endif // _sun_net_www_protocol_ftp_FtpURLConnection_h_