#include <sun/net/www/protocol/http/HttpURLConnection$3.h>
#include <java/net/ResponseCache.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResponseCache = ::java::net::ResponseCache;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$3::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$3::run() {
	return $ResponseCache::getDefault();
}

HttpURLConnection$3::HttpURLConnection$3() {
}

$Class* HttpURLConnection$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(HttpURLConnection$3, init$, void, $HttpURLConnection*)},
		{"run", "()Ljava/net/ResponseCache;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"<init>",
		"(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ResponseCache;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$3);
	});
	return class$;
}

$Class* HttpURLConnection$3::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun