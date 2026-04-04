#include <java/lang/module/FindException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

void FindException::init$() {
	$RuntimeException::init$();
}

void FindException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void FindException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void FindException::init$($String* msg, $Throwable* cause) {
	$RuntimeException::init$(msg, cause);
}

FindException::FindException() {
}

FindException::FindException(const FindException& e) : $RuntimeException(e) {
}

void FindException::throw$() {
	throw *this;
}

$Class* FindException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FindException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FindException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(FindException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.module.FindException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FindException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FindException);
	});
	return class$;
}

$Class* FindException::class$ = nullptr;

		} // module
	} // lang
} // java