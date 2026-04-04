#include <sun/security/ssl/SSLContextImpl$DefaultSSLContextHolder.h>
#include <java/security/KeyManagementException.h>
#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder.h>
#include <sun/security/ssl/SSLContextImpl$DefaultSSLContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyManagementException = ::java::security::KeyManagementException;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLContextImpl$DefaultManagersHolder = ::sun::security::ssl::SSLContextImpl$DefaultManagersHolder;
using $SSLContextImpl$DefaultSSLContext = ::sun::security::ssl::SSLContextImpl$DefaultSSLContext;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$SSLContextImpl* SSLContextImpl$DefaultSSLContextHolder::sslContext = nullptr;
$Exception* SSLContextImpl$DefaultSSLContextHolder::reservedException = nullptr;

void SSLContextImpl$DefaultSSLContextHolder::init$() {
}

void SSLContextImpl$DefaultSSLContextHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Exception, reserved, nullptr);
		$var($SSLContextImpl, mediator, nullptr);
		$init($SSLContextImpl$DefaultManagersHolder);
		if ($SSLContextImpl$DefaultManagersHolder::reservedException != nullptr) {
			$assign(reserved, $SSLContextImpl$DefaultManagersHolder::reservedException);
		} else {
			try {
				$assign(mediator, $new($SSLContextImpl$DefaultSSLContext));
			} catch ($Exception& e) {
				$assign(reserved, $new($KeyManagementException, $(e->getMessage())));
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,defaultctx"_s)) {
					$SSLLogger::warning("Failed to load default SSLContext"_s, $$new($ObjectArray, {e}));
				}
			}
		}
		$assignStatic(SSLContextImpl$DefaultSSLContextHolder::sslContext, mediator);
		$assignStatic(SSLContextImpl$DefaultSSLContextHolder::reservedException, reserved);
	}
}

SSLContextImpl$DefaultSSLContextHolder::SSLContextImpl$DefaultSSLContextHolder() {
}

$Class* SSLContextImpl$DefaultSSLContextHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sslContext", "Lsun/security/ssl/SSLContextImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DefaultSSLContextHolder, sslContext)},
		{"reservedException", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DefaultSSLContextHolder, reservedException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLContextImpl$DefaultSSLContextHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DefaultSSLContextHolder", "sun.security.ssl.SSLContextImpl", "DefaultSSLContextHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DefaultSSLContextHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLContextImpl"
	};
	$loadClass(SSLContextImpl$DefaultSSLContextHolder, name, initialize, &classInfo$$, SSLContextImpl$DefaultSSLContextHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DefaultSSLContextHolder);
	});
	return class$;
}

$Class* SSLContextImpl$DefaultSSLContextHolder::class$ = nullptr;

		} // ssl
	} // security
} // sun