#include <TestReceiverTypeParameterizedMethod$TypeAnnotation.h>

#include <TestReceiverTypeParameterizedMethod.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$1[] = {
	{"value", '[', TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$2},
	{}
};

$CompoundAttribute _TestReceiverTypeParameterizedMethod$TypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TestReceiverTypeParameterizedMethod$TypeAnnotation_Attribute_var$1},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedMethod$TypeAnnotation_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestReceiverTypeParameterizedMethod$TypeAnnotation, value, int32_t)},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedMethod$TypeAnnotation_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedMethod$TypeAnnotation", "TestReceiverTypeParameterizedMethod", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedMethod$TypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestReceiverTypeParameterizedMethod$TypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestReceiverTypeParameterizedMethod$TypeAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeParameterizedMethod$TypeAnnotation_InnerClassesInfo_,
	_TestReceiverTypeParameterizedMethod$TypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedMethod"
};

$Object* allocate$TestReceiverTypeParameterizedMethod$TypeAnnotation($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedMethod$TypeAnnotation));
}

$Class* TestReceiverTypeParameterizedMethod$TypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedMethod$TypeAnnotation, name, initialize, &_TestReceiverTypeParameterizedMethod$TypeAnnotation_ClassInfo_, allocate$TestReceiverTypeParameterizedMethod$TypeAnnotation);
	return class$;
}

$Class* TestReceiverTypeParameterizedMethod$TypeAnnotation::class$ = nullptr;