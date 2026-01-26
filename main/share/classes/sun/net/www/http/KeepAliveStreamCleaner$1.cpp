#include <sun/net/www/http/KeepAliveStreamCleaner$1.h>

#include <sun/net/NetProperties.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_DATA_REMAINING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;
using $KeepAliveStreamCleaner = ::sun::net::www::http::KeepAliveStreamCleaner;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$MethodInfo _KeepAliveStreamCleaner$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(KeepAliveStreamCleaner$1, init$, void)},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(KeepAliveStreamCleaner$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _KeepAliveStreamCleaner$1_EnclosingMethodInfo_ = {
	"sun.net.www.http.KeepAliveStreamCleaner",
	nullptr,
	nullptr
};

$InnerClassInfo _KeepAliveStreamCleaner$1_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveStreamCleaner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveStreamCleaner$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveStreamCleaner$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KeepAliveStreamCleaner$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_KeepAliveStreamCleaner$1_EnclosingMethodInfo_,
	_KeepAliveStreamCleaner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveStreamCleaner"
};

$Object* allocate$KeepAliveStreamCleaner$1($Class* clazz) {
	return $of($alloc(KeepAliveStreamCleaner$1));
}

void KeepAliveStreamCleaner$1::init$() {
}

$Object* KeepAliveStreamCleaner$1::run() {
	$init($KeepAliveStreamCleaner);
	return $of($NetProperties::getInteger("http.KeepAlive.remainingData"_s, $KeepAliveStreamCleaner::MAX_DATA_REMAINING));
}

KeepAliveStreamCleaner$1::KeepAliveStreamCleaner$1() {
}

$Class* KeepAliveStreamCleaner$1::load$($String* name, bool initialize) {
	$loadClass(KeepAliveStreamCleaner$1, name, initialize, &_KeepAliveStreamCleaner$1_ClassInfo_, allocate$KeepAliveStreamCleaner$1);
	return class$;
}

$Class* KeepAliveStreamCleaner$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun