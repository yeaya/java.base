#include <sun/reflect/generics/scope/MethodScope.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/generics/scope/AbstractScope.h>
#include <sun/reflect/generics/scope/ClassScope.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Executable = ::java::lang::reflect::Executable;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Method = ::java::lang::reflect::Method;
using $AbstractScope = ::sun::reflect::generics::scope::AbstractScope;
using $ClassScope = ::sun::reflect::generics::scope::ClassScope;
using $Scope = ::sun::reflect::generics::scope::Scope;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

$MethodInfo _MethodScope_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(MethodScope::*)($Method*)>(&MethodScope::init$))},
	{"computeEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED},
	{"getEnclosingClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(MethodScope::*)()>(&MethodScope::getEnclosingClass))},
	{"make", "(Ljava/lang/reflect/Method;)Lsun/reflect/generics/scope/MethodScope;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MethodScope*(*)($Method*)>(&MethodScope::make))},
	{}
};

$ClassInfo _MethodScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.scope.MethodScope",
	"sun.reflect.generics.scope.AbstractScope",
	nullptr,
	nullptr,
	_MethodScope_MethodInfo_,
	"Lsun/reflect/generics/scope/AbstractScope<Ljava/lang/reflect/Method;>;"
};

$Object* allocate$MethodScope($Class* clazz) {
	return $of($alloc(MethodScope));
}

void MethodScope::init$($Method* m) {
	$AbstractScope::init$(m);
}

$Class* MethodScope::getEnclosingClass() {
	return $nc(($cast($Method, $(getRecvr()))))->getDeclaringClass();
}

$Scope* MethodScope::computeEnclosingScope() {
	return $ClassScope::make(getEnclosingClass());
}

MethodScope* MethodScope::make($Method* m) {
	$init(MethodScope);
	return $new(MethodScope, m);
}

MethodScope::MethodScope() {
}

$Class* MethodScope::load$($String* name, bool initialize) {
	$loadClass(MethodScope, name, initialize, &_MethodScope_ClassInfo_, allocate$MethodScope);
	return class$;
}

$Class* MethodScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun