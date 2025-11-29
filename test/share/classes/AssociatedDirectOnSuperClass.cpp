#include <AssociatedDirectOnSuperClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AssociatedDirectOnSuperClass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute AssociatedDirectOnSuperClass_Attribute_var$1[] = {
	{"value", 'c', "LAssociatedDirectOnSuperClassContainer;"},
	{}
};

$CompoundAttribute _AssociatedDirectOnSuperClass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", AssociatedDirectOnSuperClass_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", AssociatedDirectOnSuperClass_Attribute_var$1},
	{}
};

$MethodInfo _AssociatedDirectOnSuperClass_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AssociatedDirectOnSuperClass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"AssociatedDirectOnSuperClass",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_AssociatedDirectOnSuperClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AssociatedDirectOnSuperClass_Annotations_
};

$Object* allocate$AssociatedDirectOnSuperClass($Class* clazz) {
	return $of($alloc(AssociatedDirectOnSuperClass));
}

$Class* AssociatedDirectOnSuperClass::load$($String* name, bool initialize) {
	$loadClass(AssociatedDirectOnSuperClass, name, initialize, &_AssociatedDirectOnSuperClass_ClassInfo_, allocate$AssociatedDirectOnSuperClass);
	return class$;
}

$Class* AssociatedDirectOnSuperClass::class$ = nullptr;