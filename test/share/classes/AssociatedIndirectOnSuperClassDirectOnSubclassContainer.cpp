#include <AssociatedIndirectOnSuperClassDirectOnSubclassContainer.h>

#include <AssociatedIndirectOnSuperClassDirectOnSubclass.h>
#include <jcpp.h>

using $AssociatedIndirectOnSuperClassDirectOnSubclassArray = $Array<AssociatedIndirectOnSuperClassDirectOnSubclass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AssociatedIndirectOnSuperClassDirectOnSubclassContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedIndirectOnSuperClassDirectOnSubclassContainer_Attribute_var$0},
	{}
};

$MethodInfo _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_MethodInfo_[] = {
	{"value", "()[LAssociatedIndirectOnSuperClassDirectOnSubclass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssociatedIndirectOnSuperClassDirectOnSubclassContainer, value, $AssociatedIndirectOnSuperClassDirectOnSubclassArray*)},
	{}
};

$ClassInfo _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedIndirectOnSuperClassDirectOnSubclassContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedIndirectOnSuperClassDirectOnSubclassContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedIndirectOnSuperClassDirectOnSubclassContainer_Annotations_
};

$Object* allocate$AssociatedIndirectOnSuperClassDirectOnSubclassContainer($Class* clazz) {
	return $of($alloc(AssociatedIndirectOnSuperClassDirectOnSubclassContainer));
}

$Class* AssociatedIndirectOnSuperClassDirectOnSubclassContainer::load$($String* name, bool initialize) {
	$loadClass(AssociatedIndirectOnSuperClassDirectOnSubclassContainer, name, initialize, &_AssociatedIndirectOnSuperClassDirectOnSubclassContainer_ClassInfo_, allocate$AssociatedIndirectOnSuperClassDirectOnSubclassContainer);
	return class$;
}

$Class* AssociatedIndirectOnSuperClassDirectOnSubclassContainer::class$ = nullptr;