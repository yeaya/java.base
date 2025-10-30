#include <IsAnnotationType$AnnotationPoseur.h>

#include <IsAnnotationType.h>
#include <jcpp.h>

using $IsAnnotationType = ::IsAnnotationType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Annotation = ::java::lang::annotation::Annotation;

$InnerClassInfo _IsAnnotationType$AnnotationPoseur_InnerClassesInfo_[] = {
	{"IsAnnotationType$AnnotationPoseur", "IsAnnotationType", "AnnotationPoseur", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IsAnnotationType$AnnotationPoseur_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"IsAnnotationType$AnnotationPoseur",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_IsAnnotationType$AnnotationPoseur_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsAnnotationType"
};

$Object* allocate$IsAnnotationType$AnnotationPoseur($Class* clazz) {
	return $of($alloc(IsAnnotationType$AnnotationPoseur));
}

$Class* IsAnnotationType$AnnotationPoseur::load$($String* name, bool initialize) {
	$loadClass(IsAnnotationType$AnnotationPoseur, name, initialize, &_IsAnnotationType$AnnotationPoseur_ClassInfo_, allocate$IsAnnotationType$AnnotationPoseur);
	return class$;
}

$Class* IsAnnotationType$AnnotationPoseur::class$ = nullptr;