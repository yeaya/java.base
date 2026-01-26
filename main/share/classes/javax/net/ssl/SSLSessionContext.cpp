#include <javax/net/ssl/SSLSessionContext.h>

#include <java/util/Enumeration.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _SSLSessionContext_MethodInfo_[] = {
	{"getIds", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<[B>;", $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getIds, $Enumeration*)},
	{"getSession", "([B)Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSession, $SSLSession*, $bytes*)},
	{"getSessionCacheSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSessionCacheSize, int32_t)},
	{"getSessionTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSessionTimeout, int32_t)},
	{"setSessionCacheSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, setSessionCacheSize, void, int32_t), "java.lang.IllegalArgumentException"},
	{"setSessionTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, setSessionTimeout, void, int32_t), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _SSLSessionContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.SSLSessionContext",
	nullptr,
	nullptr,
	nullptr,
	_SSLSessionContext_MethodInfo_
};

$Object* allocate$SSLSessionContext($Class* clazz) {
	return $of($alloc(SSLSessionContext));
}

$Class* SSLSessionContext::load$($String* name, bool initialize) {
	$loadClass(SSLSessionContext, name, initialize, &_SSLSessionContext_ClassInfo_, allocate$SSLSessionContext);
	return class$;
}

$Class* SSLSessionContext::class$ = nullptr;

		} // ssl
	} // net
} // javax