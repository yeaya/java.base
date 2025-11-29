#include <AssociatedDirectOnSuperClassIndirectOnSubclassContainer.h>

#include <AssociatedDirectOnSuperClassIndirectOnSubclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AssociatedDirectOnSuperClassIndirectOnSubclassContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedDirectOnSuperClassIndirectOnSubclassContainer_Attribute_var$0},
	{}
};

$MethodInfo _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_MethodInfo_[] = {
	{"value", "()[LAssociatedDirectOnSuperClassIndirectOnSubclass;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedDirectOnSuperClassIndirectOnSubclassContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedDirectOnSuperClassIndirectOnSubclassContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedDirectOnSuperClassIndirectOnSubclassContainer_Annotations_
};

$Object* allocate$AssociatedDirectOnSuperClassIndirectOnSubclassContainer($Class* clazz) {
	return $of($alloc(AssociatedDirectOnSuperClassIndirectOnSubclassContainer));
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclassContainer::load$($String* name, bool initialize) {
	$loadClass(AssociatedDirectOnSuperClassIndirectOnSubclassContainer, name, initialize, &_AssociatedDirectOnSuperClassIndirectOnSubclassContainer_ClassInfo_, allocate$AssociatedDirectOnSuperClassIndirectOnSubclassContainer);
	return class$;
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclassContainer::class$ = nullptr;