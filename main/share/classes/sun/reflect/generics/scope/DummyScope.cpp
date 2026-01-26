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

$FieldInfo _DummyScope_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/scope/DummyScope;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DummyScope, singleton)},
	{}
};

$MethodInfo _DummyScope_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DummyScope, init$, void)},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC, $virtualMethod(DummyScope, lookup, $TypeVariable*, $String*)},
	{"make", "()Lsun/reflect/generics/scope/DummyScope;", nullptr, $PUBLIC | $STATIC, $staticMethod(DummyScope, make, DummyScope*)},
	{}
};

$ClassInfo _DummyScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.scope.DummyScope",
	"java.lang.Object",
	"sun.reflect.generics.scope.Scope",
	_DummyScope_FieldInfo_,
	_DummyScope_MethodInfo_
};

$Object* allocate$DummyScope($Class* clazz) {
	return $of($alloc(DummyScope));
}

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

void clinit$DummyScope($Class* class$) {
	$assignStatic(DummyScope::singleton, $new(DummyScope));
}

DummyScope::DummyScope() {
}

$Class* DummyScope::load$($String* name, bool initialize) {
	$loadClass(DummyScope, name, initialize, &_DummyScope_ClassInfo_, clinit$DummyScope, allocate$DummyScope);
	return class$;
}

$Class* DummyScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun