#include <java/util/InputMismatchException.h>

#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _InputMismatchException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputMismatchException, serialVersionUID)},
	{}
};

$MethodInfo _InputMismatchException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InputMismatchException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InputMismatchException, init$, void, $String*)},
	{}
};

$ClassInfo _InputMismatchException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.InputMismatchException",
	"java.util.NoSuchElementException",
	nullptr,
	_InputMismatchException_FieldInfo_,
	_InputMismatchException_MethodInfo_
};

$Object* allocate$InputMismatchException($Class* clazz) {
	return $of($alloc(InputMismatchException));
}

void InputMismatchException::init$() {
	$NoSuchElementException::init$();
}

void InputMismatchException::init$($String* s) {
	$NoSuchElementException::init$(s);
}

InputMismatchException::InputMismatchException() {
}

InputMismatchException::InputMismatchException(const InputMismatchException& e) : $NoSuchElementException(e) {
}

void InputMismatchException::throw$() {
	throw *this;
}

$Class* InputMismatchException::load$($String* name, bool initialize) {
	$loadClass(InputMismatchException, name, initialize, &_InputMismatchException_ClassInfo_, allocate$InputMismatchException);
	return class$;
}

$Class* InputMismatchException::class$ = nullptr;

	} // util
} // java