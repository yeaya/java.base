#include <java/net/HttpCookie$5.h>

#include <java/lang/NumberFormatException.h>
#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $HttpCookie = ::java::net::HttpCookie;
using $HttpCookie$CookieAttributeAssignor = ::java::net::HttpCookie$CookieAttributeAssignor;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$5::*)()>(&HttpCookie$5::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$5_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$5_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$5", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$5",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$5_MethodInfo_,
	nullptr,
	&_HttpCookie$5_EnclosingMethodInfo_,
	_HttpCookie$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$5($Class* clazz) {
	return $of($alloc(HttpCookie$5));
}

void HttpCookie$5::init$() {
}

void HttpCookie$5::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	try {
		int64_t maxage = $Long::parseLong(attrValue);
		if ($nc(cookie)->getMaxAge() == (int64_t)-1) {
			cookie->setMaxAge(maxage);
		}
	} catch ($NumberFormatException& ignored) {
		$throwNew($IllegalArgumentException, "Illegal cookie max-age attribute"_s);
	}
}

HttpCookie$5::HttpCookie$5() {
}

$Class* HttpCookie$5::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$5, name, initialize, &_HttpCookie$5_ClassInfo_, allocate$HttpCookie$5);
	return class$;
}

$Class* HttpCookie$5::class$ = nullptr;

	} // net
} // java