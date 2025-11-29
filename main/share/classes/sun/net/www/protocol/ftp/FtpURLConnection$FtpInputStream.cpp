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

$FieldInfo _FtpURLConnection$FtpInputStream_FieldInfo_[] = {
	{"ftp", "Lsun/net/ftp/FtpClient;", nullptr, 0, $field(FtpURLConnection$FtpInputStream, ftp)},
	{}
};

$MethodInfo _FtpURLConnection$FtpInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/ftp/FtpClient;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(FtpURLConnection$FtpInputStream::*)($FtpClient*,$InputStream*)>(&FtpURLConnection$FtpInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FtpURLConnection$FtpInputStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.ftp.FtpURLConnection$FtpInputStream", "sun.net.www.protocol.ftp.FtpURLConnection", "FtpInputStream", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _FtpURLConnection$FtpInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.ftp.FtpURLConnection$FtpInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_FtpURLConnection$FtpInputStream_FieldInfo_,
	_FtpURLConnection$FtpInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FtpURLConnection$FtpInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.ftp.FtpURLConnection"
};

$Object* allocate$FtpURLConnection$FtpInputStream($Class* clazz) {
	return $of($alloc(FtpURLConnection$FtpInputStream));
}

void FtpURLConnection$FtpInputStream::init$($FtpClient* cl, $InputStream* fd) {
	$FilterInputStream::init$($$new($BufferedInputStream, fd));
	$set(this, ftp, cl);
}

void FtpURLConnection$FtpInputStream::close() {
	$FilterInputStream::close();
	if (this->ftp != nullptr) {
		$nc(this->ftp)->close();
	}
}

FtpURLConnection$FtpInputStream::FtpURLConnection$FtpInputStream() {
}

$Class* FtpURLConnection$FtpInputStream::load$($String* name, bool initialize) {
	$loadClass(FtpURLConnection$FtpInputStream, name, initialize, &_FtpURLConnection$FtpInputStream_ClassInfo_, allocate$FtpURLConnection$FtpInputStream);
	return class$;
}

$Class* FtpURLConnection$FtpInputStream::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun