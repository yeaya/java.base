#include <sun/net/www/protocol/http/HttpURLConnection$6.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$6::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$6::run() {
	this->this$0->plainConnect0();
	return nullptr;
}

HttpURLConnection$6::HttpURLConnection$6() {
}

$Class* HttpURLConnection$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(HttpURLConnection$6, init$, void, $HttpURLConnection*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$6, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"plainConnect",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$6",
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
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$6);
	});
	return class$;
}

$Class* HttpURLConnection$6::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun