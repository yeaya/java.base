#include <java/nio/file/ProviderNotFoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {
		namespace file {

void ProviderNotFoundException::init$() {
	$RuntimeException::init$();
}

void ProviderNotFoundException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

ProviderNotFoundException::ProviderNotFoundException() {
}

ProviderNotFoundException::ProviderNotFoundException(const ProviderNotFoundException& e) : $RuntimeException(e) {
}

void ProviderNotFoundException::throw$() {
	throw *this;
}

$Class* ProviderNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProviderNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProviderNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProviderNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ProviderNotFoundException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProviderNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderNotFoundException);
	});
	return class$;
}

$Class* ProviderNotFoundException::class$ = nullptr;

		} // file
	} // nio
} // java