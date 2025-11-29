#include <sun/net/www/http/HttpCapture$1.h>

#include <sun/net/NetProperties.h>
#include <sun/net/www/http/HttpCapture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$MethodInfo _HttpCapture$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCapture$1::*)()>(&HttpCapture$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCapture$1_EnclosingMethodInfo_ = {
	"sun.net.www.http.HttpCapture",
	"init",
	"()V"
};

$InnerClassInfo _HttpCapture$1_InnerClassesInfo_[] = {
	{"sun.net.www.http.HttpCapture$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpCapture$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.HttpCapture$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_HttpCapture$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_HttpCapture$1_EnclosingMethodInfo_,
	_HttpCapture$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.HttpCapture"
};

$Object* allocate$HttpCapture$1($Class* clazz) {
	return $of($alloc(HttpCapture$1));
}

void HttpCapture$1::init$() {
}

$Object* HttpCapture$1::run() {
	return $of($NetProperties::get("sun.net.http.captureRules"_s));
}

HttpCapture$1::HttpCapture$1() {
}

$Class* HttpCapture$1::load$($String* name, bool initialize) {
	$loadClass(HttpCapture$1, name, initialize, &_HttpCapture$1_ClassInfo_, allocate$HttpCapture$1);
	return class$;
}

$Class* HttpCapture$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun