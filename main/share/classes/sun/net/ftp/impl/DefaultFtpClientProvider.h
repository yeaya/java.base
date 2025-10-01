#ifndef _sun_net_ftp_impl_DefaultFtpClientProvider_h_
#define _sun_net_ftp_impl_DefaultFtpClientProvider_h_
//$ class sun.net.ftp.impl.DefaultFtpClientProvider
//$ extends sun.net.ftp.FtpClientProvider

#include <sun/net/ftp/FtpClientProvider.h>

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
			namespace impl {

class DefaultFtpClientProvider : public ::sun::net::ftp::FtpClientProvider {
	$class(DefaultFtpClientProvider, $NO_CLASS_INIT, ::sun::net::ftp::FtpClientProvider)
public:
	DefaultFtpClientProvider();
	void init$();
	virtual ::sun::net::ftp::FtpClient* createFtpClient() override;
};

			} // impl
		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_impl_DefaultFtpClientProvider_h_