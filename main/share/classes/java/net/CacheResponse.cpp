#include <java/net/CacheResponse.h>
#include <java/io/InputStream.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace net {

void CacheResponse::init$() {
}

CacheResponse::CacheResponse() {
}

$Class* CacheResponse::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheResponse, init$, void)},
		{"getBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CacheResponse, getBody, $InputStream*), "java.io.IOException"},
		{"getHeaders", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CacheResponse, getHeaders, $Map*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.CacheResponse",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CacheResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheResponse);
	});
	return class$;
}

$Class* CacheResponse::class$ = nullptr;

	} // net
} // java