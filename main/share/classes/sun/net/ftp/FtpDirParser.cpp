#include <sun/net/ftp/FtpDirParser.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;

namespace sun {
	namespace net {
		namespace ftp {

$Class* FtpDirParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parseLine", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FtpDirParser, parseLine, $FtpDirEntry*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.ftp.FtpDirParser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FtpDirParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpDirParser);
	});
	return class$;
}

$Class* FtpDirParser::class$ = nullptr;

		} // ftp
	} // net
} // sun