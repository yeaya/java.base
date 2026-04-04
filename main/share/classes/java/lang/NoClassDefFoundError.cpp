#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void NoClassDefFoundError::init$() {
	$LinkageError::init$();
}

void NoClassDefFoundError::init$($String* s) {
	$LinkageError::init$(s);
}

NoClassDefFoundError::NoClassDefFoundError() {
}

NoClassDefFoundError::NoClassDefFoundError(const NoClassDefFoundError& e) : $LinkageError(e) {
}

void NoClassDefFoundError::throw$() {
	throw *this;
}

$Class* NoClassDefFoundError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoClassDefFoundError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoClassDefFoundError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoClassDefFoundError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NoClassDefFoundError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoClassDefFoundError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoClassDefFoundError);
	});
	return class$;
}

$Class* NoClassDefFoundError::class$ = nullptr;

	} // lang
} // java