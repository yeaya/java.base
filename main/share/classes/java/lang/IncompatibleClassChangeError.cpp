#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void IncompatibleClassChangeError::init$() {
	$LinkageError::init$();
}

void IncompatibleClassChangeError::init$($String* s) {
	$LinkageError::init$(s);
}

IncompatibleClassChangeError::IncompatibleClassChangeError() {
}

IncompatibleClassChangeError::IncompatibleClassChangeError(const IncompatibleClassChangeError& e) : $LinkageError(e) {
}

void IncompatibleClassChangeError::throw$() {
	throw *this;
}

$Class* IncompatibleClassChangeError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IncompatibleClassChangeError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IncompatibleClassChangeError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IncompatibleClassChangeError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IncompatibleClassChangeError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IncompatibleClassChangeError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IncompatibleClassChangeError);
	});
	return class$;
}

$Class* IncompatibleClassChangeError::class$ = nullptr;

	} // lang
} // java