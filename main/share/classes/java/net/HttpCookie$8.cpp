#include <java/net/HttpCookie$8.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HttpCookie$8, init$, void)},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$8, assign, void, $HttpCookie*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _HttpCookie$8_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$8_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$8", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$8",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$8_MethodInfo_,
	nullptr,
	&_HttpCookie$8_EnclosingMethodInfo_,
	_HttpCookie$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$8($Class* clazz) {
	return $of($alloc(HttpCookie$8));
}

void HttpCookie$8::init$() {
}

void HttpCookie$8::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	$nc(cookie)->setSecure(true);
}

HttpCookie$8::HttpCookie$8() {
}

$Class* HttpCookie$8::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$8, name, initialize, &_HttpCookie$8_ClassInfo_, allocate$HttpCookie$8);
	return class$;
}

$Class* HttpCookie$8::class$ = nullptr;

	} // net
} // java