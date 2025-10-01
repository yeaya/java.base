#ifndef _sun_net_ftp_FtpClientProvider$1_h_
#define _sun_net_ftp_FtpClientProvider$1_h_
//$ class sun.net.ftp.FtpClientProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace ftp {

class FtpClientProvider$1 : public ::java::security::PrivilegedAction {
	$class(FtpClientProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FtpClientProvider$1();
	void init$();
	virtual $Object* run() override;
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpClientProvider$1_h_