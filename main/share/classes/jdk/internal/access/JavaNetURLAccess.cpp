#include <jdk/internal/access/JavaNetURLAccess.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNetURLAccess_MethodInfo_[] = {
	{"getHandler", "(Ljava/net/URL;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaNetURLAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaNetURLAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaNetURLAccess_MethodInfo_
};

$Object* allocate$JavaNetURLAccess($Class* clazz) {
	return $of($alloc(JavaNetURLAccess));
}

$Class* JavaNetURLAccess::load$($String* name, bool initialize) {
	$loadClass(JavaNetURLAccess, name, initialize, &_JavaNetURLAccess_ClassInfo_, allocate$JavaNetURLAccess);
	return class$;
}

$Class* JavaNetURLAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk