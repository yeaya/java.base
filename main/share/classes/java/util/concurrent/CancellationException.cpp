#include <java/util/concurrent/CancellationException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void CancellationException::init$() {
	$IllegalStateException::init$();
}

void CancellationException::init$($String* message) {
	$IllegalStateException::init$(message);
}

CancellationException::CancellationException() {
}

CancellationException::CancellationException(const CancellationException& e) : $IllegalStateException(e) {
}

void CancellationException::throw$() {
	throw *this;
}

$Class* CancellationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CancellationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CancellationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CancellationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.CancellationException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CancellationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CancellationException);
	});
	return class$;
}

$Class* CancellationException::class$ = nullptr;

		} // concurrent
	} // util
} // java