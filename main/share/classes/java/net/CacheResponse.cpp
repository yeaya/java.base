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

$MethodInfo _CacheResponse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CacheResponse::*)()>(&CacheResponse::init$))},
	{"getBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getHeaders", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CacheResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.CacheResponse",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CacheResponse_MethodInfo_
};

$Object* allocate$CacheResponse($Class* clazz) {
	return $of($alloc(CacheResponse));
}

void CacheResponse::init$() {
}

CacheResponse::CacheResponse() {
}

$Class* CacheResponse::load$($String* name, bool initialize) {
	$loadClass(CacheResponse, name, initialize, &_CacheResponse_ClassInfo_, allocate$CacheResponse);
	return class$;
}

$Class* CacheResponse::class$ = nullptr;

	} // net
} // java