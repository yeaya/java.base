#include <sun/net/www/protocol/ftp/FtpURLConnection$FtpInputStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <sun/net/ftp/FtpClient.h>
#include <sun/net/www/protocol/ftp/FtpURLConnection.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
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

void FtpURLConnection$FtpInputStream::init$($FtpClient* cl, $InputStream* fd) {
	$FilterInputStream::init$($$new($BufferedInputStream, fd));
	$set(this, ftp, cl);
}

void FtpURLConnection$FtpInputStream::close() {
	$FilterInputStream::close();
	if (this->ftp != nullptr) {
		this->ftp->close();
	}
}

FtpURLConnection$FtpInputStream::FtpURLConnection$FtpInputStream() {
}

$Class* FtpURLConnection$FtpInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ftp", "Lsun/net/ftp/FtpClient;", nullptr, 0, $field(FtpURLConnection$FtpInputStream, ftp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/ftp/FtpClient;Ljava/io/InputStream;)V", nullptr, 0, $method(FtpURLConnection$FtpInputStream, init$, void, $FtpClient*, $InputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FtpURLConnection$FtpInputStream, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.ftp.FtpURLConnection$FtpInputStream", "sun.net.www.protocol.ftp.FtpURLConnection", "FtpInputStream", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.ftp.FtpURLConnection$FtpInputStream",
		"java.io.FilterInputStream",
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
	$loadClass(FtpURLConnection$FtpInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpURLConnection$FtpInputStream);
	});
	return class$;
}

$Class* FtpURLConnection$FtpInputStream::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun