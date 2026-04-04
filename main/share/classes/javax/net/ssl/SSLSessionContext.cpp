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

$Class* SSLSessionContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getIds", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<[B>;", $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getIds, $Enumeration*)},
		{"getSession", "([B)Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSession, $SSLSession*, $bytes*)},
		{"getSessionCacheSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSessionCacheSize, int32_t)},
		{"getSessionTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, getSessionTimeout, int32_t)},
		{"setSessionCacheSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, setSessionCacheSize, void, int32_t), "java.lang.IllegalArgumentException"},
		{"setSessionTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionContext, setSessionTimeout, void, int32_t), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.SSLSessionContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLSessionContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSessionContext);
	});
	return class$;
}

$Class* SSLSessionContext::class$ = nullptr;

		} // ssl
	} // net
} // javax