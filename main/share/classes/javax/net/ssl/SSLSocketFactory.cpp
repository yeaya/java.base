#include <javax/net/ssl/SSLSocketFactory.h>

#include <java/io/InputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/AccessController.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Locale.h>
#include <javax/net/SocketFactory.h>
#include <javax/net/ssl/DefaultSSLSocketFactory.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLSocketFactory$1.h>
#include <javax/net/ssl/SSLSocketFactory$DefaultFactoryHolder.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DEBUG
#undef ENGLISH

using $InputStream = ::java::io::InputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Socket = ::java::net::Socket;
using $AccessController = ::java::security::AccessController;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Locale = ::java::util::Locale;
using $SocketFactory = ::javax::net::SocketFactory;
using $DefaultSSLSocketFactory = ::javax::net::ssl::DefaultSSLSocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLSocketFactory$1 = ::javax::net::ssl::SSLSocketFactory$1;
using $SSLSocketFactory$DefaultFactoryHolder = ::javax::net::ssl::SSLSocketFactory$DefaultFactoryHolder;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLSocketFactory_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $STATIC | $FINAL, $staticField(SSLSocketFactory, DEBUG)},
	{}
};

$MethodInfo _SSLSocketFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLSocketFactory::*)()>(&SSLSocketFactory::init$))},
	{"createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/net/Socket;Ljava/io/InputStream;Z)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDefault", "()Ljavax/net/SocketFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SocketFactory*(*)()>(&SSLSocketFactory::getDefault))},
	{"getDefaultCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSecurityProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&SSLSocketFactory::getSecurityProperty))},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SSLSocketFactory_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder", "javax.net.ssl.SSLSocketFactory", "DefaultFactoryHolder", $PRIVATE | $STATIC | $FINAL},
	{"javax.net.ssl.SSLSocketFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SSLSocketFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SSLSocketFactory",
	"javax.net.SocketFactory",
	nullptr,
	_SSLSocketFactory_FieldInfo_,
	_SSLSocketFactory_MethodInfo_,
	nullptr,
	nullptr,
	_SSLSocketFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder,javax.net.ssl.SSLSocketFactory$1"
};

$Object* allocate$SSLSocketFactory($Class* clazz) {
	return $of($alloc(SSLSocketFactory));
}

bool SSLSocketFactory::DEBUG = false;

void SSLSocketFactory::init$() {
	$SocketFactory::init$();
}

$SocketFactory* SSLSocketFactory::getDefault() {
	$init(SSLSocketFactory);
	$init($SSLSocketFactory$DefaultFactoryHolder);
	if ($SSLSocketFactory$DefaultFactoryHolder::defaultFactory != nullptr) {
		return $SSLSocketFactory$DefaultFactoryHolder::defaultFactory;
	}
	try {
		return $nc($($SSLContext::getDefault()))->getSocketFactory();
	} catch ($NoSuchAlgorithmException&) {
		$var($Exception, e, $catch());
		return $new($DefaultSSLSocketFactory, e);
	} catch ($UnsupportedOperationException&) {
		$var($Exception, e, $catch());
		return $new($DefaultSSLSocketFactory, e);
	}
	$shouldNotReachHere();
}

$String* SSLSocketFactory::getSecurityProperty($String* name) {
	$init(SSLSocketFactory);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SSLSocketFactory$1, name))));
}

$Socket* SSLSocketFactory::createSocket($Socket* s, $InputStream* consumed, bool autoClose) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void clinit$SSLSocketFactory($Class* class$) {
	{
		$init($Locale);
		$var($String, s, $nc($($GetPropertyAction::privilegedGetProperty("javax.net.debug"_s, ""_s)))->toLowerCase($Locale::ENGLISH));
		bool var$0 = s->contains("all"_s);
		SSLSocketFactory::DEBUG = var$0 || s->contains("ssl"_s);
	}
}

SSLSocketFactory::SSLSocketFactory() {
}

$Class* SSLSocketFactory::load$($String* name, bool initialize) {
	$loadClass(SSLSocketFactory, name, initialize, &_SSLSocketFactory_ClassInfo_, clinit$SSLSocketFactory, allocate$SSLSocketFactory);
	return class$;
}

$Class* SSLSocketFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax