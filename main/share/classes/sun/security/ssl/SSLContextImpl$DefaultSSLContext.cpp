#include <sun/security/ssl/SSLContextImpl$DefaultSSLContext.h>

#include <java/security/KeyManagementException.h>
#include <java/security/SecureRandom.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/TrustManager.h>
#include <sun/security/ssl/SSLContextImpl$CustomizedTLSContext.h>
#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder.h>
#include <sun/security/ssl/SSLContextImpl$DefaultSSLContextHolder.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyManagementException = ::java::security::KeyManagementException;
using $SecureRandom = ::java::security::SecureRandom;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLContextImpl$CustomizedTLSContext = ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext;
using $SSLContextImpl$DefaultManagersHolder = ::sun::security::ssl::SSLContextImpl$DefaultManagersHolder;
using $SSLContextImpl$DefaultSSLContextHolder = ::sun::security::ssl::SSLContextImpl$DefaultSSLContextHolder;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLContextImpl$DefaultSSLContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$DefaultSSLContext::*)()>(&SSLContextImpl$DefaultSSLContext::init$)), "java.lang.Exception"},
	{"engineInit", "([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.KeyManagementException"},
	{"getDefaultImpl", "()Lsun/security/ssl/SSLContextImpl;", nullptr, $STATIC, $method(static_cast<$SSLContextImpl*(*)()>(&SSLContextImpl$DefaultSSLContext::getDefaultImpl)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SSLContextImpl$DefaultSSLContext_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$DefaultSSLContext", "sun.security.ssl.SSLContextImpl", "DefaultSSLContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$CustomizedTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedTLSContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLContextImpl$DefaultSSLContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$DefaultSSLContext",
	"sun.security.ssl.SSLContextImpl$CustomizedTLSContext",
	nullptr,
	nullptr,
	_SSLContextImpl$DefaultSSLContext_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$DefaultSSLContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$DefaultSSLContext($Class* clazz) {
	return $of($alloc(SSLContextImpl$DefaultSSLContext));
}

void SSLContextImpl$DefaultSSLContext::init$() {
	$SSLContextImpl$CustomizedTLSContext::init$();
	$init($SSLContextImpl$DefaultManagersHolder);
	if ($SSLContextImpl$DefaultManagersHolder::reservedException != nullptr) {
		$throw($SSLContextImpl$DefaultManagersHolder::reservedException);
	}
	try {
		$SSLContextImpl$CustomizedTLSContext::engineInit($SSLContextImpl$DefaultManagersHolder::keyManagers, $SSLContextImpl$DefaultManagersHolder::trustManagers, nullptr);
	} catch ($Exception& e) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,defaultctx"_s)) {
			$SSLLogger::fine("default context init failed: "_s, $$new($ObjectArray, {$of(e)}));
		}
		$throw(e);
	}
}

void SSLContextImpl$DefaultSSLContext::engineInit($KeyManagerArray* km, $TrustManagerArray* tm, $SecureRandom* sr) {
	$throwNew($KeyManagementException, "Default SSLContext is initialized automatically"_s);
}

$SSLContextImpl* SSLContextImpl$DefaultSSLContext::getDefaultImpl() {
	$init(SSLContextImpl$DefaultSSLContext);
	$init($SSLContextImpl$DefaultSSLContextHolder);
	if ($SSLContextImpl$DefaultSSLContextHolder::reservedException != nullptr) {
		$throw($SSLContextImpl$DefaultSSLContextHolder::reservedException);
	}
	return $SSLContextImpl$DefaultSSLContextHolder::sslContext;
}

SSLContextImpl$DefaultSSLContext::SSLContextImpl$DefaultSSLContext() {
}

$Class* SSLContextImpl$DefaultSSLContext::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$DefaultSSLContext, name, initialize, &_SSLContextImpl$DefaultSSLContext_ClassInfo_, allocate$SSLContextImpl$DefaultSSLContext);
	return class$;
}

$Class* SSLContextImpl$DefaultSSLContext::class$ = nullptr;

		} // ssl
	} // security
} // sun