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

$FieldInfo _HttpURLConnection$2_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$2, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$2_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(HttpURLConnection$2, init$, void, $HttpURLConnection*)},
	{"run", "()Ljava/net/CookieHandler;", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$2_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"<init>",
	"(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;)V"
};

$InnerClassInfo _HttpURLConnection$2_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_HttpURLConnection$2_FieldInfo_,
	_HttpURLConnection$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/CookieHandler;>;",
	&_HttpURLConnection$2_EnclosingMethodInfo_,
	_HttpURLConnection$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$2($Class* clazz) {
	return $of($alloc(HttpURLConnection$2));
}

void HttpURLConnection$2::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$2::run() {
	return $of($CookieHandler::getDefault());
}

HttpURLConnection$2::HttpURLConnection$2() {
}

$Class* HttpURLConnection$2::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$2, name, initialize, &_HttpURLConnection$2_ClassInfo_, allocate$HttpURLConnection$2);
	return class$;
}

$Class* HttpURLConnection$2::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun