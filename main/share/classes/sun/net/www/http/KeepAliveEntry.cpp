#include <sun/net/www/http/KeepAliveEntry.h>
#include <sun/net/www/http/HttpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClient = ::sun::net::www::http::HttpClient;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

void KeepAliveEntry::init$($HttpClient* hc, int64_t idleStartTime) {
	$set(this, hc, hc);
	this->idleStartTime = idleStartTime;
}

KeepAliveEntry::KeepAliveEntry() {
}

$Class* KeepAliveEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hc", "Lsun/net/www/http/HttpClient;", nullptr, 0, $field(KeepAliveEntry, hc)},
		{"idleStartTime", "J", nullptr, 0, $field(KeepAliveEntry, idleStartTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/http/HttpClient;J)V", nullptr, 0, $method(KeepAliveEntry, init$, void, $HttpClient*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeepAliveEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveEntry);
	});
	return class$;
}

$Class* KeepAliveEntry::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun