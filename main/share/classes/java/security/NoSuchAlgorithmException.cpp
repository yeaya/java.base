#include <java/security/NoSuchAlgorithmException.h>

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

$FieldInfo _NoSuchAlgorithmException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchAlgorithmException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchAlgorithmException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAlgorithmException::*)()>(&NoSuchAlgorithmException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAlgorithmException::*)($String*)>(&NoSuchAlgorithmException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAlgorithmException::*)($String*,$Throwable*)>(&NoSuchAlgorithmException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchAlgorithmException::*)($Throwable*)>(&NoSuchAlgorithmException::init$))},
	{}
};

$ClassInfo _NoSuchAlgorithmException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.NoSuchAlgorithmException",
	"java.security.GeneralSecurityException",
	nullptr,
	_NoSuchAlgorithmException_FieldInfo_,
	_NoSuchAlgorithmException_MethodInfo_
};

$Object* allocate$NoSuchAlgorithmException($Class* clazz) {
	return $of($alloc(NoSuchAlgorithmException));
}

void NoSuchAlgorithmException::init$() {
	$GeneralSecurityException::init$();
}

void NoSuchAlgorithmException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void NoSuchAlgorithmException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void NoSuchAlgorithmException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

NoSuchAlgorithmException::NoSuchAlgorithmException() {
}

NoSuchAlgorithmException::NoSuchAlgorithmException(const NoSuchAlgorithmException& e) {
}

NoSuchAlgorithmException NoSuchAlgorithmException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoSuchAlgorithmException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoSuchAlgorithmException::load$($String* name, bool initialize) {
	$loadClass(NoSuchAlgorithmException, name, initialize, &_NoSuchAlgorithmException_ClassInfo_, allocate$NoSuchAlgorithmException);
	return class$;
}

$Class* NoSuchAlgorithmException::class$ = nullptr;

	} // security
} // java