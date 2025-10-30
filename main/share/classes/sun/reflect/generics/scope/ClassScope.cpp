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
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
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

$MethodInfo _ClassScope_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(ClassScope::*)($Class*)>(&ClassScope::init$))},
	{"computeEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED},
	{"make", "(Ljava/lang/Class;)Lsun/reflect/generics/scope/ClassScope;", "(Ljava/lang/Class<*>;)Lsun/reflect/generics/scope/ClassScope;", $PUBLIC | $STATIC, $method(static_cast<ClassScope*(*)($Class*)>(&ClassScope::make))},
	{}
};

$ClassInfo _ClassScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.scope.ClassScope",
	"sun.reflect.generics.scope.AbstractScope",
	nullptr,
	nullptr,
	_ClassScope_MethodInfo_,
	"Lsun/reflect/generics/scope/AbstractScope<Ljava/lang/Class<*>;>;Lsun/reflect/generics/scope/Scope;"
};

$Object* allocate$ClassScope($Class* clazz) {
	return $of($alloc(ClassScope));
}

void ClassScope::init$($Class* c) {
	$AbstractScope::init$(c);
}

$Scope* ClassScope::computeEnclosingScope() {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(ClassScope, name, initialize, &_ClassScope_ClassInfo_, allocate$ClassScope);
	return class$;
}

$Class* ClassScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun