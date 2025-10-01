#ifndef _sun_net_ftp_FtpDirEntry$Permission_h_
#define _sun_net_ftp_FtpDirEntry$Permission_h_
//$ class sun.net.ftp.FtpDirEntry$Permission
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GROUP")
#undef GROUP
#pragma push_macro("OTHERS")
#undef OTHERS
#pragma push_macro("USER")
#undef USER

namespace sun {
	namespace net {
		namespace ftp {

class FtpDirEntry$Permission : public ::java::lang::Enum {
	$class(FtpDirEntry$Permission, 0, ::java::lang::Enum)
public:
	FtpDirEntry$Permission();
	static $Array<::sun::net::ftp::FtpDirEntry$Permission>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t v);
	static ::sun::net::ftp::FtpDirEntry$Permission* valueOf($String* name);
	static $Array<::sun::net::ftp::FtpDirEntry$Permission>* values();
	static ::sun::net::ftp::FtpDirEntry$Permission* USER;
	static ::sun::net::ftp::FtpDirEntry$Permission* GROUP;
	static ::sun::net::ftp::FtpDirEntry$Permission* OTHERS;
	static $Array<::sun::net::ftp::FtpDirEntry$Permission>* $VALUES;
	int32_t value = 0;
};

		} // ftp
	} // net
} // sun

#pragma pop_macro("GROUP")
#pragma pop_macro("OTHERS")
#pragma pop_macro("USER")

#endif // _sun_net_ftp_FtpDirEntry$Permission_h_