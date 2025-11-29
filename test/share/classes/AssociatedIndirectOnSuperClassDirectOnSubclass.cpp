#include <AssociatedIndirectOnSuperClassDirectOnSubclass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AssociatedIndirectOnSuperClassDirectOnSubclass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute AssociatedIndirectOnSuperClassDirectOnSubclass_Attribute_var$1[] = {
	{"value", 'c', "LAssociatedIndirectOnSuperClassDirectOnSubclassContainer;"},
	{}
};

$CompoundAttribute _AssociatedIndirectOnSuperClassDirectOnSubclass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedIndirectOnSuperClassDirectOnSubclass_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", AssociatedIndirectOnSuperClassDirectOnSubclass_Attribute_var$1},
	{}
};

$MethodInfo _AssociatedIndirectOnSuperClassDirectOnSubclass_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedIndirectOnSuperClassDirectOnSubclass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedIndirectOnSuperClassDirectOnSubclass",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedIndirectOnSuperClassDirectOnSubclass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedIndirectOnSuperClassDirectOnSubclass_Annotations_
};

$Object* allocate$AssociatedIndirectOnSuperClassDirectOnSubclass($Class* clazz) {
	return $of($alloc(AssociatedIndirectOnSuperClassDirectOnSubclass));
}

$Class* AssociatedIndirectOnSuperClassDirectOnSubclass::load$($String* name, bool initialize) {
	$loadClass(AssociatedIndirectOnSuperClassDirectOnSubclass, name, initialize, &_AssociatedIndirectOnSuperClassDirectOnSubclass_ClassInfo_, allocate$AssociatedIndirectOnSuperClassDirectOnSubclass);
	return class$;
}

$Class* AssociatedIndirectOnSuperClassDirectOnSubclass::class$ = nullptr;