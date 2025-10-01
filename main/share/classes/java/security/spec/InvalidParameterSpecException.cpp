#include <java/security/spec/InvalidParameterSpecException.h>

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

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _InvalidParameterSpecException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidParameterSpecException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidParameterSpecException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidParameterSpecException::*)()>(&InvalidParameterSpecException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidParameterSpecException::*)($String*)>(&InvalidParameterSpecException::init$))},
	{}
};

$ClassInfo _InvalidParameterSpecException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.InvalidParameterSpecException",
	"java.security.GeneralSecurityException",
	nullptr,
	_InvalidParameterSpecException_FieldInfo_,
	_InvalidParameterSpecException_MethodInfo_
};

$Object* allocate$InvalidParameterSpecException($Class* clazz) {
	return $of($alloc(InvalidParameterSpecException));
}

void InvalidParameterSpecException::init$() {
	$GeneralSecurityException::init$();
}

void InvalidParameterSpecException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

InvalidParameterSpecException::InvalidParameterSpecException() {
}

InvalidParameterSpecException::InvalidParameterSpecException(const InvalidParameterSpecException& e) {
}

InvalidParameterSpecException InvalidParameterSpecException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidParameterSpecException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidParameterSpecException::load$($String* name, bool initialize) {
	$loadClass(InvalidParameterSpecException, name, initialize, &_InvalidParameterSpecException_ClassInfo_, allocate$InvalidParameterSpecException);
	return class$;
}

$Class* InvalidParameterSpecException::class$ = nullptr;

		} // spec
	} // security
} // java