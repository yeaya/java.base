#include <repeatingAnnotations/ExpectedAssociated.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <repeatingAnnotations/Ann.h>
#include <jcpp.h>

using $AnnArray = $Array<::repeatingAnnotations::Ann>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace repeatingAnnotations {

$NamedAttribute ExpectedAssociated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ExpectedAssociated_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ExpectedAssociated_Attribute_var$0},
	{}
};


$MethodInfo _ExpectedAssociated_MethodInfo_[] = {
	{"value", "()[LrepeatingAnnotations/Ann;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExpectedAssociated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"repeatingAnnotations.ExpectedAssociated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ExpectedAssociated_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ExpectedAssociated_Annotations_
};

$Object* allocate$ExpectedAssociated($Class* clazz) {
	return $of($alloc(ExpectedAssociated));
}

$Class* ExpectedAssociated::load$($String* name, bool initialize) {
	$loadClass(ExpectedAssociated, name, initialize, &_ExpectedAssociated_ClassInfo_, allocate$ExpectedAssociated);
	return class$;
}

$Class* ExpectedAssociated::class$ = nullptr;

} // repeatingAnnotations