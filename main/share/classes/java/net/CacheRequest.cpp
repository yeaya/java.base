#include <java/net/CacheRequest.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void CacheRequest::init$() {
}

CacheRequest::CacheRequest() {
}

$Class* CacheRequest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheRequest, init$, void)},
		{"abort", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CacheRequest, abort, void)},
		{"getBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CacheRequest, getBody, $OutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.CacheRequest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CacheRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheRequest);
	});
	return class$;
}

$Class* CacheRequest::class$ = nullptr;

	} // net
} // java