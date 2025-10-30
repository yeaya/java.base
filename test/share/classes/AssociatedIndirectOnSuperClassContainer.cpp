#include <AssociatedIndirectOnSuperClassContainer.h>

#include <AssociatedIndirectOnSuperClass.h>
#include <jcpp.h>

using $AssociatedIndirectOnSuperClassArray = $Array<AssociatedIndirectOnSuperClass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute AssociatedIndirectOnSuperClassContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _AssociatedIndirectOnSuperClassContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedIndirectOnSuperClassContainer_Attribute_var$0},
	{}
};

$MethodInfo _AssociatedIndirectOnSuperClassContainer_MethodInfo_[] = {
	{"value", "()[LAssociatedIndirectOnSuperClass;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedIndirectOnSuperClassContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedIndirectOnSuperClassContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedIndirectOnSuperClassContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedIndirectOnSuperClassContainer_Annotations_
};

$Object* allocate$AssociatedIndirectOnSuperClassContainer($Class* clazz) {
	return $of($alloc(AssociatedIndirectOnSuperClassContainer));
}

$Class* AssociatedIndirectOnSuperClassContainer::load$($String* name, bool initialize) {
	$loadClass(AssociatedIndirectOnSuperClassContainer, name, initialize, &_AssociatedIndirectOnSuperClassContainer_ClassInfo_, allocate$AssociatedIndirectOnSuperClassContainer);
	return class$;
}

$Class* AssociatedIndirectOnSuperClassContainer::class$ = nullptr;