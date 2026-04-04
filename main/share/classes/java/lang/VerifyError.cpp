#include <java/lang/VerifyError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void VerifyError::init$() {
	$LinkageError::init$();
}

void VerifyError::init$($String* s) {
	$LinkageError::init$(s);
}

VerifyError::VerifyError() {
}

VerifyError::VerifyError(const VerifyError& e) : $LinkageError(e) {
}

void VerifyError::throw$() {
	throw *this;
}

$Class* VerifyError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VerifyError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VerifyError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.VerifyError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VerifyError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyError);
	});
	return class$;
}

$Class* VerifyError::class$ = nullptr;

	} // lang
} // java