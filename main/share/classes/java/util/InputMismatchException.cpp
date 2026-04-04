#include <java/util/InputMismatchException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputMismatchException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InputMismatchException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InputMismatchException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.InputMismatchException",
		"java.util.NoSuchElementException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputMismatchException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMismatchException);
	});
	return class$;
}

$Class* InputMismatchException::class$ = nullptr;

	} // util
} // java