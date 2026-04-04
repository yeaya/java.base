#include <sun/security/ssl/SSLContextImpl$TLSContext.h>
#include <sun/security/ssl/SSLContextImpl$CustomizedTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLContextImpl$CustomizedTLSContext = ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

void SSLContextImpl$TLSContext::init$() {
	$SSLContextImpl$CustomizedTLSContext::init$();
}

SSLContextImpl$TLSContext::SSLContextImpl$TLSContext() {
}

$Class* SSLContextImpl$TLSContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$TLSContext, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$TLSContext", "sun.security.ssl.SSLContextImpl", "TLSContext", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$CustomizedTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedTLSContext", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$TLSContext",
		"sun.security.ssl.SSLContextImpl$CustomizedTLSContext",
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
	$loadClass(SSLContextImpl$TLSContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$TLSContext);
	});
	return class$;
}

$Class* SSLContextImpl$TLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun