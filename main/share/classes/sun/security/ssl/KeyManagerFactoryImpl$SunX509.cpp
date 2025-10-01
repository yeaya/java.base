#include <sun/security/ssl/KeyManagerFactoryImpl$SunX509.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/KeyStore.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <sun/security/ssl/KeyManagerFactoryImpl.h>
#include <sun/security/ssl/SunX509KeyManagerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $KeyStore = ::java::security::KeyStore;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $KeyManagerFactoryImpl = ::sun::security::ssl::KeyManagerFactoryImpl;
using $SunX509KeyManagerImpl = ::sun::security::ssl::SunX509KeyManagerImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyManagerFactoryImpl$SunX509_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyManagerFactoryImpl$SunX509::*)()>(&KeyManagerFactoryImpl$SunX509::init$))},
	{"engineInit", "(Ljava/security/KeyStore;[C)V", nullptr, $PROTECTED, nullptr, "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _KeyManagerFactoryImpl$SunX509_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyManagerFactoryImpl$SunX509", "sun.security.ssl.KeyManagerFactoryImpl", "SunX509", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyManagerFactoryImpl$SunX509_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyManagerFactoryImpl$SunX509",
	"sun.security.ssl.KeyManagerFactoryImpl",
	nullptr,
	nullptr,
	_KeyManagerFactoryImpl$SunX509_MethodInfo_,
	nullptr,
	nullptr,
	_KeyManagerFactoryImpl$SunX509_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyManagerFactoryImpl"
};

$Object* allocate$KeyManagerFactoryImpl$SunX509($Class* clazz) {
	return $of($alloc(KeyManagerFactoryImpl$SunX509));
}

void KeyManagerFactoryImpl$SunX509::init$() {
	$KeyManagerFactoryImpl::init$();
}

void KeyManagerFactoryImpl$SunX509::engineInit($KeyStore* ks, $chars* password) {
	$set(this, keyManager, $new($SunX509KeyManagerImpl, ks, password));
	this->isInitialized = true;
}

void KeyManagerFactoryImpl$SunX509::engineInit($ManagerFactoryParameters* spec) {
	$throwNew($InvalidAlgorithmParameterException, "SunX509KeyManager does not use ManagerFactoryParameters"_s);
}

KeyManagerFactoryImpl$SunX509::KeyManagerFactoryImpl$SunX509() {
}

$Class* KeyManagerFactoryImpl$SunX509::load$($String* name, bool initialize) {
	$loadClass(KeyManagerFactoryImpl$SunX509, name, initialize, &_KeyManagerFactoryImpl$SunX509_ClassInfo_, allocate$KeyManagerFactoryImpl$SunX509);
	return class$;
}

$Class* KeyManagerFactoryImpl$SunX509::class$ = nullptr;

		} // ssl
	} // security
} // sun