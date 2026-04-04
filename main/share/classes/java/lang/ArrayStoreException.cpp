#include <java/lang/ArrayStoreException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void ArrayStoreException::init$() {
	$RuntimeException::init$();
}

void ArrayStoreException::init$($String* s) {
	$RuntimeException::init$(s);
}

ArrayStoreException::ArrayStoreException() {
}

ArrayStoreException::ArrayStoreException(const ArrayStoreException& e) : $RuntimeException(e) {
}

void ArrayStoreException::throw$() {
	throw *this;
}

$Class* ArrayStoreException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayStoreException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayStoreException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ArrayStoreException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ArrayStoreException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayStoreException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayStoreException);
	});
	return class$;
}

$Class* ArrayStoreException::class$ = nullptr;

	} // lang
} // java