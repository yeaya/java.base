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

$FieldInfo _HttpURLConnection$3_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$3, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$3_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$3::*)($HttpURLConnection*)>(&HttpURLConnection$3::init$))},
	{"run", "()Ljava/net/ResponseCache;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$3_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"<init>",
	"(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;)V"
};

$InnerClassInfo _HttpURLConnection$3_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_HttpURLConnection$3_FieldInfo_,
	_HttpURLConnection$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ResponseCache;>;",
	&_HttpURLConnection$3_EnclosingMethodInfo_,
	_HttpURLConnection$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$3($Class* clazz) {
	return $of($alloc(HttpURLConnection$3));
}

void HttpURLConnection$3::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$3::run() {
	return $of($ResponseCache::getDefault());
}

HttpURLConnection$3::HttpURLConnection$3() {
}

$Class* HttpURLConnection$3::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$3, name, initialize, &_HttpURLConnection$3_ClassInfo_, allocate$HttpURLConnection$3);
	return class$;
}

$Class* HttpURLConnection$3::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun