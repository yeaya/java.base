#ifndef _sun_net_www_protocol_ftp_FtpURLConnection$1_h_
#define _sun_net_www_protocol_ftp_FtpURLConnection$1_h_
//$ class sun.net.www.protocol.ftp.FtpURLConnection$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {
					class FtpURLConnection;
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

class $export FtpURLConnection$1 : public ::java::security::PrivilegedAction {
	$class(FtpURLConnection$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FtpURLConnection$1();
	void init$(::sun::net::www::protocol::ftp::FtpURLConnection* this$0);
	virtual $Object* run() override;
	::sun::net::www::protocol::ftp::FtpURLConnection* this$0 = nullptr;
};

				} // ftp
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_ftp_FtpURLConnection$1_h_