#include <sun/reflect/generics/tree/DoubleSignature.h>
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

DoubleSignature* DoubleSignature::singleton = nullptr;

void DoubleSignature::init$() {
}

DoubleSignature* DoubleSignature::make() {
	$init(DoubleSignature);
	return DoubleSignature::singleton;
}

void DoubleSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitDoubleSignature(this);
}

void DoubleSignature::clinit$($Class* clazz) {
	$assignStatic(DoubleSignature::singleton, $new(DoubleSignature));
}

DoubleSignature::DoubleSignature() {
}

$Class* DoubleSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/DoubleSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DoubleSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DoubleSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(DoubleSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/DoubleSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(DoubleSignature, make, DoubleSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.DoubleSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoubleSignature, name, initialize, &classInfo$$, DoubleSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleSignature);
	});
	return class$;
}

$Class* DoubleSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun