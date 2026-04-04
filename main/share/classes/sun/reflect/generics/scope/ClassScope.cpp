#include <sun/reflect/generics/scope/ClassScope.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/generics/scope/AbstractScope.h>
#include <sun/reflect/generics/scope/ConstructorScope.h>
#include <sun/reflect/generics/scope/DummyScope.h>
#include <sun/reflect/generics/scope/MethodScope.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $AbstractScope = ::sun::reflect::generics::scope::AbstractScope;
using $ConstructorScope = ::sun::reflect::generics::scope::ConstructorScope;
using $DummyScope = ::sun::reflect::generics::scope::DummyScope;
using $MethodScope = ::sun::reflect::generics::scope::MethodScope;
using $Scope = ::sun::reflect::generics::scope::Scope;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

void ClassScope::init$($Class* c) {
	$AbstractScope::init$(c);
}

$Scope* ClassScope::computeEnclosingScope() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* receiver = $cast($Class, getRecvr());
	$var($Method, m, $nc(receiver)->getEnclosingMethod());
	if (m != nullptr) {
		return $MethodScope::make(m);
	}
	$var($Constructor, cnstr, receiver->getEnclosingConstructor());
	if (cnstr != nullptr) {
		return $ConstructorScope::make(cnstr);
	}
	$Class* c = receiver->getEnclosingClass();
	if (c != nullptr) {
		return ClassScope::make(c);
	}
	return $DummyScope::make();
}

ClassScope* ClassScope::make($Class* c) {
	$init(ClassScope);
	return $new(ClassScope, c);
}

ClassScope::ClassScope() {
}

$Class* ClassScope::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(ClassScope, init$, void, $Class*)},
		{"computeEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED, $virtualMethod(ClassScope, computeEnclosingScope, $Scope*)},
		{"make", "(Ljava/lang/Class;)Lsun/reflect/generics/scope/ClassScope;", "(Ljava/lang/Class<*>;)Lsun/reflect/generics/scope/ClassScope;", $PUBLIC | $STATIC, $staticMethod(ClassScope, make, ClassScope*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.scope.ClassScope",
		"sun.reflect.generics.scope.AbstractScope",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/reflect/generics/scope/AbstractScope<Ljava/lang/Class<*>;>;Lsun/reflect/generics/scope/Scope;"
	};
	$loadClass(ClassScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassScope);
	});
	return class$;
}

$Class* ClassScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun