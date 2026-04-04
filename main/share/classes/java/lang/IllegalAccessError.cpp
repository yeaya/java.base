#include <java/lang/IllegalAccessError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void IllegalAccessError::init$() {
	$IncompatibleClassChangeError::init$();
}

void IllegalAccessError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

IllegalAccessError::IllegalAccessError() {
}

IllegalAccessError::IllegalAccessError(const IllegalAccessError& e) : $IncompatibleClassChangeError(e) {
}

void IllegalAccessError::throw$() {
	throw *this;
}

$Class* IllegalAccessError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalAccessError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalAccessError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalAccessError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalAccessError",
		"java.lang.IncompatibleClassChangeError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalAccessError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalAccessError);
	});
	return class$;
}

$Class* IllegalAccessError::class$ = nullptr;

	} // lang
} // java