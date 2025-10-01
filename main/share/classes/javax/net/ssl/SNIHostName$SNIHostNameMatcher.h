#ifndef _javax_net_ssl_SNIHostName$SNIHostNameMatcher_h_
#define _javax_net_ssl_SNIHostName$SNIHostNameMatcher_h_
//$ class javax.net.ssl.SNIHostName$SNIHostNameMatcher
//$ extends javax.net.ssl.SNIMatcher

#include <javax/net/ssl/SNIMatcher.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SNIServerName;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class SNIHostName$SNIHostNameMatcher : public ::javax::net::ssl::SNIMatcher {
	$class(SNIHostName$SNIHostNameMatcher, $NO_CLASS_INIT, ::javax::net::ssl::SNIMatcher)
public:
	SNIHostName$SNIHostNameMatcher();
	void init$($String* regex);
	virtual bool matches(::javax::net::ssl::SNIServerName* serverName) override;
	::java::util::regex::Pattern* pattern = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SNIHostName$SNIHostNameMatcher_h_