#include <sun/net/www/protocol/http/HttpURLConnection$11.h>
#include <java/net/InetAddress.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$11::init$($HttpURLConnection* this$0, $String* val$finalHost) {
	$set(this, this$0, this$0);
	$set(this, val$finalHost, val$finalHost);
}

$Object* HttpURLConnection$11::run() {
	return $InetAddress::getByName(this->val$finalHost);
}

HttpURLConnection$11::HttpURLConnection$11() {
}

$Class* HttpURLConnection$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$11, this$0)},
		{"val$finalHost", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$11, val$finalHost)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/lang/String;)V", nullptr, 0, $method(HttpURLConnection$11, init$, void, $HttpURLConnection*, $String*)},
		{"run", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$11, run, $Object*), "java.net.UnknownHostException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"getHttpProxyAuthentication",
		"(Lsun/net/www/protocol/http/AuthenticationHeader;)Lsun/net/www/protocol/http/AuthenticationInfo;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$11",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/InetAddress;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$11);
	});
	return class$;
}

$Class* HttpURLConnection$11::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun