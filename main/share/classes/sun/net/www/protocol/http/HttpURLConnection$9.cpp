#include <sun/net/www/protocol/http/HttpURLConnection$9.h>

#include <java/io/InputStream.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$9_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$9, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$9_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$9::*)($HttpURLConnection*)>(&HttpURLConnection$9::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$9_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"getInputStream",
	"()Ljava/io/InputStream;"
};

$InnerClassInfo _HttpURLConnection$9_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$9",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpURLConnection$9_FieldInfo_,
	_HttpURLConnection$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/InputStream;>;",
	&_HttpURLConnection$9_EnclosingMethodInfo_,
	_HttpURLConnection$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$9($Class* clazz) {
	return $of($alloc(HttpURLConnection$9));
}

void HttpURLConnection$9::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$9::run() {
	return $of(this->this$0->getInputStream0());
}

HttpURLConnection$9::HttpURLConnection$9() {
}

$Class* HttpURLConnection$9::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$9, name, initialize, &_HttpURLConnection$9_ClassInfo_, allocate$HttpURLConnection$9);
	return class$;
}

$Class* HttpURLConnection$9::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun