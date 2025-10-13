#ifndef _sun_net_ftp_FtpClient$TransferType_h_
#define _sun_net_ftp_FtpClient$TransferType_h_
//$ class sun.net.ftp.FtpClient$TransferType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ASCII")
#undef ASCII
#pragma push_macro("BINARY")
#undef BINARY
#pragma push_macro("EBCDIC")
#undef EBCDIC

namespace sun {
	namespace net {
		namespace ftp {

class FtpClient$TransferType : public ::java::lang::Enum {
	$class(FtpClient$TransferType, 0, ::java::lang::Enum)
public:
	FtpClient$TransferType();
	static $Array<::sun::net::ftp::FtpClient$TransferType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::ftp::FtpClient$TransferType* valueOf($String* name);
	static $Array<::sun::net::ftp::FtpClient$TransferType>* values();
	static ::sun::net::ftp::FtpClient$TransferType* ASCII;
	static ::sun::net::ftp::FtpClient$TransferType* BINARY;
	static ::sun::net::ftp::FtpClient$TransferType* EBCDIC;
	static $Array<::sun::net::ftp::FtpClient$TransferType>* $VALUES;
};

		} // ftp
	} // net
} // sun

#pragma pop_macro("ASCII")
#pragma pop_macro("BINARY")
#pragma pop_macro("EBCDIC")

#endif // _sun_net_ftp_FtpClient$TransferType_h_