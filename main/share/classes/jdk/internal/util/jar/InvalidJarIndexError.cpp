#include <jdk/internal/util/jar/InvalidJarIndexError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {

void InvalidJarIndexError::init$() {
	$Error::init$();
}

void InvalidJarIndexError::init$($String* s) {
	$Error::init$(s);
}

InvalidJarIndexError::InvalidJarIndexError() {
}

InvalidJarIndexError::InvalidJarIndexError(const InvalidJarIndexError& e) : $Error(e) {
}

void InvalidJarIndexError::throw$() {
	throw *this;
}

$Class* InvalidJarIndexError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidJarIndexError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidJarIndexError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidJarIndexError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.util.jar.InvalidJarIndexError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidJarIndexError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidJarIndexError);
	});
	return class$;
}

$Class* InvalidJarIndexError::class$ = nullptr;

			} // jar
		} // util
	} // internal
} // jdk