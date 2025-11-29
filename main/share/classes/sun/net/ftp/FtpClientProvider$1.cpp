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

$MethodInfo _FtpClientProvider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FtpClientProvider$1::*)()>(&FtpClientProvider$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FtpClientProvider$1_EnclosingMethodInfo_ = {
	"sun.net.ftp.FtpClientProvider",
	"provider",
	"()Lsun/net/ftp/FtpClientProvider;"
};

$InnerClassInfo _FtpClientProvider$1_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpClientProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FtpClientProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.ftp.FtpClientProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FtpClientProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_FtpClientProvider$1_EnclosingMethodInfo_,
	_FtpClientProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpClientProvider"
};

$Object* allocate$FtpClientProvider$1($Class* clazz) {
	return $of($alloc(FtpClientProvider$1));
}

void FtpClientProvider$1::init$() {
}

$Object* FtpClientProvider$1::run() {
	if ($FtpClientProvider::loadProviderFromProperty()) {
		$init($FtpClientProvider);
		return $of($FtpClientProvider::provider$);
	}
	if ($FtpClientProvider::loadProviderAsService()) {
		return $of($FtpClientProvider::provider$);
	}
	$assignStatic($FtpClientProvider::provider$, $new($DefaultFtpClientProvider));
	return $of($FtpClientProvider::provider$);
}

FtpClientProvider$1::FtpClientProvider$1() {
}

$Class* FtpClientProvider$1::load$($String* name, bool initialize) {
	$loadClass(FtpClientProvider$1, name, initialize, &_FtpClientProvider$1_ClassInfo_, allocate$FtpClientProvider$1);
	return class$;
}

$Class* FtpClientProvider$1::class$ = nullptr;

		} // ftp
	} // net
} // sun