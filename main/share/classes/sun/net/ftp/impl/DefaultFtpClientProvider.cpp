#include <sun/net/ftp/impl/DefaultFtpClientProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/ftp/FtpClient.h>
#include <sun/net/ftp/FtpClientProvider.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpClient = ::sun::net::ftp::FtpClient;
using $FtpClientProvider = ::sun::net::ftp::FtpClientProvider;
using $1FtpClient = ::sun::net::ftp::impl::FtpClient;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

$MethodInfo _DefaultFtpClientProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFtpClientProvider::*)()>(&DefaultFtpClientProvider::init$))},
	{"createFtpClient", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultFtpClientProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ftp.impl.DefaultFtpClientProvider",
	"sun.net.ftp.FtpClientProvider",
	nullptr,
	nullptr,
	_DefaultFtpClientProvider_MethodInfo_
};

$Object* allocate$DefaultFtpClientProvider($Class* clazz) {
	return $of($alloc(DefaultFtpClientProvider));
}

void DefaultFtpClientProvider::init$() {
	$FtpClientProvider::init$();
}

$FtpClient* DefaultFtpClientProvider::createFtpClient() {
	return $1FtpClient::create();
}

DefaultFtpClientProvider::DefaultFtpClientProvider() {
}

$Class* DefaultFtpClientProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultFtpClientProvider, name, initialize, &_DefaultFtpClientProvider_ClassInfo_, allocate$DefaultFtpClientProvider);
	return class$;
}

$Class* DefaultFtpClientProvider::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun