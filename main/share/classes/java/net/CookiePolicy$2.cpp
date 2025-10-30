#include <java/net/CookiePolicy$2.h>

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

$MethodInfo _CookiePolicy$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CookiePolicy$2::*)()>(&CookiePolicy$2::init$))},
	{"shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CookiePolicy$2_EnclosingMethodInfo_ = {
	"java.net.CookiePolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _CookiePolicy$2_InnerClassesInfo_[] = {
	{"java.net.CookiePolicy$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CookiePolicy$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.CookiePolicy$2",
	"java.lang.Object",
	"java.net.CookiePolicy",
	nullptr,
	_CookiePolicy$2_MethodInfo_,
	nullptr,
	&_CookiePolicy$2_EnclosingMethodInfo_,
	_CookiePolicy$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.CookiePolicy"
};

$Object* allocate$CookiePolicy$2($Class* clazz) {
	return $of($alloc(CookiePolicy$2));
}

void CookiePolicy$2::init$() {
}

bool CookiePolicy$2::shouldAccept($URI* uri, $HttpCookie* cookie) {
	return false;
}

CookiePolicy$2::CookiePolicy$2() {
}

$Class* CookiePolicy$2::load$($String* name, bool initialize) {
	$loadClass(CookiePolicy$2, name, initialize, &_CookiePolicy$2_ClassInfo_, allocate$CookiePolicy$2);
	return class$;
}

$Class* CookiePolicy$2::class$ = nullptr;

	} // net
} // java