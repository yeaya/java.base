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

void KeepAliveStreamCleaner$1::init$() {
}

$Object* KeepAliveStreamCleaner$1::run() {
	$init($KeepAliveStreamCleaner);
	return $of($NetProperties::getInteger("http.KeepAlive.remainingData"_s, $KeepAliveStreamCleaner::MAX_DATA_REMAINING));
}

KeepAliveStreamCleaner$1::KeepAliveStreamCleaner$1() {
}

$Class* KeepAliveStreamCleaner$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeepAliveStreamCleaner$1, init$, void)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(KeepAliveStreamCleaner$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.KeepAliveStreamCleaner",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.KeepAliveStreamCleaner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveStreamCleaner$1",
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
	$loadClass(KeepAliveStreamCleaner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveStreamCleaner$1);
	});
	return class$;
}

$Class* KeepAliveStreamCleaner$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun