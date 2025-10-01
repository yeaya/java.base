#include <java/security/KeyStoreException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

$FieldInfo _KeyStoreException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyStoreException, serialVersionUID)},
	{}
};

$MethodInfo _KeyStoreException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreException::*)()>(&KeyStoreException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreException::*)($String*)>(&KeyStoreException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreException::*)($String*,$Throwable*)>(&KeyStoreException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreException::*)($Throwable*)>(&KeyStoreException::init$))},
	{}
};

$ClassInfo _KeyStoreException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyStoreException",
	"java.security.GeneralSecurityException",
	nullptr,
	_KeyStoreException_FieldInfo_,
	_KeyStoreException_MethodInfo_
};

$Object* allocate$KeyStoreException($Class* clazz) {
	return $of($alloc(KeyStoreException));
}

void KeyStoreException::init$() {
	$GeneralSecurityException::init$();
}

void KeyStoreException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void KeyStoreException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void KeyStoreException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

KeyStoreException::KeyStoreException() {
}

KeyStoreException::KeyStoreException(const KeyStoreException& e) {
}

KeyStoreException KeyStoreException::wrapper$() {
	$pendingException(this);
	return *this;
}

void KeyStoreException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* KeyStoreException::load$($String* name, bool initialize) {
	$loadClass(KeyStoreException, name, initialize, &_KeyStoreException_ClassInfo_, allocate$KeyStoreException);
	return class$;
}

$Class* KeyStoreException::class$ = nullptr;

	} // security
} // java