#include <java/net/CookiePolicy$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CookiePolicy = ::java::net::CookiePolicy;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;

namespace java {
	namespace net {

$MethodInfo _CookiePolicy$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CookiePolicy$1::*)()>(&CookiePolicy$1::init$))},
	{"shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CookiePolicy$1_EnclosingMethodInfo_ = {
	"java.net.CookiePolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _CookiePolicy$1_InnerClassesInfo_[] = {
	{"java.net.CookiePolicy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CookiePolicy$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.CookiePolicy$1",
	"java.lang.Object",
	"java.net.CookiePolicy",
	nullptr,
	_CookiePolicy$1_MethodInfo_,
	nullptr,
	&_CookiePolicy$1_EnclosingMethodInfo_,
	_CookiePolicy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.CookiePolicy"
};

$Object* allocate$CookiePolicy$1($Class* clazz) {
	return $of($alloc(CookiePolicy$1));
}

void CookiePolicy$1::init$() {
}

bool CookiePolicy$1::shouldAccept($URI* uri, $HttpCookie* cookie) {
	return true;
}

CookiePolicy$1::CookiePolicy$1() {
}

$Class* CookiePolicy$1::load$($String* name, bool initialize) {
	$loadClass(CookiePolicy$1, name, initialize, &_CookiePolicy$1_ClassInfo_, allocate$CookiePolicy$1);
	return class$;
}

$Class* CookiePolicy$1::class$ = nullptr;

	} // net
} // java