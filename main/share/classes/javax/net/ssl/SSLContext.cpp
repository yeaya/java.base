#include <javax/net/ssl/SSLContext.h>

#include <java/lang/AbstractMethodError.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/util/Objects.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/SSLContextSpi.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLPermission.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <javax/net/ssl/TrustManager.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

#undef VH_DEFAULT_CONTEXT

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $Objects = ::java::util::Objects;
using $SSLContextSpi = ::javax::net::ssl::SSLContextSpi;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLPermission = ::javax::net::ssl::SSLPermission;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLContext_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(SSLContext, provider)},
	{"contextSpi", "Ljavax/net/ssl/SSLContextSpi;", nullptr, $PRIVATE | $FINAL, $field(SSLContext, contextSpi)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SSLContext, protocol)},
	{"defaultContext", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SSLContext, defaultContext)},
	{"VH_DEFAULT_CONTEXT", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLContext, VH_DEFAULT_CONTEXT)},
	{}
};

$MethodInfo _SSLContext_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/SSLContextSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(SSLContext::*)($SSLContextSpi*,$Provider*,$String*)>(&SSLContext::init$))},
	{"createSSLEngine", "()Ljavax/net/ssl/SSLEngine;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLEngine*(SSLContext::*)()>(&SSLContext::createSSLEngine))},
	{"createSSLEngine", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLEngine*(SSLContext::*)($String*,int32_t)>(&SSLContext::createSSLEngine))},
	{"getClientSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLSessionContext*(SSLContext::*)()>(&SSLContext::getClientSessionContext))},
	{"getDefault", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLContext*(*)()>(&SSLContext::getDefault)), "java.security.NoSuchAlgorithmException"},
	{"getDefaultSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLParameters*(SSLContext::*)()>(&SSLContext::getDefaultSSLParameters))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLContext*(*)($String*)>(&SSLContext::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLContext*(*)($String*,$String*)>(&SSLContext::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLContext*(*)($String*,$Provider*)>(&SSLContext::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(SSLContext::*)()>(&SSLContext::getProtocol))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(SSLContext::*)()>(&SSLContext::getProvider))},
	{"getServerSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLSessionContext*(SSLContext::*)()>(&SSLContext::getServerSessionContext))},
	{"getServerSocketFactory", "()Ljavax/net/ssl/SSLServerSocketFactory;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLServerSocketFactory*(SSLContext::*)()>(&SSLContext::getServerSocketFactory))},
	{"getSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLSocketFactory*(SSLContext::*)()>(&SSLContext::getSocketFactory))},
	{"getSupportedSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLParameters*(SSLContext::*)()>(&SSLContext::getSupportedSSLParameters))},
	{"init", "([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SSLContext::*)($KeyManagerArray*,$TrustManagerArray*,$SecureRandom*)>(&SSLContext::init)), "java.security.KeyManagementException"},
	{"setDefault", "(Ljavax/net/ssl/SSLContext;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SSLContext*)>(&SSLContext::setDefault))},
	{}
};

$ClassInfo _SSLContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLContext",
	"java.lang.Object",
	nullptr,
	_SSLContext_FieldInfo_,
	_SSLContext_MethodInfo_
};

$Object* allocate$SSLContext($Class* clazz) {
	return $of($alloc(SSLContext));
}

$volatile(SSLContext*) SSLContext::defaultContext = nullptr;
$VarHandle* SSLContext::VH_DEFAULT_CONTEXT = nullptr;

void SSLContext::init$($SSLContextSpi* contextSpi, $Provider* provider, $String* protocol) {
	$set(this, contextSpi, contextSpi);
	$set(this, provider, provider);
	$set(this, protocol, protocol);
}

SSLContext* SSLContext::getDefault() {
	$init(SSLContext);
	$var(SSLContext, temporaryContext, SSLContext::defaultContext);
	if (temporaryContext == nullptr) {
		$assign(temporaryContext, SSLContext::getInstance("Default"_s));
		if (!$nc(SSLContext::VH_DEFAULT_CONTEXT)->compareAndSet($$new($ObjectArray, {($Object*)nullptr, $of(temporaryContext)}))) {
			$assign(temporaryContext, SSLContext::defaultContext);
		}
	}
	return temporaryContext;
}

void SSLContext::setDefault(SSLContext* context) {
	$init(SSLContext);
	if (context == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($SSLPermission, "setDefaultSSLContext"_s));
	}
	$assignStatic(SSLContext::defaultContext, context);
}

SSLContext* SSLContext::getInstance($String* protocol) {
	$init(SSLContext);
	$Objects::requireNonNull($of(protocol), "null protocol name"_s);
	$load($SSLContextSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("SSLContext"_s, $SSLContextSpi::class$, protocol));
	return $new(SSLContext, $cast($SSLContextSpi, $nc(instance)->impl), instance->provider, protocol);
}

SSLContext* SSLContext::getInstance($String* protocol, $String* provider) {
	$init(SSLContext);
	$Objects::requireNonNull($of(protocol), "null protocol name"_s);
	$load($SSLContextSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("SSLContext"_s, $SSLContextSpi::class$, protocol, provider));
	return $new(SSLContext, $cast($SSLContextSpi, $nc(instance)->impl), instance->provider, protocol);
}

SSLContext* SSLContext::getInstance($String* protocol, $Provider* provider) {
	$init(SSLContext);
	$Objects::requireNonNull($of(protocol), "null protocol name"_s);
	$load($SSLContextSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("SSLContext"_s, $SSLContextSpi::class$, protocol, provider));
	return $new(SSLContext, $cast($SSLContextSpi, $nc(instance)->impl), instance->provider, protocol);
}

$String* SSLContext::getProtocol() {
	return this->protocol;
}

$Provider* SSLContext::getProvider() {
	return this->provider;
}

void SSLContext::init($KeyManagerArray* km, $TrustManagerArray* tm, $SecureRandom* random) {
	$nc(this->contextSpi)->engineInit(km, tm, random);
}

$SSLSocketFactory* SSLContext::getSocketFactory() {
	return $nc(this->contextSpi)->engineGetSocketFactory();
}

$SSLServerSocketFactory* SSLContext::getServerSocketFactory() {
	return $nc(this->contextSpi)->engineGetServerSocketFactory();
}

$SSLEngine* SSLContext::createSSLEngine() {
	try {
		return $nc(this->contextSpi)->engineCreateSSLEngine();
	} catch ($AbstractMethodError&) {
		$var($AbstractMethodError, e, $catch());
		$var($UnsupportedOperationException, unsup, $new($UnsupportedOperationException, $$str({"Provider: "_s, $(getProvider()), " doesn\'t support this operation"_s})));
		unsup->initCause(e);
		$throw(unsup);
	}
	$shouldNotReachHere();
}

$SSLEngine* SSLContext::createSSLEngine($String* peerHost, int32_t peerPort) {
	try {
		return $nc(this->contextSpi)->engineCreateSSLEngine(peerHost, peerPort);
	} catch ($AbstractMethodError&) {
		$var($AbstractMethodError, e, $catch());
		$var($UnsupportedOperationException, unsup, $new($UnsupportedOperationException, $$str({"Provider: "_s, $(getProvider()), " does not support this operation"_s})));
		unsup->initCause(e);
		$throw(unsup);
	}
	$shouldNotReachHere();
}

$SSLSessionContext* SSLContext::getServerSessionContext() {
	return $nc(this->contextSpi)->engineGetServerSessionContext();
}

$SSLSessionContext* SSLContext::getClientSessionContext() {
	return $nc(this->contextSpi)->engineGetClientSessionContext();
}

$SSLParameters* SSLContext::getDefaultSSLParameters() {
	return $nc(this->contextSpi)->engineGetDefaultSSLParameters();
}

$SSLParameters* SSLContext::getSupportedSSLParameters() {
	return $nc(this->contextSpi)->engineGetSupportedSSLParameters();
}

void clinit$SSLContext($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$assignStatic(SSLContext::VH_DEFAULT_CONTEXT, $nc($($MethodHandles::lookup()))->findStaticVarHandle(SSLContext::class$, "defaultContext"_s, SSLContext::class$));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

SSLContext::SSLContext() {
}

$Class* SSLContext::load$($String* name, bool initialize) {
	$loadClass(SSLContext, name, initialize, &_SSLContext_ClassInfo_, clinit$SSLContext, allocate$SSLContext);
	return class$;
}

$Class* SSLContext::class$ = nullptr;

		} // ssl
	} // net
} // javax