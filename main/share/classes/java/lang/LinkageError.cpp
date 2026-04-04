#include <java/lang/LinkageError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void LinkageError::init$() {
	$Error::init$();
}

void LinkageError::init$($String* s) {
	$Error::init$(s);
}

void LinkageError::init$($String* s, $Throwable* cause) {
	$Error::init$(s, cause);
}

LinkageError::LinkageError() {
}

LinkageError::LinkageError(const LinkageError& e) : $Error(e) {
}

void LinkageError::throw$() {
	throw *this;
}

$Class* LinkageError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkageError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LinkageError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkageError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LinkageError, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.LinkageError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LinkageError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkageError);
	});
	return class$;
}

$Class* LinkageError::class$ = nullptr;

	} // lang
} // java