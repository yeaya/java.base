#include <java/security/InvalidParameterException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$FieldInfo _InvalidParameterException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidParameterException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidParameterException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidParameterException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidParameterException, init$, void, $String*)},
	{}
};

$ClassInfo _InvalidParameterException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.InvalidParameterException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_InvalidParameterException_FieldInfo_,
	_InvalidParameterException_MethodInfo_
};

$Object* allocate$InvalidParameterException($Class* clazz) {
	return $of($alloc(InvalidParameterException));
}

void InvalidParameterException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidParameterException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidParameterException::InvalidParameterException() {
}

InvalidParameterException::InvalidParameterException(const InvalidParameterException& e) : $IllegalArgumentException(e) {
}

void InvalidParameterException::throw$() {
	throw *this;
}

$Class* InvalidParameterException::load$($String* name, bool initialize) {
	$loadClass(InvalidParameterException, name, initialize, &_InvalidParameterException_ClassInfo_, allocate$InvalidParameterException);
	return class$;
}

$Class* InvalidParameterException::class$ = nullptr;

	} // security
} // java