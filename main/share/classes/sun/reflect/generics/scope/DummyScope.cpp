#include <sun/reflect/generics/scope/DummyScope.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

DummyScope* DummyScope::singleton = nullptr;

void DummyScope::init$() {
}

DummyScope* DummyScope::make() {
	$init(DummyScope);
	return DummyScope::singleton;
}

$TypeVariable* DummyScope::lookup($String* name) {
	return nullptr;
}

void DummyScope::clinit$($Class* clazz) {
	$assignStatic(DummyScope::singleton, $new(DummyScope));
}

DummyScope::DummyScope() {
}

$Class* DummyScope::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/scope/DummyScope;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DummyScope, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DummyScope, init$, void)},
		{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC, $virtualMethod(DummyScope, lookup, $TypeVariable*, $String*)},
		{"make", "()Lsun/reflect/generics/scope/DummyScope;", nullptr, $PUBLIC | $STATIC, $staticMethod(DummyScope, make, DummyScope*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.scope.DummyScope",
		"java.lang.Object",
		"sun.reflect.generics.scope.Scope",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummyScope, name, initialize, &classInfo$$, DummyScope::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DummyScope);
	});
	return class$;
}

$Class* DummyScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun