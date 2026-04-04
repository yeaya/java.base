#include <java/lang/reflect/InaccessibleObjectException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

void InaccessibleObjectException::init$() {
	$RuntimeException::init$();
}

void InaccessibleObjectException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

InaccessibleObjectException::InaccessibleObjectException() {
}

InaccessibleObjectException::InaccessibleObjectException(const InaccessibleObjectException& e) : $RuntimeException(e) {
}

void InaccessibleObjectException::throw$() {
	throw *this;
}

$Class* InaccessibleObjectException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InaccessibleObjectException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InaccessibleObjectException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InaccessibleObjectException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.reflect.InaccessibleObjectException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InaccessibleObjectException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InaccessibleObjectException);
	});
	return class$;
}

$Class* InaccessibleObjectException::class$ = nullptr;

		} // reflect
	} // lang
} // java