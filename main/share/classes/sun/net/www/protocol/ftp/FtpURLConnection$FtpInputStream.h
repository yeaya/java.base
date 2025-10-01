#ifndef _sun_net_www_protocol_ftp_FtpURLConnection$FtpInputStream_h_
#define _sun_net_www_protocol_ftp_FtpURLConnection$FtpInputStream_h_
//$ class sun.net.www.protocol.ftp.FtpURLConnection$FtpInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
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

class $export FtpURLConnection$FtpInputStream : public ::java::io::FilterInputStream {
	$class(FtpURLConnection$FtpInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	FtpURLConnection$FtpInputStream();
	void init$(::sun::net::ftp::FtpClient* cl, ::java::io::InputStream* fd);
	virtual void close() override;
	::sun::net::ftp::FtpClient* ftp = nullptr;
};

				} // ftp
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_ftp_FtpURLConnection$FtpInputStream_h_