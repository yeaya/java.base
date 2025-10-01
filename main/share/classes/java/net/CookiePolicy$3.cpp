#include <java/net/CookiePolicy$3.h>

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

$MethodInfo _CookiePolicy$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CookiePolicy$3::*)()>(&CookiePolicy$3::init$))},
	{"shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CookiePolicy$3_EnclosingMethodInfo_ = {
	"java.net.CookiePolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _CookiePolicy$3_InnerClassesInfo_[] = {
	{"java.net.CookiePolicy$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CookiePolicy$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.CookiePolicy$3",
	"java.lang.Object",
	"java.net.CookiePolicy",
	nullptr,
	_CookiePolicy$3_MethodInfo_,
	nullptr,
	&_CookiePolicy$3_EnclosingMethodInfo_,
	_CookiePolicy$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.CookiePolicy"
};

$Object* allocate$CookiePolicy$3($Class* clazz) {
	return $of($alloc(CookiePolicy$3));
}

void CookiePolicy$3::init$() {
}

bool CookiePolicy$3::shouldAccept($URI* uri, $HttpCookie* cookie) {
	if (uri == nullptr || cookie == nullptr) {
		return false;
	}
	$var($String, var$0, $nc(cookie)->getDomain());
	return $HttpCookie::domainMatches(var$0, $($nc(uri)->getHost()));
}

CookiePolicy$3::CookiePolicy$3() {
}

$Class* CookiePolicy$3::load$($String* name, bool initialize) {
	$loadClass(CookiePolicy$3, name, initialize, &_CookiePolicy$3_ClassInfo_, allocate$CookiePolicy$3);
	return class$;
}

$Class* CookiePolicy$3::class$ = nullptr;

	} // net
} // java