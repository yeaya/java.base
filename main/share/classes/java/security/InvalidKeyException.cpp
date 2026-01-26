#include <java/security/InvalidKeyException.h>

#include <java/security/KeyException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyException = ::java::security::KeyException;

namespace java {
	namespace security {

$FieldInfo _InvalidKeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidKeyException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidKeyException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _InvalidKeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.InvalidKeyException",
	"java.security.KeyException",
	nullptr,
	_InvalidKeyException_FieldInfo_,
	_InvalidKeyException_MethodInfo_
};

$Object* allocate$InvalidKeyException($Class* clazz) {
	return $of($alloc(InvalidKeyException));
}

void InvalidKeyException::init$() {
	$KeyException::init$();
}

void InvalidKeyException::init$($String* msg) {
	$KeyException::init$(msg);
}

void InvalidKeyException::init$($String* message, $Throwable* cause) {
	$KeyException::init$(message, cause);
}

void InvalidKeyException::init$($Throwable* cause) {
	$KeyException::init$(cause);
}

InvalidKeyException::InvalidKeyException() {
}

InvalidKeyException::InvalidKeyException(const InvalidKeyException& e) : $KeyException(e) {
}

void InvalidKeyException::throw$() {
	throw *this;
}

$Class* InvalidKeyException::load$($String* name, bool initialize) {
	$loadClass(InvalidKeyException, name, initialize, &_InvalidKeyException_ClassInfo_, allocate$InvalidKeyException);
	return class$;
}

$Class* InvalidKeyException::class$ = nullptr;

	} // security
} // java