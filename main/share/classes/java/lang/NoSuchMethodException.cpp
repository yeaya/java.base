#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

void NoSuchMethodException::init$() {
	$ReflectiveOperationException::init$();
}

void NoSuchMethodException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

NoSuchMethodException::NoSuchMethodException() {
}

NoSuchMethodException::NoSuchMethodException(const NoSuchMethodException& e) : $ReflectiveOperationException(e) {
}

void NoSuchMethodException::throw$() {
	throw *this;
}

$Class* NoSuchMethodException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMethodException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchMethodException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchMethodException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NoSuchMethodException",
		"java.lang.ReflectiveOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchMethodException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchMethodException);
	});
	return class$;
}

$Class* NoSuchMethodException::class$ = nullptr;

	} // lang
} // java