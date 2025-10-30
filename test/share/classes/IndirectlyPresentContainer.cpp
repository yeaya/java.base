#include <IndirectlyPresentContainer.h>

#include <IndirectlyPresent.h>
#include <jcpp.h>

using $IndirectlyPresentArray = $Array<IndirectlyPresent>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute IndirectlyPresentContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _IndirectlyPresentContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", IndirectlyPresentContainer_Attribute_var$0},
	{}
};

$MethodInfo _IndirectlyPresentContainer_MethodInfo_[] = {
	{"value", "()[LIndirectlyPresent;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IndirectlyPresentContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"IndirectlyPresentContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_IndirectlyPresentContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IndirectlyPresentContainer_Annotations_
};

$Object* allocate$IndirectlyPresentContainer($Class* clazz) {
	return $of($alloc(IndirectlyPresentContainer));
}

$Class* IndirectlyPresentContainer::load$($String* name, bool initialize) {
	$loadClass(IndirectlyPresentContainer, name, initialize, &_IndirectlyPresentContainer_ClassInfo_, allocate$IndirectlyPresentContainer);
	return class$;
}

$Class* IndirectlyPresentContainer::class$ = nullptr;