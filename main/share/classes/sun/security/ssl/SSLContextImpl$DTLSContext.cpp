#include <sun/security/ssl/SSLContextImpl$DTLSContext.h>
#include <sun/security/ssl/SSLContextImpl$CustomizedDTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLContextImpl$CustomizedDTLSContext = ::sun::security::ssl::SSLContextImpl$CustomizedDTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

void SSLContextImpl$DTLSContext::init$() {
	$SSLContextImpl$CustomizedDTLSContext::init$();
}

SSLContextImpl$DTLSContext::SSLContextImpl$DTLSContext() {
}

$Class* SSLContextImpl$DTLSContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$DTLSContext, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DTLSContext", "sun.security.ssl.SSLContextImpl", "DTLSContext", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$CustomizedDTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedDTLSContext", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DTLSContext",
		"sun.security.ssl.SSLContextImpl$CustomizedDTLSContext",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLContextImpl"
	};
	$loadClass(SSLContextImpl$DTLSContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DTLSContext);
	});
	return class$;
}

$Class* SSLContextImpl$DTLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun