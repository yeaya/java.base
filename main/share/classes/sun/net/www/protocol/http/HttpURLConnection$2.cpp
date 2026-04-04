#include <sun/net/www/protocol/http/HttpURLConnection$2.h>
#include <java/net/CookieHandler.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CookieHandler = ::java::net::CookieHandler;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$2::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$2::run() {
	return $CookieHandler::getDefault();
}

HttpURLConnection$2::HttpURLConnection$2() {
}

$Class* HttpURLConnection$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(HttpURLConnection$2, init$, void, $HttpURLConnection*)},
		{"run", "()Ljava/net/CookieHandler;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"<init>",
		"(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/CookieHandler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$2);
	});
	return class$;
}

$Class* HttpURLConnection$2::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun