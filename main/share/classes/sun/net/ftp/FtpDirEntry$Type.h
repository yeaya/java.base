#ifndef _sun_net_ftp_FtpDirEntry$Type_h_
#define _sun_net_ftp_FtpDirEntry$Type_h_
//$ class sun.net.ftp.FtpDirEntry$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CDIR")
#undef CDIR
#pragma push_macro("DIR")
#undef DIR
#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("LINK")
#undef LINK
#pragma push_macro("PDIR")
#undef PDIR

namespace sun {
	namespace net {
		namespace ftp {

class FtpDirEntry$Type : public ::java::lang::Enum {
	$class(FtpDirEntry$Type, 0, ::java::lang::Enum)
public:
	FtpDirEntry$Type();
	static $Array<::sun::net::ftp::FtpDirEntry$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::ftp::FtpDirEntry$Type* valueOf($String* name);
	static $Array<::sun::net::ftp::FtpDirEntry$Type>* values();
	static ::sun::net::ftp::FtpDirEntry$Type* FILE;
	static ::sun::net::ftp::FtpDirEntry$Type* DIR;
	static ::sun::net::ftp::FtpDirEntry$Type* PDIR;
	static ::sun::net::ftp::FtpDirEntry$Type* CDIR;
	static ::sun::net::ftp::FtpDirEntry$Type* LINK;
	static $Array<::sun::net::ftp::FtpDirEntry$Type>* $VALUES;
};

		} // ftp
	} // net
} // sun

#pragma pop_macro("CDIR")
#pragma pop_macro("DIR")
#pragma pop_macro("FILE")
#pragma pop_macro("LINK")
#pragma pop_macro("PDIR")

#endif // _sun_net_ftp_FtpDirEntry$Type_h_