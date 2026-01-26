#include <java/net/HttpCookie$11.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$11_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HttpCookie$11, init$, void)},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$11, assign, void, $HttpCookie*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _HttpCookie$11_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$11_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$11", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$11_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$11",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$11_MethodInfo_,
	nullptr,
	&_HttpCookie$11_EnclosingMethodInfo_,
	_HttpCookie$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$11($Class* clazz) {
	return $of($alloc(HttpCookie$11));
}

void HttpCookie$11::init$() {
}

void HttpCookie$11::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getMaxAge() == (int64_t)-1) {
		int64_t delta = cookie->expiryDate2DeltaSeconds(attrValue);
		cookie->setMaxAge(delta > 0 ? delta : (int64_t)0);
	}
}

HttpCookie$11::HttpCookie$11() {
}

$Class* HttpCookie$11::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$11, name, initialize, &_HttpCookie$11_ClassInfo_, allocate$HttpCookie$11);
	return class$;
}

$Class* HttpCookie$11::class$ = nullptr;

	} // net
} // java