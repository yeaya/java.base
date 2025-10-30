#include <java/lang/reflect/MalformedParametersException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _MalformedParametersException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedParametersException, serialVersionUID)},
	{}
};

$MethodInfo _MalformedParametersException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MalformedParametersException::*)()>(&MalformedParametersException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedParametersException::*)($String*)>(&MalformedParametersException::init$))},
	{}
};

$ClassInfo _MalformedParametersException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.MalformedParametersException",
	"java.lang.RuntimeException",
	nullptr,
	_MalformedParametersException_FieldInfo_,
	_MalformedParametersException_MethodInfo_
};

$Object* allocate$MalformedParametersException($Class* clazz) {
	return $of($alloc(MalformedParametersException));
}

void MalformedParametersException::init$() {
	$RuntimeException::init$();
}

void MalformedParametersException::init$($String* reason) {
	$RuntimeException::init$(reason);
}

MalformedParametersException::MalformedParametersException() {
}

MalformedParametersException::MalformedParametersException(const MalformedParametersException& e) : $RuntimeException(e) {
}

void MalformedParametersException::throw$() {
	throw *this;
}

$Class* MalformedParametersException::load$($String* name, bool initialize) {
	$loadClass(MalformedParametersException, name, initialize, &_MalformedParametersException_ClassInfo_, allocate$MalformedParametersException);
	return class$;
}

$Class* MalformedParametersException::class$ = nullptr;

		} // reflect
	} // lang
} // java