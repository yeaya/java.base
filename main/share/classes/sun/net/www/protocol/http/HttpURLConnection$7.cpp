#include <sun/net/www/protocol/http/HttpURLConnection$7.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProxySelector.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$7_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$7, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$7_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$7::*)($HttpURLConnection*)>(&HttpURLConnection$7::init$))},
	{"run", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$7_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"plainConnect0",
	"()V"
};

$InnerClassInfo _HttpURLConnection$7_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$7",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_HttpURLConnection$7_FieldInfo_,
	_HttpURLConnection$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ProxySelector;>;",
	&_HttpURLConnection$7_EnclosingMethodInfo_,
	_HttpURLConnection$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$7($Class* clazz) {
	return $of($alloc(HttpURLConnection$7));
}

void HttpURLConnection$7::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$7::run() {
	return $of($ProxySelector::getDefault());
}

HttpURLConnection$7::HttpURLConnection$7() {
}

$Class* HttpURLConnection$7::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$7, name, initialize, &_HttpURLConnection$7_ClassInfo_, allocate$HttpURLConnection$7);
	return class$;
}

$Class* HttpURLConnection$7::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun