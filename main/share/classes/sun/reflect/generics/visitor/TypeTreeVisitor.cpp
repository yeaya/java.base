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
using $ArrayTypeSignature = ::sun::reflect::generics::tree::ArrayTypeSignature;
using $BooleanSignature = ::sun::reflect::generics::tree::BooleanSignature;
using $BottomSignature = ::sun::reflect::generics::tree::BottomSignature;
using $ByteSignature = ::sun::reflect::generics::tree::ByteSignature;
using $CharSignature = ::sun::reflect::generics::tree::CharSignature;
using $ClassTypeSignature = ::sun::reflect::generics::tree::ClassTypeSignature;
using $DoubleSignature = ::sun::reflect::generics::tree::DoubleSignature;
using $FloatSignature = ::sun::reflect::generics::tree::FloatSignature;
using $FormalTypeParameter = ::sun::reflect::generics::tree::FormalTypeParameter;
using $IntSignature = ::sun::reflect::generics::tree::IntSignature;
using $LongSignature = ::sun::reflect::generics::tree::LongSignature;
using $ShortSignature = ::sun::reflect::generics::tree::ShortSignature;
using $SimpleClassTypeSignature = ::sun::reflect::generics::tree::SimpleClassTypeSignature;
using $TypeVariableSignature = ::sun::reflect::generics::tree::TypeVariableSignature;
using $VoidDescriptor = ::sun::reflect::generics::tree::VoidDescriptor;
using $Wildcard = ::sun::reflect::generics::tree::Wildcard;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

$MethodInfo _TypeTreeVisitor_MethodInfo_[] = {
	{"getResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, getResult, $Object*)},
	{"visitArrayTypeSignature", "(Lsun/reflect/generics/tree/ArrayTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitArrayTypeSignature, void, $ArrayTypeSignature*)},
	{"visitBooleanSignature", "(Lsun/reflect/generics/tree/BooleanSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitBooleanSignature, void, $BooleanSignature*)},
	{"visitBottomSignature", "(Lsun/reflect/generics/tree/BottomSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitBottomSignature, void, $BottomSignature*)},
	{"visitByteSignature", "(Lsun/reflect/generics/tree/ByteSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitByteSignature, void, $ByteSignature*)},
	{"visitCharSignature", "(Lsun/reflect/generics/tree/CharSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitCharSignature, void, $CharSignature*)},
	{"visitClassTypeSignature", "(Lsun/reflect/generics/tree/ClassTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitClassTypeSignature, void, $ClassTypeSignature*)},
	{"visitDoubleSignature", "(Lsun/reflect/generics/tree/DoubleSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitDoubleSignature, void, $DoubleSignature*)},
	{"visitFloatSignature", "(Lsun/reflect/generics/tree/FloatSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitFloatSignature, void, $FloatSignature*)},
	{"visitFormalTypeParameter", "(Lsun/reflect/generics/tree/FormalTypeParameter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitFormalTypeParameter, void, $FormalTypeParameter*)},
	{"visitIntSignature", "(Lsun/reflect/generics/tree/IntSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitIntSignature, void, $IntSignature*)},
	{"visitLongSignature", "(Lsun/reflect/generics/tree/LongSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitLongSignature, void, $LongSignature*)},
	{"visitShortSignature", "(Lsun/reflect/generics/tree/ShortSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitShortSignature, void, $ShortSignature*)},
	{"visitSimpleClassTypeSignature", "(Lsun/reflect/generics/tree/SimpleClassTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitSimpleClassTypeSignature, void, $SimpleClassTypeSignature*)},
	{"visitTypeVariableSignature", "(Lsun/reflect/generics/tree/TypeVariableSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitTypeVariableSignature, void, $TypeVariableSignature*)},
	{"visitVoidDescriptor", "(Lsun/reflect/generics/tree/VoidDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitVoidDescriptor, void, $VoidDescriptor*)},
	{"visitWildcard", "(Lsun/reflect/generics/tree/Wildcard;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeTreeVisitor, visitWildcard, void, $Wildcard*)},
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