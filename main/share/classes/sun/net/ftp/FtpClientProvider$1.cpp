#include <sun/net/ftp/FtpClientProvider$1.h>
#include <sun/net/ftp/FtpClientProvider.h>
#include <sun/net/ftp/impl/DefaultFtpClientProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpClientProvider = ::sun::net::ftp::FtpClientProvider;
using $DefaultFtpClientProvider = ::sun::net::ftp::impl::DefaultFtpClientProvider;

namespace sun {
	namespace net {
		namespace ftp {

void FtpClientProvider$1::init$() {
}

$Object* FtpClientProvider$1::run() {
	if ($FtpClientProvider::loadProviderFromProperty()) {
		return $FtpClientProvider::provider$;
	}
	if ($FtpClientProvider::loadProviderAsService()) {
		return $FtpClientProvider::provider$;
	}
	$assignStatic($FtpClientProvider::provider$, $new($DefaultFtpClientProvider));
	return $FtpClientProvider::provider$;
}

FtpClientProvider$1::FtpClientProvider$1() {
}

$Class* FtpClientProvider$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FtpClientProvider$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FtpClientProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.ftp.FtpClientProvider",
		"provider",
		"()Lsun/net/ftp/FtpClientProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.ftp.FtpClientProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.ftp.FtpClientProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.ftp.FtpClientProvider"
	};
	$loadClass(FtpClientProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FtpClientProvider$1);
	});
	return class$;
}

$Class* FtpClientProvider$1::class$ = nullptr;

		} // ftp
	} // net
} // sun