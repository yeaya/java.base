#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$Class* TypeDescriptor$OfField::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"arrayType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", "()TF;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, arrayType, TypeDescriptor$OfField*)},
		{"componentType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", "()TF;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, componentType, TypeDescriptor$OfField*)},
		{"isArray", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, isArray, bool)},
		{"isPrimitive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeDescriptor$OfField, isPrimitive, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.TypeDescriptor$OfField", "java.lang.invoke.TypeDescriptor", "OfField", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.invoke.TypeDescriptor$OfField",
		nullptr,
		"java.lang.invoke.TypeDescriptor",
		nullptr,
		methodInfos$$,
		"<F::Ljava/lang/invoke/TypeDescriptor$OfField<TF;>;>Ljava/lang/Object;Ljava/lang/invoke/TypeDescriptor;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.TypeDescriptor"
	};
	$loadClass(TypeDescriptor$OfField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeDescriptor$OfField);
	});
	return class$;
}

$Class* TypeDescriptor$OfField::class$ = nullptr;

		} // invoke
	} // lang
} // java