#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>

#include <sun/reflect/generics/tree/ArrayTypeSignature.h>
#include <sun/reflect/generics/tree/BooleanSignature.h>
#include <sun/reflect/generics/tree/BottomSignature.h>
#include <sun/reflect/generics/tree/ByteSignature.h>
#include <sun/reflect/generics/tree/CharSignature.h>
#include <sun/reflect/generics/tree/ClassTypeSignature.h>
#include <sun/reflect/generics/tree/DoubleSignature.h>
#include <sun/reflect/generics/tree/FloatSignature.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/IntSignature.h>
#include <sun/reflect/generics/tree/LongSignature.h>
#include <sun/reflect/generics/tree/ShortSignature.h>
#include <sun/reflect/generics/tree/SimpleClassTypeSignature.h>
#include <sun/reflect/generics/tree/TypeVariableSignature.h>
#include <sun/reflect/generics/tree/VoidDescriptor.h>
#include <sun/reflect/generics/tree/Wildcard.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

$MethodInfo _TypeTreeVisitor_MethodInfo_[] = {
	{"getResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{"visitArrayTypeSignature", "(Lsun/reflect/generics/tree/ArrayTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBooleanSignature", "(Lsun/reflect/generics/tree/BooleanSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBottomSignature", "(Lsun/reflect/generics/tree/BottomSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitByteSignature", "(Lsun/reflect/generics/tree/ByteSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCharSignature", "(Lsun/reflect/generics/tree/CharSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitClassTypeSignature", "(Lsun/reflect/generics/tree/ClassTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDoubleSignature", "(Lsun/reflect/generics/tree/DoubleSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFloatSignature", "(Lsun/reflect/generics/tree/FloatSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFormalTypeParameter", "(Lsun/reflect/generics/tree/FormalTypeParameter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIntSignature", "(Lsun/reflect/generics/tree/IntSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLongSignature", "(Lsun/reflect/generics/tree/LongSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitShortSignature", "(Lsun/reflect/generics/tree/ShortSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSimpleClassTypeSignature", "(Lsun/reflect/generics/tree/SimpleClassTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitTypeVariableSignature", "(Lsun/reflect/generics/tree/TypeVariableSignature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitVoidDescriptor", "(Lsun/reflect/generics/tree/VoidDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitWildcard", "(Lsun/reflect/generics/tree/Wildcard;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeTreeVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.visitor.TypeTreeVisitor",
	nullptr,
	nullptr,
	nullptr,
	_TypeTreeVisitor_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TypeTreeVisitor($Class* clazz) {
	return $of($alloc(TypeTreeVisitor));
}

$Class* TypeTreeVisitor::load$($String* name, bool initialize) {
	$loadClass(TypeTreeVisitor, name, initialize, &_TypeTreeVisitor_ClassInfo_, allocate$TypeTreeVisitor);
	return class$;
}

$Class* TypeTreeVisitor::class$ = nullptr;

			} // visitor
		} // generics
	} // reflect
} // sun