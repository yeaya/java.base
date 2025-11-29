#include <sun/net/ftp/FtpDirParser.h>

#include <sun/net/ftp/FtpDirEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace ftp {

$MethodInfo _FtpDirParser_MethodInfo_[] = {
	{"parseLine", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FtpDirParser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.ftp.FtpDirParser",
	nullptr,
	nullptr,
	nullptr,
	_FtpDirParser_MethodInfo_
};

$Object* allocate$FtpDirParser($Class* clazz) {
	return $of($alloc(FtpDirParser));
}

$Class* FtpDirParser::load$($String* name, bool initialize) {
	$loadClass(FtpDirParser, name, initialize, &_FtpDirParser_ClassInfo_, allocate$FtpDirParser);
	return class$;
}

$Class* FtpDirParser::class$ = nullptr;

		} // ftp
	} // net
} // sun