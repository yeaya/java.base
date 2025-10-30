#include <sun/net/www/protocol/http/HttpURLConnection$8.h>

#include <java/io/OutputStream.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
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

$FieldInfo _HttpURLConnection$8_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$8, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$8_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$8::*)($HttpURLConnection*)>(&HttpURLConnection$8::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$8_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"getOutputStream",
	"()Ljava/io/OutputStream;"
};

$InnerClassInfo _HttpURLConnection$8_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$8",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpURLConnection$8_FieldInfo_,
	_HttpURLConnection$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/OutputStream;>;",
	&_HttpURLConnection$8_EnclosingMethodInfo_,
	_HttpURLConnection$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$8($Class* clazz) {
	return $of($alloc(HttpURLConnection$8));
}

void HttpURLConnection$8::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$8::run() {
	return $of(this->this$0->getOutputStream0());
}

HttpURLConnection$8::HttpURLConnection$8() {
}

$Class* HttpURLConnection$8::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$8, name, initialize, &_HttpURLConnection$8_ClassInfo_, allocate$HttpURLConnection$8);
	return class$;
}

$Class* HttpURLConnection$8::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun