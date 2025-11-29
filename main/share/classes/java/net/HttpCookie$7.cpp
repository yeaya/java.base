#include <java/net/HttpCookie$7.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$7::*)()>(&HttpCookie$7::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$7_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$7_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$7", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$7",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$7_MethodInfo_,
	nullptr,
	&_HttpCookie$7_EnclosingMethodInfo_,
	_HttpCookie$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$7($Class* clazz) {
	return $of($alloc(HttpCookie$7));
}

void HttpCookie$7::init$() {
}

void HttpCookie$7::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getPortlist() == nullptr) {
		cookie->setPortlist(attrValue == nullptr ? ""_s : attrValue);
	}
}

HttpCookie$7::HttpCookie$7() {
}

$Class* HttpCookie$7::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$7, name, initialize, &_HttpCookie$7_ClassInfo_, allocate$HttpCookie$7);
	return class$;
}

$Class* HttpCookie$7::class$ = nullptr;

	} // net
} // java