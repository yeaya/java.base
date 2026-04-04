#include <sun/reflect/generics/tree/VoidDescriptor.h>
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

VoidDescriptor* VoidDescriptor::singleton = nullptr;

void VoidDescriptor::init$() {
}

VoidDescriptor* VoidDescriptor::make() {
	$init(VoidDescriptor);
	return VoidDescriptor::singleton;
}

void VoidDescriptor::accept($TypeTreeVisitor* v) {
	$nc(v)->visitVoidDescriptor(this);
}

void VoidDescriptor::clinit$($Class* clazz) {
	$assignStatic(VoidDescriptor::singleton, $new(VoidDescriptor));
}

VoidDescriptor::VoidDescriptor() {
}

$Class* VoidDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/VoidDescriptor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VoidDescriptor, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(VoidDescriptor, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(VoidDescriptor, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/VoidDescriptor;", nullptr, $PUBLIC | $STATIC, $staticMethod(VoidDescriptor, make, VoidDescriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.VoidDescriptor",
		"java.lang.Object",
		"sun.reflect.generics.tree.ReturnType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VoidDescriptor, name, initialize, &classInfo$$, VoidDescriptor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VoidDescriptor);
	});
	return class$;
}

$Class* VoidDescriptor::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun