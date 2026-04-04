#include <sun/reflect/generics/tree/LongSignature.h>
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

LongSignature* LongSignature::singleton = nullptr;

void LongSignature::init$() {
}

LongSignature* LongSignature::make() {
	$init(LongSignature);
	return LongSignature::singleton;
}

void LongSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitLongSignature(this);
}

void LongSignature::clinit$($Class* clazz) {
	$assignStatic(LongSignature::singleton, $new(LongSignature));
}

LongSignature::LongSignature() {
}

$Class* LongSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/LongSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LongSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LongSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(LongSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/LongSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(LongSignature, make, LongSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.LongSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongSignature, name, initialize, &classInfo$$, LongSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LongSignature);
	});
	return class$;
}

$Class* LongSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun