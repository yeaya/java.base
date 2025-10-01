#include <AnnotationTypeRuntimeAssumptionTest$AnnA_v1.h>

#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AnnotationTypeRuntimeAssumptionTest = ::AnnotationTypeRuntimeAssumptionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute AnnotationTypeRuntimeAssumptionTest$AnnA_v1_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _AnnotationTypeRuntimeAssumptionTest$AnnA_v1_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AnnotationTypeRuntimeAssumptionTest$AnnA_v1_Attribute_var$0},
	{"LAnnotationTypeRuntimeAssumptionTest$AnnB;", nullptr},
	{}
};


$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnA_v1_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$AnnA_v1", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnA_v1_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AnnotationTypeRuntimeAssumptionTest$AnnA_v1",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$AnnA_v1_InnerClassesInfo_,
	_AnnotationTypeRuntimeAssumptionTest$AnnA_v1_Annotations_,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest$AnnA_v1($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest$AnnA_v1));
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v1::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AnnA_v1, name, initialize, &_AnnotationTypeRuntimeAssumptionTest$AnnA_v1_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest$AnnA_v1);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$ = nullptr;