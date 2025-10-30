#ifndef _sun_net_ftp_FtpProtocolException_h_
#define _sun_net_ftp_FtpProtocolException_h_
//$ class sun.net.ftp.FtpProtocolException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace net {
		namespace ftp {
			class FtpReplyCode;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {

class FtpProtocolException : public ::java::lang::Exception {
	$class(FtpProtocolException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	FtpProtocolException();
	void init$($String* detail);
	void init$($String* detail, ::sun::net::ftp::FtpReplyCode* code);
	virtual ::sun::net::ftp::FtpReplyCode* getReplyCode();
	static const int64_t serialVersionUID = (int64_t)0x52F6656C15BDCA1E;
	::sun::net::ftp::FtpReplyCode* code = nullptr;
	FtpProtocolException(const FtpProtocolException& e);
	virtual void throw$() override;
	inline FtpProtocolException* operator ->() {
		return (FtpProtocolException*)throwing$;
	}
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpProtocolException_h_