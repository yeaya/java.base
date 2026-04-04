#include <sun/net/www/protocol/http/HttpURLConnection$10.h>
#include <java/io/IOException.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
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

void HttpURLConnection$10::init$($HttpURLConnection* this$0, $IOException* val$rememberedException, $ObjectArray* val$args) {
	$set(this, this$0, this$0);
	$set(this, val$rememberedException, val$rememberedException);
	$set(this, val$args, val$args);
}

$Object* HttpURLConnection$10::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $cast($IOException, $$nc($nc(this->val$rememberedException)->getClass()->getConstructor($$new($ClassArray, {$String::class$})))->newInstance(this->val$args));
}

HttpURLConnection$10::HttpURLConnection$10() {
}

$Class* HttpURLConnection$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$10, this$0)},
		{"val$args", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$10, val$args)},
		{"val$rememberedException", "Ljava/io/IOException;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$10, val$rememberedException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/IOException;[Ljava/lang/Object;)V", nullptr, 0, $method(HttpURLConnection$10, init$, void, $HttpURLConnection*, $IOException*, $ObjectArray*)},
		{"run", "()Ljava/io/IOException;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$10, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.HttpURLConnection",
		"getChainedException",
		"(Ljava/io/IOException;)Ljava/io/IOException;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$10",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/IOException;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$10);
	});
	return class$;
}

$Class* HttpURLConnection$10::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun