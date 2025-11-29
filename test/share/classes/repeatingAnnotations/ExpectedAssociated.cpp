#include <repeatingAnnotations/ExpectedAssociated.h>

#include <repeatingAnnotations/Ann.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

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