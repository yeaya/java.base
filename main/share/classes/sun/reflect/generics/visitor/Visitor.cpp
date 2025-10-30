#include <sun/reflect/generics/visitor/Visitor.h>

#include <sun/reflect/generics/tree/ClassSignature.h>
#include <sun/reflect/generics/tree/MethodTypeSignature.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassSignature = ::sun::reflect::generics::tree::ClassSignature;
using $MethodTypeSignature = ::sun::reflect::generics::tree::MethodTypeSignature;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

$MethodInfo _Visitor_MethodInfo_[] = {
	{"visitClassSignature", "(Lsun/reflect/generics/tree/ClassSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMethodTypeSignature", "(Lsun/reflect/generics/tree/MethodTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.visitor.Visitor",
	nullptr,
	"sun.reflect.generics.visitor.TypeTreeVisitor",
	nullptr,
	_Visitor_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Lsun/reflect/generics/visitor/TypeTreeVisitor<TT;>;"
};

$Object* allocate$Visitor($Class* clazz) {
	return $of($alloc(Visitor));
}

$Class* Visitor::load$($String* name, bool initialize) {
	$loadClass(Visitor, name, initialize, &_Visitor_ClassInfo_, allocate$Visitor);
	return class$;
}

$Class* Visitor::class$ = nullptr;

			} // visitor
		} // generics
	} // reflect
} // sun