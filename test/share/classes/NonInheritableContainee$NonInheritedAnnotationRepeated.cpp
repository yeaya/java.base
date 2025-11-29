#include <NonInheritableContainee$NonInheritedAnnotationRepeated.h>

#include <NonInheritableContainee.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute NonInheritableContainee$NonInheritedAnnotationRepeated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute NonInheritableContainee$NonInheritedAnnotationRepeated_Attribute_var$1[] = {
	{"value", 'c', "LNonInheritableContainee$InheritedAnnotationContainer;"},
	{}
};

$CompoundAttribute _NonInheritableContainee$NonInheritedAnnotationRepeated_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", NonInheritableContainee$NonInheritedAnnotationRepeated_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", NonInheritableContainee$NonInheritedAnnotationRepeated_Attribute_var$1},
	{}
};

$MethodInfo _NonInheritableContainee$NonInheritedAnnotationRepeated_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _NonInheritableContainee$NonInheritedAnnotationRepeated_InnerClassesInfo_[] = {
	{"NonInheritableContainee$NonInheritedAnnotationRepeated", "NonInheritableContainee", "NonInheritedAnnotationRepeated", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _NonInheritableContainee$NonInheritedAnnotationRepeated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"NonInheritableContainee$NonInheritedAnnotationRepeated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_NonInheritableContainee$NonInheritedAnnotationRepeated_MethodInfo_,
	nullptr,
	nullptr,
	_NonInheritableContainee$NonInheritedAnnotationRepeated_InnerClassesInfo_,
	_NonInheritableContainee$NonInheritedAnnotationRepeated_Annotations_,
	nullptr,
	nullptr,
	"NonInheritableContainee"
};

$Object* allocate$NonInheritableContainee$NonInheritedAnnotationRepeated($Class* clazz) {
	return $of($alloc(NonInheritableContainee$NonInheritedAnnotationRepeated));
}

$Class* NonInheritableContainee$NonInheritedAnnotationRepeated::load$($String* name, bool initialize) {
	$loadClass(NonInheritableContainee$NonInheritedAnnotationRepeated, name, initialize, &_NonInheritableContainee$NonInheritedAnnotationRepeated_ClassInfo_, allocate$NonInheritableContainee$NonInheritedAnnotationRepeated);
	return class$;
}

$Class* NonInheritableContainee$NonInheritedAnnotationRepeated::class$ = nullptr;