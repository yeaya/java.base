#include <java/security/SignatureException.h>

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

$FieldInfo _SignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SignatureException, serialVersionUID)},
	{}
};

$MethodInfo _SignatureException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureException::*)()>(&SignatureException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureException::*)($String*)>(&SignatureException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureException::*)($String*,$Throwable*)>(&SignatureException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureException::*)($Throwable*)>(&SignatureException::init$))},
	{}
};

$ClassInfo _SignatureException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.SignatureException",
	"java.security.GeneralSecurityException",
	nullptr,
	_SignatureException_FieldInfo_,
	_SignatureException_MethodInfo_
};

$Object* allocate$SignatureException($Class* clazz) {
	return $of($alloc(SignatureException));
}

void SignatureException::init$() {
	$GeneralSecurityException::init$();
}

void SignatureException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void SignatureException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void SignatureException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

SignatureException::SignatureException() {
}

SignatureException::SignatureException(const SignatureException& e) {
}

SignatureException SignatureException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SignatureException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SignatureException::load$($String* name, bool initialize) {
	$loadClass(SignatureException, name, initialize, &_SignatureException_ClassInfo_, allocate$SignatureException);
	return class$;
}

$Class* SignatureException::class$ = nullptr;

	} // security
} // java