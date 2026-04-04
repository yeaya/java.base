#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

void NoSuchElementException::init$() {
	$RuntimeException::init$();
}

void NoSuchElementException::init$($String* s, $Throwable* cause) {
	$RuntimeException::init$(s, cause);
}

void NoSuchElementException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void NoSuchElementException::init$($String* s) {
	$RuntimeException::init$(s);
}

NoSuchElementException::NoSuchElementException() {
}

NoSuchElementException::NoSuchElementException(const NoSuchElementException& e) : $RuntimeException(e) {
}

void NoSuchElementException::throw$() {
	throw *this;
}

$Class* NoSuchElementException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchElementException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchElementException, init$, void)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchElementException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchElementException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchElementException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.NoSuchElementException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchElementException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchElementException);
	});
	return class$;
}

$Class* NoSuchElementException::class$ = nullptr;

	} // util
} // java