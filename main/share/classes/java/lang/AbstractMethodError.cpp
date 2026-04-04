#include <java/lang/AbstractMethodError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void AbstractMethodError::init$() {
	$IncompatibleClassChangeError::init$();
}

void AbstractMethodError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

AbstractMethodError::AbstractMethodError() {
}

AbstractMethodError::AbstractMethodError(const AbstractMethodError& e) : $IncompatibleClassChangeError(e) {
}

void AbstractMethodError::throw$() {
	throw *this;
}

$Class* AbstractMethodError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractMethodError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractMethodError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AbstractMethodError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.AbstractMethodError",
		"java.lang.IncompatibleClassChangeError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractMethodError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractMethodError);
	});
	return class$;
}

$Class* AbstractMethodError::class$ = nullptr;

	} // lang
} // java