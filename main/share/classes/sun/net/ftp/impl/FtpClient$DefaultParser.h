#ifndef _sun_net_ftp_impl_FtpClient$DefaultParser_h_
#define _sun_net_ftp_impl_FtpClient$DefaultParser_h_
//$ class sun.net.ftp.impl.FtpClient$DefaultParser
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
				class FtpClient;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

class FtpClient$DefaultParser : public ::sun::net::ftp::FtpDirParser {
	$class(FtpClient$DefaultParser, $NO_CLASS_INIT, ::sun::net::ftp::FtpDirParser)
public:
	FtpClient$DefaultParser();
	void init$(::sun::net::ftp::impl::FtpClient* this$0);
	virtual ::sun::net::ftp::FtpDirEntry* parseLine($String* line) override;
	::sun::net::ftp::impl::FtpClient* this$0 = nullptr;
};

			} // impl
		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_impl_FtpClient$DefaultParser_h_