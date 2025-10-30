#include <java/net/HttpCookie$2.h>

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

$MethodInfo _HttpCookie$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$2::*)()>(&HttpCookie$2::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$2_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$2_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$2", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$2",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$2_MethodInfo_,
	nullptr,
	&_HttpCookie$2_EnclosingMethodInfo_,
	_HttpCookie$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$2($Class* clazz) {
	return $of($alloc(HttpCookie$2));
}

void HttpCookie$2::init$() {
}

void HttpCookie$2::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getCommentURL() == nullptr) {
		cookie->setCommentURL(attrValue);
	}
}

HttpCookie$2::HttpCookie$2() {
}

$Class* HttpCookie$2::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$2, name, initialize, &_HttpCookie$2_ClassInfo_, allocate$HttpCookie$2);
	return class$;
}

$Class* HttpCookie$2::class$ = nullptr;

	} // net
} // java