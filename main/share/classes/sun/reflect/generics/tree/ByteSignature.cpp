#include <sun/reflect/generics/tree/ByteSignature.h>
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

ByteSignature* ByteSignature::singleton = nullptr;

void ByteSignature::init$() {
}

ByteSignature* ByteSignature::make() {
	$init(ByteSignature);
	return ByteSignature::singleton;
}

void ByteSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitByteSignature(this);
}

void ByteSignature::clinit$($Class* clazz) {
	$assignStatic(ByteSignature::singleton, $new(ByteSignature));
}

ByteSignature::ByteSignature() {
}

$Class* ByteSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/ByteSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ByteSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(ByteSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/ByteSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(ByteSignature, make, ByteSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.ByteSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteSignature, name, initialize, &classInfo$$, ByteSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ByteSignature);
	});
	return class$;
}

$Class* ByteSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun