#include <java/lang/invoke/TypeDescriptor$OfField.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _TypeDescriptor$OfField_MethodInfo_[] = {
	{"arrayType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", "()TF;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, arrayType, TypeDescriptor$OfField*)},
	{"componentType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", "()TF;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, componentType, TypeDescriptor$OfField*)},
	{"isArray", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, isArray, bool)},
	{"isPrimitive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, isPrimitive, bool)},
	{}
};

$InnerClassInfo _TypeDescriptor$OfField_InnerClassesInfo_[] = {
	{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeDescriptor$OfField_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.invoke.TypeDescriptor$OfField",
	nullptr,
	"java.lang.invoke.TypeDescriptor",
	nullptr,
	_TypeDescriptor$OfField_MethodInfo_,
	"<F::Ljava/lang/invoke/TypeDescriptor$OfField<TF;>;>Ljava/lang/Object;Ljava/lang/invoke/TypeDescriptor;",
	nullptr,
	_TypeDescriptor$OfField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.TypeDescriptor"
};

$Object* allocate$TypeDescriptor$OfField($Class* clazz) {
	return $of($alloc(TypeDescriptor$OfField));
}

$Class* TypeDescriptor$OfField::load$($String* name, bool initialize) {
	$loadClass(TypeDescriptor$OfField, name, initialize, &_TypeDescriptor$OfField_ClassInfo_, allocate$TypeDescriptor$OfField);
	return class$;
}

$Class* TypeDescriptor$OfField::class$ = nullptr;

		} // invoke
	} // lang
} // java