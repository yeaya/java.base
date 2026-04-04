#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ArrayIndexOutOfBoundsException::init$() {
	$IndexOutOfBoundsException::init$();
}

void ArrayIndexOutOfBoundsException::init$($String* s) {
	$IndexOutOfBoundsException::init$(s);
}

void ArrayIndexOutOfBoundsException::init$(int32_t index) {
	$useLocalObjectStack();
	$IndexOutOfBoundsException::init$($$str({"Array index out of range: "_s, $$str(index)}));
}

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() {
}

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ArrayIndexOutOfBoundsException& e) : $IndexOutOfBoundsException(e) {
}

void ArrayIndexOutOfBoundsException::throw$() {
	throw *this;
}

$Class* ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayIndexOutOfBoundsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayIndexOutOfBoundsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ArrayIndexOutOfBoundsException, init$, void, $String*)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ArrayIndexOutOfBoundsException, init$, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ArrayIndexOutOfBoundsException",
		"java.lang.IndexOutOfBoundsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayIndexOutOfBoundsException);
	});
	return class$;
}

$Class* ArrayIndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java