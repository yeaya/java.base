#include <AssociatedIndirectOnSuperClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AssociatedIndirectOnSuperClass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute AssociatedIndirectOnSuperClass_Attribute_var$1[] = {
	{"value", 'c', "LAssociatedIndirectOnSuperClassContainer;"},
	{}
};

$CompoundAttribute _AssociatedIndirectOnSuperClass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedIndirectOnSuperClass_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", AssociatedIndirectOnSuperClass_Attribute_var$1},
	{}
};

$MethodInfo _AssociatedIndirectOnSuperClass_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedIndirectOnSuperClass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedIndirectOnSuperClass",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedIndirectOnSuperClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedIndirectOnSuperClass_Annotations_
};

$Object* allocate$AssociatedIndirectOnSuperClass($Class* clazz) {
	return $of($alloc(AssociatedIndirectOnSuperClass));
}

$Class* AssociatedIndirectOnSuperClass::load$($String* name, bool initialize) {
	$loadClass(AssociatedIndirectOnSuperClass, name, initialize, &_AssociatedIndirectOnSuperClass_ClassInfo_, allocate$AssociatedIndirectOnSuperClass);
	return class$;
}

$Class* AssociatedIndirectOnSuperClass::class$ = nullptr;