#include <java/lang/reflect/MalformedParameterizedTypeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _MalformedParameterizedTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedParameterizedTypeException, serialVersionUID)},
	{}
};

$MethodInfo _MalformedParameterizedTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MalformedParameterizedTypeException::*)()>(&MalformedParameterizedTypeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedParameterizedTypeException::*)($String*)>(&MalformedParameterizedTypeException::init$))},
	{}
};

$ClassInfo _MalformedParameterizedTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.MalformedParameterizedTypeException",
	"java.lang.RuntimeException",
	nullptr,
	_MalformedParameterizedTypeException_FieldInfo_,
	_MalformedParameterizedTypeException_MethodInfo_
};

$Object* allocate$MalformedParameterizedTypeException($Class* clazz) {
	return $of($alloc(MalformedParameterizedTypeException));
}

void MalformedParameterizedTypeException::init$() {
	$RuntimeException::init$();
}

void MalformedParameterizedTypeException::init$($String* message) {
	$RuntimeException::init$(message);
}

MalformedParameterizedTypeException::MalformedParameterizedTypeException() {
}

MalformedParameterizedTypeException::MalformedParameterizedTypeException(const MalformedParameterizedTypeException& e) : $RuntimeException(e) {
}

void MalformedParameterizedTypeException::throw$() {
	throw *this;
}

$Class* MalformedParameterizedTypeException::load$($String* name, bool initialize) {
	$loadClass(MalformedParameterizedTypeException, name, initialize, &_MalformedParameterizedTypeException_ClassInfo_, allocate$MalformedParameterizedTypeException);
	return class$;
}

$Class* MalformedParameterizedTypeException::class$ = nullptr;

		} // reflect
	} // lang
} // java