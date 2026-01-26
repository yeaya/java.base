#include <java/lang/ArithmeticException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _ArithmeticException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArithmeticException, serialVersionUID)},
	{}
};

$MethodInfo _ArithmeticException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ArithmeticException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ArithmeticException, init$, void, $String*)},
	{}
};

$ClassInfo _ArithmeticException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ArithmeticException",
	"java.lang.RuntimeException",
	nullptr,
	_ArithmeticException_FieldInfo_,
	_ArithmeticException_MethodInfo_
};

$Object* allocate$ArithmeticException($Class* clazz) {
	return $of($alloc(ArithmeticException));
}

void ArithmeticException::init$() {
	$RuntimeException::init$();
}

void ArithmeticException::init$($String* s) {
	$RuntimeException::init$(s);
}

ArithmeticException::ArithmeticException() {
}

ArithmeticException::ArithmeticException(const ArithmeticException& e) : $RuntimeException(e) {
}

void ArithmeticException::throw$() {
	throw *this;
}

$Class* ArithmeticException::load$($String* name, bool initialize) {
	$loadClass(ArithmeticException, name, initialize, &_ArithmeticException_ClassInfo_, allocate$ArithmeticException);
	return class$;
}

$Class* ArithmeticException::class$ = nullptr;

	} // lang
} // java