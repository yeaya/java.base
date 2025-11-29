#include <AnnotationTypeRuntimeAssumptionTest$AnnB.h>

#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AnnotationTypeRuntimeAssumptionTest$AnnB_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _AnnotationTypeRuntimeAssumptionTest$AnnB_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AnnotationTypeRuntimeAssumptionTest$AnnB_Attribute_var$0},
	{"LAnnotationTypeRuntimeAssumptionTest$AnnA_v1;", nullptr},
	{}
};

$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnB_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$AnnB", "AnnotationTypeRuntimeAssumptionTest", "AnnB", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnB_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AnnotationTypeRuntimeAssumptionTest$AnnB",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$AnnB_InnerClassesInfo_,
	_AnnotationTypeRuntimeAssumptionTest$AnnB_Annotations_,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest$AnnB($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest$AnnB));
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnB::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AnnB, name, initialize, &_AnnotationTypeRuntimeAssumptionTest$AnnB_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest$AnnB);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnB::class$ = nullptr;