#include <java/lang/NoSuchFieldError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void NoSuchFieldError::init$() {
	$IncompatibleClassChangeError::init$();
}

void NoSuchFieldError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

NoSuchFieldError::NoSuchFieldError() {
}

NoSuchFieldError::NoSuchFieldError(const NoSuchFieldError& e) : $IncompatibleClassChangeError(e) {
}

void NoSuchFieldError::throw$() {
	throw *this;
}

$Class* NoSuchFieldError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchFieldError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchFieldError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchFieldError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NoSuchFieldError",
		"java.lang.IncompatibleClassChangeError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchFieldError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchFieldError);
	});
	return class$;
}

$Class* NoSuchFieldError::class$ = nullptr;

	} // lang
} // java