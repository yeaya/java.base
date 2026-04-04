#include <sun/net/www/protocol/http/HttpURLConnection$12.h>
#include <java/net/URL.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$12::init$($HttpURLConnection* this$0, $String* val$loc, int32_t val$stat, $URL* val$locUrl0) {
	$set(this, this$0, this$0);
	$set(this, val$loc, val$loc);
	this->val$stat = val$stat;
	$set(this, val$locUrl0, val$locUrl0);
}

$Object* HttpURLConnection$12::run() {
	return $of($Boolean::valueOf(this->this$0->followRedirect0(this->val$loc, this->val$stat, this->val$locUrl0)));
}

HttpURLConnection$12::HttpURLConnection$12() {
}

$Class* HttpURLConnection$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$12, this$0)},
		{"val$locUrl0", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$12, val$locUrl0)},
		{"val$stat", "I", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$12, val$stat)},
		{"val$loc", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$12, val$loc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/lang/String;ILjava/net/URL;)V", nullptr, 0, $method(HttpURLConnection$12, init$, void, $HttpURLConnection*, $String*, int32_t, $URL*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$12, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"followRedirect",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$12",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$12);
	});
	return class$;
}

$Class* HttpURLConnection$12::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun