#ifndef _sun_net_ftp_FtpClientProvider_h_
#define _sun_net_ftp_FtpClientProvider_h_
//$ class sun.net.ftp.FtpClientProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace ftp {
			class FtpClient;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {

class FtpClientProvider : public ::java::lang::Object {
	$class(FtpClientProvider, 0, ::java::lang::Object)
public:
	FtpClientProvider();
	void init$();
	virtual ::sun::net::ftp::FtpClient* createFtpClient() {return nullptr;}
	static bool loadProviderAsService();
	static bool loadProviderFromProperty();
	static ::sun::net::ftp::FtpClientProvider* provider();
	static $Object* lock;
	static ::sun::net::ftp::FtpClientProvider* provider$;
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpClientProvider_h_