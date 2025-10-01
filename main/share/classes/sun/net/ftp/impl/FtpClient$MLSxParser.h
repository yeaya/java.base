#ifndef _sun_net_ftp_impl_FtpClient$MLSxParser_h_
#define _sun_net_ftp_impl_FtpClient$MLSxParser_h_
//$ class sun.net.ftp.impl.FtpClient$MLSxParser
//$ extends sun.net.ftp.FtpDirParser

#include <sun/net/ftp/FtpDirParser.h>

namespace sun {
	namespace net {
		namespace ftp {
			class FtpDirEntry;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

class FtpClient$MLSxParser : public ::sun::net::ftp::FtpDirParser {
	$class(FtpClient$MLSxParser, $NO_CLASS_INIT, ::sun::net::ftp::FtpDirParser)
public:
	FtpClient$MLSxParser();
	void init$();
	virtual ::sun::net::ftp::FtpDirEntry* parseLine($String* line) override;
};

			} // impl
		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_impl_FtpClient$MLSxParser_h_