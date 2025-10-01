#include <javax/crypto/ExemptionMechanismException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

$FieldInfo _ExemptionMechanismException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExemptionMechanismException, serialVersionUID)},
	{}
};

$MethodInfo _ExemptionMechanismException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExemptionMechanismException::*)()>(&ExemptionMechanismException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ExemptionMechanismException::*)($String*)>(&ExemptionMechanismException::init$))},
	{}
};

$ClassInfo _ExemptionMechanismException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.ExemptionMechanismException",
	"java.security.GeneralSecurityException",
	nullptr,
	_ExemptionMechanismException_FieldInfo_,
	_ExemptionMechanismException_MethodInfo_
};

$Object* allocate$ExemptionMechanismException($Class* clazz) {
	return $of($alloc(ExemptionMechanismException));
}

void ExemptionMechanismException::init$() {
	$GeneralSecurityException::init$();
}

void ExemptionMechanismException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

ExemptionMechanismException::ExemptionMechanismException() {
}

ExemptionMechanismException::ExemptionMechanismException(const ExemptionMechanismException& e) {
}

ExemptionMechanismException ExemptionMechanismException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ExemptionMechanismException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ExemptionMechanismException::load$($String* name, bool initialize) {
	$loadClass(ExemptionMechanismException, name, initialize, &_ExemptionMechanismException_ClassInfo_, allocate$ExemptionMechanismException);
	return class$;
}

$Class* ExemptionMechanismException::class$ = nullptr;

	} // crypto
} // javax