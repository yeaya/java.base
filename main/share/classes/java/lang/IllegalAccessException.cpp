#include <java/lang/IllegalAccessException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

void IllegalAccessException::init$() {
	$ReflectiveOperationException::init$();
}

void IllegalAccessException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

IllegalAccessException::IllegalAccessException() {
}

IllegalAccessException::IllegalAccessException(const IllegalAccessException& e) : $ReflectiveOperationException(e) {
}

void IllegalAccessException::throw$() {
	throw *this;
}

$Class* IllegalAccessException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalAccessException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalAccessException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalAccessException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalAccessException",
		"java.lang.ReflectiveOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalAccessException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalAccessException);
	});
	return class$;
}

$Class* IllegalAccessException::class$ = nullptr;

	} // lang
} // java