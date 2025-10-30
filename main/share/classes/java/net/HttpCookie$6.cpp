#include <java/net/HttpCookie$6.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $HttpCookie$CookieAttributeAssignor = ::java::net::HttpCookie$CookieAttributeAssignor;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$6::*)()>(&HttpCookie$6::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$6_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$6_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$6", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$6",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$6_MethodInfo_,
	nullptr,
	&_HttpCookie$6_EnclosingMethodInfo_,
	_HttpCookie$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$6($Class* clazz) {
	return $of($alloc(HttpCookie$6));
}

void HttpCookie$6::init$() {
}

void HttpCookie$6::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getPath() == nullptr) {
		cookie->setPath(attrValue);
	}
}

HttpCookie$6::HttpCookie$6() {
}

$Class* HttpCookie$6::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$6, name, initialize, &_HttpCookie$6_ClassInfo_, allocate$HttpCookie$6);
	return class$;
}

$Class* HttpCookie$6::class$ = nullptr;

	} // net
} // java