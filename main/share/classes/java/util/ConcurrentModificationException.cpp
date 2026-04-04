#include <java/util/ConcurrentModificationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

void ConcurrentModificationException::init$() {
	$RuntimeException::init$();
}

void ConcurrentModificationException::init$($String* message) {
	$RuntimeException::init$(message);
}

void ConcurrentModificationException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void ConcurrentModificationException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

ConcurrentModificationException::ConcurrentModificationException() {
}

ConcurrentModificationException::ConcurrentModificationException(const ConcurrentModificationException& e) : $RuntimeException(e) {
}

void ConcurrentModificationException::throw$() {
	throw *this;
}

$Class* ConcurrentModificationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentModificationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConcurrentModificationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConcurrentModificationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ConcurrentModificationException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ConcurrentModificationException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.ConcurrentModificationException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConcurrentModificationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentModificationException);
	});
	return class$;
}

$Class* ConcurrentModificationException::class$ = nullptr;

	} // util
} // java