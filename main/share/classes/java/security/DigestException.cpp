#include <java/security/DigestException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {

$FieldInfo _DigestException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestException, serialVersionUID)},
	{}
};

$MethodInfo _DigestException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DigestException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DigestException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _DigestException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.DigestException",
	"java.security.GeneralSecurityException",
	nullptr,
	_DigestException_FieldInfo_,
	_DigestException_MethodInfo_
};

$Object* allocate$DigestException($Class* clazz) {
	return $of($alloc(DigestException));
}

void DigestException::init$() {
	$GeneralSecurityException::init$();
}

void DigestException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void DigestException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void DigestException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

DigestException::DigestException() {
}

DigestException::DigestException(const DigestException& e) : $GeneralSecurityException(e) {
}

void DigestException::throw$() {
	throw *this;
}

$Class* DigestException::load$($String* name, bool initialize) {
	$loadClass(DigestException, name, initialize, &_DigestException_ClassInfo_, allocate$DigestException);
	return class$;
}

$Class* DigestException::class$ = nullptr;

	} // security
} // java