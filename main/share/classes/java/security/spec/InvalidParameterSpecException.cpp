#include <java/security/spec/InvalidParameterSpecException.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidParameterSpecException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidParameterSpecException, init$, void, $String*)},
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

InvalidParameterSpecException::InvalidParameterSpecException(const InvalidParameterSpecException& e) : $GeneralSecurityException(e) {
}

void InvalidParameterSpecException::throw$() {
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