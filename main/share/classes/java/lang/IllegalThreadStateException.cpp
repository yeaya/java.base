#include <java/lang/IllegalThreadStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void IllegalThreadStateException::init$() {
	$IllegalArgumentException::init$();
}

void IllegalThreadStateException::init$($String* s) {
	$IllegalArgumentException::init$(s);
}

IllegalThreadStateException::IllegalThreadStateException() {
}

IllegalThreadStateException::IllegalThreadStateException(const IllegalThreadStateException& e) : $IllegalArgumentException(e) {
}

void IllegalThreadStateException::throw$() {
	throw *this;
}

$Class* IllegalThreadStateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalThreadStateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalThreadStateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalThreadStateException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.IllegalThreadStateException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalThreadStateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalThreadStateException);
	});
	return class$;
}

$Class* IllegalThreadStateException::class$ = nullptr;

	} // lang
} // java