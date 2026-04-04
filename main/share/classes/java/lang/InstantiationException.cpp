#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

void InstantiationException::init$() {
	$ReflectiveOperationException::init$();
}

void InstantiationException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

InstantiationException::InstantiationException() {
}

InstantiationException::InstantiationException(const InstantiationException& e) : $ReflectiveOperationException(e) {
}

void InstantiationException::throw$() {
	throw *this;
}

$Class* InstantiationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstantiationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InstantiationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InstantiationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.InstantiationException",
		"java.lang.ReflectiveOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstantiationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstantiationException);
	});
	return class$;
}

$Class* InstantiationException::class$ = nullptr;

	} // lang
} // java