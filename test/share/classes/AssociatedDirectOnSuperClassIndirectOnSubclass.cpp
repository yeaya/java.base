#include <AssociatedDirectOnSuperClassIndirectOnSubclass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute AssociatedDirectOnSuperClassIndirectOnSubclass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute AssociatedDirectOnSuperClassIndirectOnSubclass_Attribute_var$1[] = {
	{"value", 'c', "LAssociatedDirectOnSuperClassIndirectOnSubclassContainer;"},
	{}
};
$CompoundAttribute _AssociatedDirectOnSuperClassIndirectOnSubclass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedDirectOnSuperClassIndirectOnSubclass_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", AssociatedDirectOnSuperClassIndirectOnSubclass_Attribute_var$1},
	{}
};


$MethodInfo _AssociatedDirectOnSuperClassIndirectOnSubclass_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedDirectOnSuperClassIndirectOnSubclass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedDirectOnSuperClassIndirectOnSubclass",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedDirectOnSuperClassIndirectOnSubclass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedDirectOnSuperClassIndirectOnSubclass_Annotations_
};

$Object* allocate$AssociatedDirectOnSuperClassIndirectOnSubclass($Class* clazz) {
	return $of($alloc(AssociatedDirectOnSuperClassIndirectOnSubclass));
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclass::load$($String* name, bool initialize) {
	$loadClass(AssociatedDirectOnSuperClassIndirectOnSubclass, name, initialize, &_AssociatedDirectOnSuperClassIndirectOnSubclass_ClassInfo_, allocate$AssociatedDirectOnSuperClassIndirectOnSubclass);
	return class$;
}

$Class* AssociatedDirectOnSuperClassIndirectOnSubclass::class$ = nullptr;