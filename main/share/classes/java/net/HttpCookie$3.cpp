#include <java/net/HttpCookie$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _HttpCookie$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpCookie$3::*)()>(&HttpCookie$3::init$))},
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpCookie$3_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$3_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$3", nullptr, nullptr, 0},
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$3",
	"java.lang.Object",
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	_HttpCookie$3_MethodInfo_,
	nullptr,
	&_HttpCookie$3_EnclosingMethodInfo_,
	_HttpCookie$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$3($Class* clazz) {
	return $of($alloc(HttpCookie$3));
}

void HttpCookie$3::init$() {
}

void HttpCookie$3::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	$nc(cookie)->setDiscard(true);
}

HttpCookie$3::HttpCookie$3() {
}

$Class* HttpCookie$3::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$3, name, initialize, &_HttpCookie$3_ClassInfo_, allocate$HttpCookie$3);
	return class$;
}

$Class* HttpCookie$3::class$ = nullptr;

	} // net
} // java