#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void IndexOutOfBoundsException::init$() {
	$RuntimeException::init$();
}

void IndexOutOfBoundsException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IndexOutOfBoundsException::init$(int32_t index) {
	$useLocalObjectStack();
	$RuntimeException::init$($$str({"Index out of range: "_s, $$str(index)}));
}

void IndexOutOfBoundsException::init$(int64_t index) {
	$useLocalObjectStack();
	$RuntimeException::init$($$str({"Index out of range: "_s, $$str(index)}));
}

IndexOutOfBoundsException::IndexOutOfBoundsException() {
}

IndexOutOfBoundsException::IndexOutOfBoundsException(const IndexOutOfBoundsException& e) : $RuntimeException(e) {
}

void IndexOutOfBoundsException::throw$() {
	throw *this;
}

$Class* IndexOutOfBoundsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexOutOfBoundsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IndexOutOfBoundsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IndexOutOfBoundsException, init$, void, $String*)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(IndexOutOfBoundsException, init$, void, int32_t)},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(IndexOutOfBoundsException, init$, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IndexOutOfBoundsException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexOutOfBoundsException);
	});
	return class$;
}

$Class* IndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java