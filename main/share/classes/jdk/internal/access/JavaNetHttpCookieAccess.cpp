#include <jdk/internal/access/JavaNetHttpCookieAccess.h>

#include <java/net/HttpCookie.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNetHttpCookieAccess_MethodInfo_[] = {
	{"header", "(Ljava/net/HttpCookie;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNetHttpCookieAccess, header, $String*, $HttpCookie*)},
	{"parse", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaNetHttpCookieAccess, parse, $List*, $String*)},
	{}
};

$ClassInfo _JavaNetHttpCookieAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaNetHttpCookieAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaNetHttpCookieAccess_MethodInfo_
};

$Object* allocate$JavaNetHttpCookieAccess($Class* clazz) {
	return $of($alloc(JavaNetHttpCookieAccess));
}

$Class* JavaNetHttpCookieAccess::load$($String* name, bool initialize) {
	$loadClass(JavaNetHttpCookieAccess, name, initialize, &_JavaNetHttpCookieAccess_ClassInfo_, allocate$JavaNetHttpCookieAccess);
	return class$;
}

$Class* JavaNetHttpCookieAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk