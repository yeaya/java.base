#ifndef _sun_net_ftp_FtpLoginException_h_
#define _sun_net_ftp_FtpLoginException_h_
//$ class sun.net.ftp.FtpLoginException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace net {
		namespace ftp {

class FtpLoginException : public ::java::io::IOException {
	$class(FtpLoginException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	FtpLoginException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x1ec87ef4131fd120;
	FtpLoginException(const FtpLoginException& e);
	virtual void throw$() override;
	inline FtpLoginException* operator ->() const {
		return (FtpLoginException*)throwing$;
	}
	inline operator FtpLoginException*() const {
		return (FtpLoginException*)throwing$;
	}
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpLoginException_h_