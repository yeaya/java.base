#include <sun/net/www/http/KeepAliveStreamCleaner$2.h>

#include <sun/net/NetProperties.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_CAPACITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetProperties = ::sun::net::NetProperties;
using $KeepAliveStreamCleaner = ::sun::net::www::http::KeepAliveStreamCleaner;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$MethodInfo _KeepAliveStreamCleaner$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeepAliveStreamCleaner$2::*)()>(&KeepAliveStreamCleaner$2::init$))},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeepAliveStreamCleaner$2_EnclosingMethodInfo_ = {
	"sun.net.www.http.KeepAliveStreamCleaner",
	nullptr,
	nullptr
};

$InnerClassInfo _KeepAliveStreamCleaner$2_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveStreamCleaner$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveStreamCleaner$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveStreamCleaner$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KeepAliveStreamCleaner$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_KeepAliveStreamCleaner$2_EnclosingMethodInfo_,
	_KeepAliveStreamCleaner$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveStreamCleaner"
};

$Object* allocate$KeepAliveStreamCleaner$2($Class* clazz) {
	return $of($alloc(KeepAliveStreamCleaner$2));
}

void KeepAliveStreamCleaner$2::init$() {
}

$Object* KeepAliveStreamCleaner$2::run() {
	$init($KeepAliveStreamCleaner);
	return $of($NetProperties::getInteger("http.KeepAlive.queuedConnections"_s, $KeepAliveStreamCleaner::MAX_CAPACITY));
}

KeepAliveStreamCleaner$2::KeepAliveStreamCleaner$2() {
}

$Class* KeepAliveStreamCleaner$2::load$($String* name, bool initialize) {
	$loadClass(KeepAliveStreamCleaner$2, name, initialize, &_KeepAliveStreamCleaner$2_ClassInfo_, allocate$KeepAliveStreamCleaner$2);
	return class$;
}

$Class* KeepAliveStreamCleaner$2::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun