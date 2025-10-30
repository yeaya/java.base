#include <java/lang/reflect/GenericSignatureFormatError.h>

#include <java/lang/ClassFormatError.h>
#include <jcpp.h>

using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _GenericSignatureFormatError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GenericSignatureFormatError, serialVersionUID)},
	{}
};

$MethodInfo _GenericSignatureFormatError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GenericSignatureFormatError::*)()>(&GenericSignatureFormatError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(GenericSignatureFormatError::*)($String*)>(&GenericSignatureFormatError::init$))},
	{}
};

$ClassInfo _GenericSignatureFormatError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.GenericSignatureFormatError",
	"java.lang.ClassFormatError",
	nullptr,
	_GenericSignatureFormatError_FieldInfo_,
	_GenericSignatureFormatError_MethodInfo_
};

$Object* allocate$GenericSignatureFormatError($Class* clazz) {
	return $of($alloc(GenericSignatureFormatError));
}

void GenericSignatureFormatError::init$() {
	$ClassFormatError::init$();
}

void GenericSignatureFormatError::init$($String* message) {
	$ClassFormatError::init$(message);
}

GenericSignatureFormatError::GenericSignatureFormatError() {
}

GenericSignatureFormatError::GenericSignatureFormatError(const GenericSignatureFormatError& e) : $ClassFormatError(e) {
}

void GenericSignatureFormatError::throw$() {
	throw *this;
}

$Class* GenericSignatureFormatError::load$($String* name, bool initialize) {
	$loadClass(GenericSignatureFormatError, name, initialize, &_GenericSignatureFormatError_ClassInfo_, allocate$GenericSignatureFormatError);
	return class$;
}

$Class* GenericSignatureFormatError::class$ = nullptr;

		} // reflect
	} // lang
} // java