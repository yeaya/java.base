#include <java/lang/InstantiationError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void InstantiationError::init$() {
	$IncompatibleClassChangeError::init$();
}

void InstantiationError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

InstantiationError::InstantiationError() {
}

InstantiationError::InstantiationError(const InstantiationError& e) : $IncompatibleClassChangeError(e) {
}

void InstantiationError::throw$() {
	throw *this;
}

$Class* InstantiationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstantiationError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InstantiationError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InstantiationError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.InstantiationError",
		"java.lang.IncompatibleClassChangeError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstantiationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstantiationError);
	});
	return class$;
}

$Class* InstantiationError::class$ = nullptr;

	} // lang
} // java