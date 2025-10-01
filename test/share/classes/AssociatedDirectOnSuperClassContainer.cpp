#include <AssociatedDirectOnSuperClassContainer.h>

#include <AssociatedDirectOnSuperClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AssociatedDirectOnSuperClassArray = $Array<AssociatedDirectOnSuperClass>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute AssociatedDirectOnSuperClassContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _AssociatedDirectOnSuperClassContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedDirectOnSuperClassContainer_Attribute_var$0},
	{}
};


$MethodInfo _AssociatedDirectOnSuperClassContainer_MethodInfo_[] = {
	{"value", "()[LAssociatedDirectOnSuperClass;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedDirectOnSuperClassContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedDirectOnSuperClassContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedDirectOnSuperClassContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedDirectOnSuperClassContainer_Annotations_
};

$Object* allocate$AssociatedDirectOnSuperClassContainer($Class* clazz) {
	return $of($alloc(AssociatedDirectOnSuperClassContainer));
}

$Class* AssociatedDirectOnSuperClassContainer::load$($String* name, bool initialize) {
	$loadClass(AssociatedDirectOnSuperClassContainer, name, initialize, &_AssociatedDirectOnSuperClassContainer_ClassInfo_, allocate$AssociatedDirectOnSuperClassContainer);
	return class$;
}

$Class* AssociatedDirectOnSuperClassContainer::class$ = nullptr;