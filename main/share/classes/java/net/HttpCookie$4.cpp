#include <java/net/HttpCookie$4.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HttpCookie$4, init$, void)},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$4, assign, void, $HttpCookie*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _HttpCookie$4_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$4_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$4", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$4",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$4_MethodInfo_,
	nullptr,
	&_HttpCookie$4_EnclosingMethodInfo_,
	_HttpCookie$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$4($Class* clazz) {
	return $of($alloc(HttpCookie$4));
}

void HttpCookie$4::init$() {
}

void HttpCookie$4::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getDomain() == nullptr) {
		cookie->setDomain(attrValue);
	}
}

HttpCookie$4::HttpCookie$4() {
}

$Class* HttpCookie$4::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$4, name, initialize, &_HttpCookie$4_ClassInfo_, allocate$HttpCookie$4);
	return class$;
}

$Class* HttpCookie$4::class$ = nullptr;

	} // net
} // java