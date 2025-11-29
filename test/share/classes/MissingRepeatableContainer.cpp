#include <MissingRepeatableContainer.h>

#include <MissingRepeatable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute MissingRepeatableContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _MissingRepeatableContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MissingRepeatableContainer_Attribute_var$0},
	{}
};

$MethodInfo _MissingRepeatableContainer_MethodInfo_[] = {
	{"value", "()[LMissingRepeatable;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MissingRepeatableContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"MissingRepeatableContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_MissingRepeatableContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_MissingRepeatableContainer_Annotations_
};

$Object* allocate$MissingRepeatableContainer($Class* clazz) {
	return $of($alloc(MissingRepeatableContainer));
}

$Class* MissingRepeatableContainer::load$($String* name, bool initialize) {
	$loadClass(MissingRepeatableContainer, name, initialize, &_MissingRepeatableContainer_ClassInfo_, allocate$MissingRepeatableContainer);
	return class$;
}

$Class* MissingRepeatableContainer::class$ = nullptr;