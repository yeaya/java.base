#include <java/lang/NoSuchMethodError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void NoSuchMethodError::init$() {
	$IncompatibleClassChangeError::init$();
}

void NoSuchMethodError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

NoSuchMethodError::NoSuchMethodError() {
}

NoSuchMethodError::NoSuchMethodError(const NoSuchMethodError& e) : $IncompatibleClassChangeError(e) {
}

void NoSuchMethodError::throw$() {
	throw *this;
}

$Class* NoSuchMethodError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMethodError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchMethodError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchMethodError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NoSuchMethodError",
		"java.lang.IncompatibleClassChangeError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchMethodError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchMethodError);
	});
	return class$;
}

$Class* NoSuchMethodError::class$ = nullptr;

	} // lang
} // java