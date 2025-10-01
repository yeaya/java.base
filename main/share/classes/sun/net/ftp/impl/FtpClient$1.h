#ifndef _sun_net_ftp_impl_FtpClient$1_h_
#define _sun_net_ftp_impl_FtpClient$1_h_
//$ class sun.net.ftp.impl.FtpClient$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

class FtpClient$1 : public ::java::security::PrivilegedAction {
	$class(FtpClient$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FtpClient$1();
	void init$($StringArray* val$acceptPasvAddress, $ints* val$vals);
	virtual $Object* run() override;
	$ints* val$vals = nullptr;
	$StringArray* val$acceptPasvAddress = nullptr;
};

			} // impl
		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_impl_FtpClient$1_h_