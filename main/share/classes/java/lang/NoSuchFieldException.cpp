#include <java/lang/NoSuchFieldException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

void NoSuchFieldException::init$() {
	$ReflectiveOperationException::init$();
}

void NoSuchFieldException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

NoSuchFieldException::NoSuchFieldException() {
}

NoSuchFieldException::NoSuchFieldException(const NoSuchFieldException& e) : $ReflectiveOperationException(e) {
}

void NoSuchFieldException::throw$() {
	throw *this;
}

$Class* NoSuchFieldException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchFieldException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchFieldException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchFieldException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NoSuchFieldException",
		"java.lang.ReflectiveOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchFieldException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchFieldException);
	});
	return class$;
}

$Class* NoSuchFieldException::class$ = nullptr;

	} // lang
} // java