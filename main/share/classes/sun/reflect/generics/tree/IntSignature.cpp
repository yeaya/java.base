#include <sun/reflect/generics/tree/IntSignature.h>
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

IntSignature* IntSignature::singleton = nullptr;

void IntSignature::init$() {
}

IntSignature* IntSignature::make() {
	$init(IntSignature);
	return IntSignature::singleton;
}

void IntSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitIntSignature(this);
}

void IntSignature::clinit$($Class* clazz) {
	$assignStatic(IntSignature::singleton, $new(IntSignature));
}

IntSignature::IntSignature() {
}

$Class* IntSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/IntSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IntSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(IntSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/IntSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(IntSignature, make, IntSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.IntSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntSignature, name, initialize, &classInfo$$, IntSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IntSignature);
	});
	return class$;
}

$Class* IntSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun