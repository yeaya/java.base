#ifndef _sun_net_ftp_FtpDirParser_h_
#define _sun_net_ftp_FtpDirParser_h_
//$ interface sun.net.ftp.FtpDirParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class FtpDirParser : public ::java::lang::Object {
	$interface(FtpDirParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::net::ftp::FtpDirEntry* parseLine($String* line) {return nullptr;}
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpDirParser_h_