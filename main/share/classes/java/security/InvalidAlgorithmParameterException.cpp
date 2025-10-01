#include <java/security/InvalidAlgorithmParameterException.h>

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

$FieldInfo _InvalidAlgorithmParameterException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAlgorithmParameterException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidAlgorithmParameterException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAlgorithmParameterException::*)()>(&InvalidAlgorithmParameterException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAlgorithmParameterException::*)($String*)>(&InvalidAlgorithmParameterException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAlgorithmParameterException::*)($String*,$Throwable*)>(&InvalidAlgorithmParameterException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAlgorithmParameterException::*)($Throwable*)>(&InvalidAlgorithmParameterException::init$))},
	{}
};

$ClassInfo _InvalidAlgorithmParameterException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.InvalidAlgorithmParameterException",
	"java.security.GeneralSecurityException",
	nullptr,
	_InvalidAlgorithmParameterException_FieldInfo_,
	_InvalidAlgorithmParameterException_MethodInfo_
};

$Object* allocate$InvalidAlgorithmParameterException($Class* clazz) {
	return $of($alloc(InvalidAlgorithmParameterException));
}

void InvalidAlgorithmParameterException::init$() {
	$GeneralSecurityException::init$();
}

void InvalidAlgorithmParameterException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void InvalidAlgorithmParameterException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void InvalidAlgorithmParameterException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

InvalidAlgorithmParameterException::InvalidAlgorithmParameterException() {
}

InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const InvalidAlgorithmParameterException& e) {
}

InvalidAlgorithmParameterException InvalidAlgorithmParameterException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidAlgorithmParameterException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidAlgorithmParameterException::load$($String* name, bool initialize) {
	$loadClass(InvalidAlgorithmParameterException, name, initialize, &_InvalidAlgorithmParameterException_ClassInfo_, allocate$InvalidAlgorithmParameterException);
	return class$;
}

$Class* InvalidAlgorithmParameterException::class$ = nullptr;

	} // security
} // java