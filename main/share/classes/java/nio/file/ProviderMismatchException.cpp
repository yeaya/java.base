#include <java/nio/file/ProviderMismatchException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

void ProviderMismatchException::init$() {
	$IllegalArgumentException::init$();
}

void ProviderMismatchException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

ProviderMismatchException::ProviderMismatchException() {
}

ProviderMismatchException::ProviderMismatchException(const ProviderMismatchException& e) : $IllegalArgumentException(e) {
}

void ProviderMismatchException::throw$() {
	throw *this;
}

$Class* ProviderMismatchException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProviderMismatchException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProviderMismatchException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProviderMismatchException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ProviderMismatchException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProviderMismatchException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderMismatchException);
	});
	return class$;
}

$Class* ProviderMismatchException::class$ = nullptr;

		} // file
	} // nio
} // java