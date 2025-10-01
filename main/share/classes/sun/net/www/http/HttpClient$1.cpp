#include <sun/net/www/http/HttpClient$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <sun/net/www/http/HttpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $HttpClient = ::sun::net::www::http::HttpClient;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _HttpClient$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/http/HttpClient;", nullptr, $FINAL | $SYNTHETIC, $field(HttpClient$1, this$0)},
	{"val$server", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(HttpClient$1, val$server)},
	{}
};

$MethodInfo _HttpClient$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/http/HttpClient;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(static_cast<void(HttpClient$1::*)($HttpClient*,$InetSocketAddress*)>(&HttpClient$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpClient$1_EnclosingMethodInfo_ = {
	"sun.net.www.http.HttpClient",
	"privilegedOpenServer",
	"(Ljava/net/InetSocketAddress;)V"
};

$InnerClassInfo _HttpClient$1_InnerClassesInfo_[] = {
	{"sun.net.www.http.HttpClient$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpClient$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.HttpClient$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpClient$1_FieldInfo_,
	_HttpClient$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_HttpClient$1_EnclosingMethodInfo_,
	_HttpClient$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.HttpClient"
};

$Object* allocate$HttpClient$1($Class* clazz) {
	return $of($alloc(HttpClient$1));
}

void HttpClient$1::init$($HttpClient* this$0, $InetSocketAddress* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

$Object* HttpClient$1::run() {
	$var($String, var$0, $nc(this->val$server)->getHostString());
	this->this$0->openServer(var$0, $nc(this->val$server)->getPort());
	return $of(nullptr);
}

HttpClient$1::HttpClient$1() {
}

$Class* HttpClient$1::load$($String* name, bool initialize) {
	$loadClass(HttpClient$1, name, initialize, &_HttpClient$1_ClassInfo_, allocate$HttpClient$1);
	return class$;
}

$Class* HttpClient$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun