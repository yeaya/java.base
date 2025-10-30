#include <java/net/SecureCacheResponse.h>

#include <java/net/CacheResponse.h>
#include <java/security/Principal.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CacheResponse = ::java::net::CacheResponse;
using $Principal = ::java::security::Principal;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;

namespace java {
	namespace net {

$MethodInfo _SecureCacheResponse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecureCacheResponse::*)()>(&SecureCacheResponse::init$))},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalCertificateChain", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getSSLSession", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljavax/net/ssl/SSLSession;>;", $PUBLIC},
	{"getServerCertificateChain", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{}
};

$ClassInfo _SecureCacheResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.SecureCacheResponse",
	"java.net.CacheResponse",
	nullptr,
	nullptr,
	_SecureCacheResponse_MethodInfo_
};

$Object* allocate$SecureCacheResponse($Class* clazz) {
	return $of($alloc(SecureCacheResponse));
}

void SecureCacheResponse::init$() {
	$CacheResponse::init$();
}

$Optional* SecureCacheResponse::getSSLSession() {
	return $Optional::empty();
}

SecureCacheResponse::SecureCacheResponse() {
}

$Class* SecureCacheResponse::load$($String* name, bool initialize) {
	$loadClass(SecureCacheResponse, name, initialize, &_SecureCacheResponse_ClassInfo_, allocate$SecureCacheResponse);
	return class$;
}

$Class* SecureCacheResponse::class$ = nullptr;

	} // net
} // java