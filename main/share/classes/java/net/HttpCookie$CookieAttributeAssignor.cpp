#include <java/net/HttpCookie$CookieAttributeAssignor.h>

#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$CookieAttributeAssignor_MethodInfo_[] = {
	{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _HttpCookie$CookieAttributeAssignor_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpCookie$CookieAttributeAssignor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.net.HttpCookie$CookieAttributeAssignor",
	nullptr,
	nullptr,
	nullptr,
	_HttpCookie$CookieAttributeAssignor_MethodInfo_,
	nullptr,
	nullptr,
	_HttpCookie$CookieAttributeAssignor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$CookieAttributeAssignor($Class* clazz) {
	return $of($alloc(HttpCookie$CookieAttributeAssignor));
}

$Class* HttpCookie$CookieAttributeAssignor::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$CookieAttributeAssignor, name, initialize, &_HttpCookie$CookieAttributeAssignor_ClassInfo_, allocate$HttpCookie$CookieAttributeAssignor);
	return class$;
}

$Class* HttpCookie$CookieAttributeAssignor::class$ = nullptr;

	} // net
} // java