#include <jdk/internal/org/objectweb/asm/tree/UnsupportedClassVersionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void UnsupportedClassVersionException::init$() {
	$RuntimeException::init$();
}

UnsupportedClassVersionException::UnsupportedClassVersionException() {
}

UnsupportedClassVersionException::UnsupportedClassVersionException(const UnsupportedClassVersionException& e) : $RuntimeException(e) {
}

void UnsupportedClassVersionException::throw$() {
	throw *this;
}

$Class* UnsupportedClassVersionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedClassVersionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedClassVersionException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.UnsupportedClassVersionException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedClassVersionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedClassVersionException);
	});
	return class$;
}

$Class* UnsupportedClassVersionException::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk