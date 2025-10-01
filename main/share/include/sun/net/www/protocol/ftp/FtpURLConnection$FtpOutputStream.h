#ifndef _sun_net_www_protocol_ftp_FtpURLConnection$FtpOutputStream_h_
#define _sun_net_www_protocol_ftp_FtpURLConnection$FtpOutputStream_h_
//$ class sun.net.www.protocol.ftp.FtpURLConnection$FtpOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>

namespace java {
	namespace io {
		class OutputStream;
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
				namespace ftp {

class $import FtpURLConnection$FtpOutputStream : public ::java::io::FilterOutputStream {
	$class(FtpURLConnection$FtpOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	FtpURLConnection$FtpOutputStream();
	void init$(::sun::net::ftp::FtpClient* cl, ::java::io::OutputStream* fd);
	virtual void close() override;
	::sun::net::ftp::FtpClient* ftp = nullptr;
};

				} // ftp
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_ftp_FtpURLConnection$FtpOutputStream_h_