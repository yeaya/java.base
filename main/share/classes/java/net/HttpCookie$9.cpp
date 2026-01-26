#include <java/net/HttpCookie$9.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HttpCookie$9, init$, void)},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$9, assign, void, $HttpCookie*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _HttpCookie$9_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$9_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$9", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$9_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$9",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$9_MethodInfo_,
	nullptr,
	&_HttpCookie$9_EnclosingMethodInfo_,
	_HttpCookie$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$9($Class* clazz) {
	return $of($alloc(HttpCookie$9));
}

void HttpCookie$9::init$() {
}

void HttpCookie$9::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	$nc(cookie)->setHttpOnly(true);
}

HttpCookie$9::HttpCookie$9() {
}

$Class* HttpCookie$9::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$9, name, initialize, &_HttpCookie$9_ClassInfo_, allocate$HttpCookie$9);
	return class$;
}

$Class* HttpCookie$9::class$ = nullptr;

	} // net
} // java