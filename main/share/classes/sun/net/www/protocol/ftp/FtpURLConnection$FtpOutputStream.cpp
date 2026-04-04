#include <sun/net/www/protocol/ftp/FtpURLConnection$FtpOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <sun/net/ftp/FtpClient.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpClient = ::sun::net::ftp::FtpClient;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace ftp {

void FtpURLConnection$FtpOutputStream::init$($FtpClient* cl, $OutputStream* fd) {
	$FilterOutputStream::init$(fd);
	$set(this, ftp, cl);
}

void FtpURLConnection$FtpOutputStream::close() {
	$FilterOutputStream::close();
	if (this->ftp != nullptr) {
		this->ftp->close();
	}
}

FtpURLConnection$FtpOutputStream::FtpURLConnection$FtpOutputStream() {
}

$Class* FtpURLConnection$FtpOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ftp", "Lsun/net/ftp/FtpClient;", nullptr, 0, $field(FtpURLConnection$FtpOutputStream, ftp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/ftp/FtpClient;Ljava/io/OutputStream;)V", nullptr, 0, $method(FtpURLConnection$FtpOutputStream, init$, void, $FtpClient*, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FtpURLConnection$FtpOutputStream, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.ftp.FtpURLConnection$FtpOutputStream", "sun.net.www.protocol.ftp.FtpURLConnection", "FtpOutputStream", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.ftp.FtpURLConnection$FtpOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.ftp.FtpURLConnection"
	};
	$loadClass(FtpURLConnection$FtpOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FtpURLConnection$FtpOutputStream));
	});
	return class$;
}

$Class* FtpURLConnection$FtpOutputStream::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun