#include <NonInheritableContainee$InheritedAnnotationContainer.h>

#include <NonInheritableContainee$NonInheritedAnnotationRepeated.h>
#include <NonInheritableContainee.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $NonInheritableContainee = ::NonInheritableContainee;
using $NonInheritableContainee$NonInheritedAnnotationRepeatedArray = $Array<NonInheritableContainee$NonInheritedAnnotationRepeated>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute NonInheritableContainee$InheritedAnnotationContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _NonInheritableContainee$InheritedAnnotationContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Inherited;", nullptr},
	{"Ljava/lang/annotation/Retention;", NonInheritableContainee$InheritedAnnotationContainer_Attribute_var$0},
	{}
};


$MethodInfo _NonInheritableContainee$InheritedAnnotationContainer_MethodInfo_[] = {
	{"value", "()[LNonInheritableContainee$NonInheritedAnnotationRepeated;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _NonInheritableContainee$InheritedAnnotationContainer_InnerClassesInfo_[] = {
	{"NonInheritableContainee$InheritedAnnotationContainer", "NonInheritableContainee", "InheritedAnnotationContainer", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _NonInheritableContainee$InheritedAnnotationContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"NonInheritableContainee$InheritedAnnotationContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_NonInheritableContainee$InheritedAnnotationContainer_MethodInfo_,
	nullptr,
	nullptr,
	_NonInheritableContainee$InheritedAnnotationContainer_InnerClassesInfo_,
	_NonInheritableContainee$InheritedAnnotationContainer_Annotations_,
	nullptr,
	nullptr,
	"NonInheritableContainee"
};

$Object* allocate$NonInheritableContainee$InheritedAnnotationContainer($Class* clazz) {
	return $of($alloc(NonInheritableContainee$InheritedAnnotationContainer));
}

$Class* NonInheritableContainee$InheritedAnnotationContainer::load$($String* name, bool initialize) {
	$loadClass(NonInheritableContainee$InheritedAnnotationContainer, name, initialize, &_NonInheritableContainee$InheritedAnnotationContainer_ClassInfo_, allocate$NonInheritableContainee$InheritedAnnotationContainer);
	return class$;
}

$Class* NonInheritableContainee$InheritedAnnotationContainer::class$ = nullptr;