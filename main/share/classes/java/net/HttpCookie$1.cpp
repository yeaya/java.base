#include <java/net/HttpCookie$1.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$1::*)()>(&HttpCookie$1::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$1_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$1_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$1", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$1",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$1_MethodInfo_,
	nullptr,
	&_HttpCookie$1_EnclosingMethodInfo_,
	_HttpCookie$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$1($Class* clazz) {
	return $of($alloc(HttpCookie$1));
}

void HttpCookie$1::init$() {
}

void HttpCookie$1::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getComment() == nullptr) {
		cookie->setComment(attrValue);
	}
}

HttpCookie$1::HttpCookie$1() {
}

$Class* HttpCookie$1::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$1, name, initialize, &_HttpCookie$1_ClassInfo_, allocate$HttpCookie$1);
	return class$;
}

$Class* HttpCookie$1::class$ = nullptr;

	} // net
} // java