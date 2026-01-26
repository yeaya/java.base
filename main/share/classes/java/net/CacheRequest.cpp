#include <java/net/CacheRequest.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$MethodInfo _CacheRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CacheRequest, init$, void)},
	{"abort", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CacheRequest, abort, void)},
	{"getBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CacheRequest, getBody, $OutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _CacheRequest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.CacheRequest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CacheRequest_MethodInfo_
};

$Object* allocate$CacheRequest($Class* clazz) {
	return $of($alloc(CacheRequest));
}

void CacheRequest::init$() {
}

CacheRequest::CacheRequest() {
}

$Class* CacheRequest::load$($String* name, bool initialize) {
	$loadClass(CacheRequest, name, initialize, &_CacheRequest_ClassInfo_, allocate$CacheRequest);
	return class$;
}

$Class* CacheRequest::class$ = nullptr;

	} // net
} // java