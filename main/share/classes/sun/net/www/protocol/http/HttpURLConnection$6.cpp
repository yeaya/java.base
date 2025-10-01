#include <sun/net/www/protocol/http/HttpURLConnection$6.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

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

$FieldInfo _HttpURLConnection$6_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$6, this$0)},
	{}
};

$MethodInfo _HttpURLConnection$6_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$6::*)($HttpURLConnection*)>(&HttpURLConnection$6::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpURLConnection$6_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.HttpURLConnection",
	"plainConnect",
	"()V"
};

$InnerClassInfo _HttpURLConnection$6_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpURLConnection$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$6",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpURLConnection$6_FieldInfo_,
	_HttpURLConnection$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_HttpURLConnection$6_EnclosingMethodInfo_,
	_HttpURLConnection$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$6($Class* clazz) {
	return $of($alloc(HttpURLConnection$6));
}

void HttpURLConnection$6::init$($HttpURLConnection* this$0) {
	$set(this, this$0, this$0);
}

$Object* HttpURLConnection$6::run() {
	this->this$0->plainConnect0();
	return $of(nullptr);
}

HttpURLConnection$6::HttpURLConnection$6() {
}

$Class* HttpURLConnection$6::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$6, name, initialize, &_HttpURLConnection$6_ClassInfo_, allocate$HttpURLConnection$6);
	return class$;
}

$Class* HttpURLConnection$6::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun