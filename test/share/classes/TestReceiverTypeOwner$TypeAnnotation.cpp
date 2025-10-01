#include <TestReceiverTypeOwner$TypeAnnotation.h>

#include <TestReceiverTypeOwner.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwner = ::TestReceiverTypeOwner;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute TestReceiverTypeOwner$TypeAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TestReceiverTypeOwner$TypeAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TestReceiverTypeOwner$TypeAnnotation_Attribute_var$1[] = {
	{"value", '[', TestReceiverTypeOwner$TypeAnnotation_Attribute_var$2},
	{}
};
$CompoundAttribute _TestReceiverTypeOwner$TypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestReceiverTypeOwner$TypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TestReceiverTypeOwner$TypeAnnotation_Attribute_var$1},
	{}
};


$InnerClassInfo _TestReceiverTypeOwner$TypeAnnotation_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwner$TypeAnnotation", "TestReceiverTypeOwner", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestReceiverTypeOwner$TypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestReceiverTypeOwner$TypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_TestReceiverTypeOwner$TypeAnnotation_InnerClassesInfo_,
	_TestReceiverTypeOwner$TypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TestReceiverTypeOwner"
};

$Object* allocate$TestReceiverTypeOwner$TypeAnnotation($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwner$TypeAnnotation));
}

$Class* TestReceiverTypeOwner$TypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwner$TypeAnnotation, name, initialize, &_TestReceiverTypeOwner$TypeAnnotation_ClassInfo_, allocate$TestReceiverTypeOwner$TypeAnnotation);
	return class$;
}

$Class* TestReceiverTypeOwner$TypeAnnotation::class$ = nullptr;