#include <sun/net/www/http/HttpClient$1.h>
#include <java/net/InetSocketAddress.h>
#include <sun/net/www/http/HttpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $HttpClient = ::sun::net::www::http::HttpClient;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

void HttpClient$1::init$($HttpClient* this$0, $InetSocketAddress* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

$Object* HttpClient$1::run() {
	$var($String, var$0, $nc(this->val$server)->getHostString());
	this->this$0->openServer(var$0, this->val$server->getPort());
	return nullptr;
}

HttpClient$1::HttpClient$1() {
}

$Class* HttpClient$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/http/HttpClient;", nullptr, $FINAL | $SYNTHETIC, $field(HttpClient$1, this$0)},
		{"val$server", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(HttpClient$1, val$server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/http/HttpClient;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(HttpClient$1, init$, void, $HttpClient*, $InetSocketAddress*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(HttpClient$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.HttpClient",
		"privilegedOpenServer",
		"(Ljava/net/InetSocketAddress;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.HttpClient$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.HttpClient$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.http.HttpClient"
	};
	$loadClass(HttpClient$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClient$1);
	});
	return class$;
}

$Class* HttpClient$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun