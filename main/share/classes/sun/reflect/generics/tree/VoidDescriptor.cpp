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

$FieldInfo _VoidDescriptor_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/VoidDescriptor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VoidDescriptor, singleton)},
	{}
};

$MethodInfo _VoidDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VoidDescriptor::*)()>(&VoidDescriptor::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/VoidDescriptor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VoidDescriptor*(*)()>(&VoidDescriptor::make))},
	{}
};

$ClassInfo _VoidDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.VoidDescriptor",
	"java.lang.Object",
	"sun.reflect.generics.tree.ReturnType",
	_VoidDescriptor_FieldInfo_,
	_VoidDescriptor_MethodInfo_
};

$Object* allocate$VoidDescriptor($Class* clazz) {
	return $of($alloc(VoidDescriptor));
}

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

void clinit$VoidDescriptor($Class* class$) {
	$assignStatic(VoidDescriptor::singleton, $new(VoidDescriptor));
}

VoidDescriptor::VoidDescriptor() {
}

$Class* VoidDescriptor::load$($String* name, bool initialize) {
	$loadClass(VoidDescriptor, name, initialize, &_VoidDescriptor_ClassInfo_, clinit$VoidDescriptor, allocate$VoidDescriptor);
	return class$;
}

$Class* VoidDescriptor::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun