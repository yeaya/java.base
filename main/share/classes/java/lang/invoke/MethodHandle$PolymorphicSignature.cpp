#include <java/lang/invoke/MethodHandle$PolymorphicSignature.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

$Attribute MethodHandle$PolymorphicSignature_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute MethodHandle$PolymorphicSignature_Attribute_var$0[] = {
	{"value", '[', MethodHandle$PolymorphicSignature_Attribute_var$1},
	{}
};

$NamedAttribute MethodHandle$PolymorphicSignature_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _MethodHandle$PolymorphicSignature_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", MethodHandle$PolymorphicSignature_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", MethodHandle$PolymorphicSignature_Attribute_var$2},
	{}
};


$InnerClassInfo _MethodHandle$PolymorphicSignature_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandle$PolymorphicSignature", "java.lang.invoke.MethodHandle", "PolymorphicSignature", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _MethodHandle$PolymorphicSignature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.invoke.MethodHandle$PolymorphicSignature",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MethodHandle$PolymorphicSignature_InnerClassesInfo_,
	_MethodHandle$PolymorphicSignature_Annotations_,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandle"
};

$Object* allocate$MethodHandle$PolymorphicSignature($Class* clazz) {
	return $of($alloc(MethodHandle$PolymorphicSignature));
}

$Class* MethodHandle$PolymorphicSignature::load$($String* name, bool initialize) {
	$loadClass(MethodHandle$PolymorphicSignature, name, initialize, &_MethodHandle$PolymorphicSignature_ClassInfo_, allocate$MethodHandle$PolymorphicSignature);
	return class$;
}

$Class* MethodHandle$PolymorphicSignature::class$ = nullptr;

		} // invoke
	} // lang
} // java