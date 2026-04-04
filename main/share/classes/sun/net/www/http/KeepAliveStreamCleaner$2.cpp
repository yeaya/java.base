#include <sun/net/www/http/KeepAliveStreamCleaner$2.h>
#include <sun/net/NetProperties.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_CAPACITY

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

void KeepAliveStreamCleaner$2::init$() {
}

$Object* KeepAliveStreamCleaner$2::run() {
	$init($KeepAliveStreamCleaner);
	return $of($NetProperties::getInteger("http.KeepAlive.queuedConnections"_s, $KeepAliveStreamCleaner::MAX_CAPACITY));
}

KeepAliveStreamCleaner$2::KeepAliveStreamCleaner$2() {
}

$Class* KeepAliveStreamCleaner$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeepAliveStreamCleaner$2, init$, void)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(KeepAliveStreamCleaner$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.KeepAliveStreamCleaner",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.KeepAliveStreamCleaner$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveStreamCleaner$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.http.KeepAliveStreamCleaner"
	};
	$loadClass(KeepAliveStreamCleaner$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveStreamCleaner$2);
	});
	return class$;
}

$Class* KeepAliveStreamCleaner$2::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun