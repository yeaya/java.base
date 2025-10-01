#ifndef _sun_net_www_protocol_mailto_MailToURLConnection_h_
#define _sun_net_www_protocol_mailto_MailToURLConnection_h_
//$ class sun.net.www.protocol.mailto.MailToURLConnection
//$ extends sun.net.www.URLConnection

#include <sun/net/www/URLConnection.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
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
		namespace smtp {
			class SmtpClient;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace mailto {

class MailToURLConnection : public ::sun::net::www::URLConnection {
	$class(MailToURLConnection, $NO_CLASS_INIT, ::sun::net::www::URLConnection)
public:
	MailToURLConnection();
	void init$(::java::net::URL* u);
	virtual void connect() override;
	virtual int32_t getConnectTimeout() override;
	virtual $String* getFromAddress();
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::security::Permission* getPermission() override;
	virtual int32_t getReadTimeout() override;
	virtual void setConnectTimeout(int32_t timeout) override;
	virtual void setReadTimeout(int32_t timeout) override;
	::java::io::InputStream* is = nullptr;
	::java::io::OutputStream* os = nullptr;
	::sun::net::smtp::SmtpClient* client = nullptr;
	::java::security::Permission* permission = nullptr;
	int32_t connectTimeout = 0;
	int32_t readTimeout = 0;
};

				} // mailto
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_mailto_MailToURLConnection_h_