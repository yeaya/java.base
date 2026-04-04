#include <sun/net/ftp/impl/DefaultFtpClientProvider.h>
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

void DefaultFtpClientProvider::init$() {
	$FtpClientProvider::init$();
}

$FtpClient* DefaultFtpClientProvider::createFtpClient() {
	return $1FtpClient::create();
}

DefaultFtpClientProvider::DefaultFtpClientProvider() {
}

$Class* DefaultFtpClientProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultFtpClientProvider, init$, void)},
		{"createFtpClient", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC, $virtualMethod(DefaultFtpClientProvider, createFtpClient, $FtpClient*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.ftp.impl.DefaultFtpClientProvider",
		"sun.net.ftp.FtpClientProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultFtpClientProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultFtpClientProvider);
	});
	return class$;
}

$Class* DefaultFtpClientProvider::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun