#include <sun/reflect/generics/tree/BooleanSignature.h>
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

BooleanSignature* BooleanSignature::singleton = nullptr;

void BooleanSignature::init$() {
}

BooleanSignature* BooleanSignature::make() {
	$init(BooleanSignature);
	return BooleanSignature::singleton;
}

void BooleanSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitBooleanSignature(this);
}

void BooleanSignature::clinit$($Class* clazz) {
	$assignStatic(BooleanSignature::singleton, $new(BooleanSignature));
}

BooleanSignature::BooleanSignature() {
}

$Class* BooleanSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/BooleanSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BooleanSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BooleanSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(BooleanSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/BooleanSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(BooleanSignature, make, BooleanSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.BooleanSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BooleanSignature, name, initialize, &classInfo$$, BooleanSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BooleanSignature);
	});
	return class$;
}

$Class* BooleanSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun