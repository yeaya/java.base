#include <repeatingAnnotations/AnnCont.h>

#include <repeatingAnnotations/Ann.h>
#include <jcpp.h>

using $AnnArray = $Array<::repeatingAnnotations::Ann>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace repeatingAnnotations {

$NamedAttribute AnnCont_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute AnnCont_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute AnnCont_Attribute_var$1[] = {
	{"value", '[', AnnCont_Attribute_var$2},
	{}
};

$CompoundAttribute _AnnCont_Annotations_[] = {
	{"Ljava/lang/annotation/Inherited;", nullptr},
	{"Ljava/lang/annotation/Retention;", AnnCont_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", AnnCont_Attribute_var$1},
	{}
};

$MethodInfo _AnnCont_MethodInfo_[] = {
	{"value", "()[LrepeatingAnnotations/Ann;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnCont_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"repeatingAnnotations.AnnCont",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AnnCont_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AnnCont_Annotations_
};

$Object* allocate$AnnCont($Class* clazz) {
	return $of($alloc(AnnCont));
}

$Class* AnnCont::load$($String* name, bool initialize) {
	$loadClass(AnnCont, name, initialize, &_AnnCont_ClassInfo_, allocate$AnnCont);
	return class$;
}

$Class* AnnCont::class$ = nullptr;

} // repeatingAnnotations