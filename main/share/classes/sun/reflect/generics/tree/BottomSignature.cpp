#include <sun/reflect/generics/tree/BottomSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

BottomSignature* BottomSignature::singleton = nullptr;

void BottomSignature::init$() {
}

BottomSignature* BottomSignature::make() {
	$init(BottomSignature);
	return BottomSignature::singleton;
}

void BottomSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitBottomSignature(this);
}

void BottomSignature::clinit$($Class* clazz) {
	$assignStatic(BottomSignature::singleton, $new(BottomSignature));
}

BottomSignature::BottomSignature() {
}

$Class* BottomSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/BottomSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BottomSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BottomSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(BottomSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/BottomSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(BottomSignature, make, BottomSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.BottomSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.FieldTypeSignature",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BottomSignature, name, initialize, &classInfo$$, BottomSignature::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BottomSignature));
	});
	return class$;
}

$Class* BottomSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun