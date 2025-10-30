#include <java/net/HttpCookie$10.h>

#include <java/lang/NumberFormatException.h>
#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $HttpCookie = ::java::net::HttpCookie;
using $HttpCookie$CookieAttributeAssignor = ::java::net::HttpCookie$CookieAttributeAssignor;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$10::*)()>(&HttpCookie$10::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$10_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$10_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$10", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$10_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$10",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$10_MethodInfo_,
	nullptr,
	&_HttpCookie$10_EnclosingMethodInfo_,
	_HttpCookie$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$10($Class* clazz) {
	return $of($alloc(HttpCookie$10));
}

void HttpCookie$10::init$() {
}

void HttpCookie$10::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	try {
		int32_t version = $Integer::parseInt(attrValue);
		$nc(cookie)->setVersion(version);
	} catch ($NumberFormatException& ignored) {
	}
}

HttpCookie$10::HttpCookie$10() {
}

$Class* HttpCookie$10::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$10, name, initialize, &_HttpCookie$10_ClassInfo_, allocate$HttpCookie$10);
	return class$;
}

$Class* HttpCookie$10::class$ = nullptr;

	} // net
} // java