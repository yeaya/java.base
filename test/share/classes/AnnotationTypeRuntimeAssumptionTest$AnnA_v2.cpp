#include <AnnotationTypeRuntimeAssumptionTest$AnnA_v2.h>

#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AnnotationTypeRuntimeAssumptionTest$AnnA_v2_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; CLASS"},
	{}
};

$CompoundAttribute _AnnotationTypeRuntimeAssumptionTest$AnnA_v2_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AnnotationTypeRuntimeAssumptionTest$AnnA_v2_Attribute_var$0},
	{"LAnnotationTypeRuntimeAssumptionTest$AnnB;", nullptr},
	{}
};

$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnA_v2_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$AnnA_v2", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest$AnnA_v2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AnnotationTypeRuntimeAssumptionTest$AnnA_v2",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$AnnA_v2_InnerClassesInfo_,
	_AnnotationTypeRuntimeAssumptionTest$AnnA_v2_Annotations_,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest$AnnA_v2($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest$AnnA_v2));
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v2::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AnnA_v2, name, initialize, &_AnnotationTypeRuntimeAssumptionTest$AnnA_v2_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest$AnnA_v2);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v2::class$ = nullptr;