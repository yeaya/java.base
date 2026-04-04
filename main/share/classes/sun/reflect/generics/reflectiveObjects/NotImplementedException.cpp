#include <sun/reflect/generics/reflectiveObjects/NotImplementedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

void NotImplementedException::init$() {
	$RuntimeException::init$();
}

NotImplementedException::NotImplementedException() {
}

NotImplementedException::NotImplementedException(const NotImplementedException& e) : $RuntimeException(e) {
}

void NotImplementedException::throw$() {
	throw *this;
}

$Class* NotImplementedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotImplementedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotImplementedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.reflectiveObjects.NotImplementedException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotImplementedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotImplementedException);
	});
	return class$;
}

$Class* NotImplementedException::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun