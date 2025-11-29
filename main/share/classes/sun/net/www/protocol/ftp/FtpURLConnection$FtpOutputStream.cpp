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

$FieldInfo _FtpURLConnection$FtpOutputStream_FieldInfo_[] = {
	{"ftp", "Lsun/net/ftp/FtpClient;", nullptr, 0, $field(FtpURLConnection$FtpOutputStream, ftp)},
	{}
};

$MethodInfo _FtpURLConnection$FtpOutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/ftp/FtpClient;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(FtpURLConnection$FtpOutputStream::*)($FtpClient*,$OutputStream*)>(&FtpURLConnection$FtpOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FtpURLConnection$FtpOutputStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.ftp.FtpURLConnection$FtpOutputStream", "sun.net.www.protocol.ftp.FtpURLConnection", "FtpOutputStream", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _FtpURLConnection$FtpOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.ftp.FtpURLConnection$FtpOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_FtpURLConnection$FtpOutputStream_FieldInfo_,
	_FtpURLConnection$FtpOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FtpURLConnection$FtpOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.ftp.FtpURLConnection"
};

$Object* allocate$FtpURLConnection$FtpOutputStream($Class* clazz) {
	return $of($alloc(FtpURLConnection$FtpOutputStream));
}

void FtpURLConnection$FtpOutputStream::init$($FtpClient* cl, $OutputStream* fd) {
	$FilterOutputStream::init$(fd);
	$set(this, ftp, cl);
}

void FtpURLConnection$FtpOutputStream::close() {
	$FilterOutputStream::close();
	if (this->ftp != nullptr) {
		$nc(this->ftp)->close();
	}
}

FtpURLConnection$FtpOutputStream::FtpURLConnection$FtpOutputStream() {
}

$Class* FtpURLConnection$FtpOutputStream::load$($String* name, bool initialize) {
	$loadClass(FtpURLConnection$FtpOutputStream, name, initialize, &_FtpURLConnection$FtpOutputStream_ClassInfo_, allocate$FtpURLConnection$FtpOutputStream);
	return class$;
}

$Class* FtpURLConnection$FtpOutputStream::class$ = nullptr;

				} // ftp
			} // protocol
		} // www
	} // net
} // sun