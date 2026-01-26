#include <java/security/KeyException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

$FieldInfo _KeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyException, serialVersionUID)},
	{}
};

$MethodInfo _KeyException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(KeyException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(KeyException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _KeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyException",
	"java.security.GeneralSecurityException",
	nullptr,
	_KeyException_FieldInfo_,
	_KeyException_MethodInfo_
};

$Object* allocate$KeyException($Class* clazz) {
	return $of($alloc(KeyException));
}

void KeyException::init$() {
	$GeneralSecurityException::init$();
}

void KeyException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void KeyException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void KeyException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

KeyException::KeyException() {
}

KeyException::KeyException(const KeyException& e) : $GeneralSecurityException(e) {
}

void KeyException::throw$() {
	throw *this;
}

$Class* KeyException::load$($String* name, bool initialize) {
	$loadClass(KeyException, name, initialize, &_KeyException_ClassInfo_, allocate$KeyException);
	return class$;
}

$Class* KeyException::class$ = nullptr;

	} // security
} // java