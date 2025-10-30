#include <TestReceiverTypeParameterizedConstructor$TypeAnnotation.h>

#include <TestReceiverTypeParameterizedConstructor.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor = ::TestReceiverTypeParameterizedConstructor;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$1[] = {
	{"value", '[', TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$2},
	{}
};

$CompoundAttribute _TestReceiverTypeParameterizedConstructor$TypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TestReceiverTypeParameterizedConstructor$TypeAnnotation_Attribute_var$1},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedConstructor$TypeAnnotation_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedConstructor$TypeAnnotation_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedConstructor$TypeAnnotation", "TestReceiverTypeParameterizedConstructor", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedConstructor$TypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestReceiverTypeParameterizedConstructor$TypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestReceiverTypeParameterizedConstructor$TypeAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeParameterizedConstructor$TypeAnnotation_InnerClassesInfo_,
	_TestReceiverTypeParameterizedConstructor$TypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedConstructor"
};

$Object* allocate$TestReceiverTypeParameterizedConstructor$TypeAnnotation($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedConstructor$TypeAnnotation));
}

$Class* TestReceiverTypeParameterizedConstructor$TypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedConstructor$TypeAnnotation, name, initialize, &_TestReceiverTypeParameterizedConstructor$TypeAnnotation_ClassInfo_, allocate$TestReceiverTypeParameterizedConstructor$TypeAnnotation);
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor$TypeAnnotation::class$ = nullptr;