#include <GetAnnotatedNestedSuperclass$A.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass = ::GetAnnotatedNestedSuperclass;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute GetAnnotatedNestedSuperclass$A_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute GetAnnotatedNestedSuperclass$A_Attribute_var$0[] = {
	{"value", '[', GetAnnotatedNestedSuperclass$A_Attribute_var$1},
	{}
};

$NamedAttribute GetAnnotatedNestedSuperclass$A_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _GetAnnotatedNestedSuperclass$A_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", GetAnnotatedNestedSuperclass$A_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", GetAnnotatedNestedSuperclass$A_Attribute_var$2},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass$A_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$A", "GetAnnotatedNestedSuperclass", "A", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$A_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GetAnnotatedNestedSuperclass$A",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$A_InnerClassesInfo_,
	_GetAnnotatedNestedSuperclass$A_Annotations_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$A($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$A));
}

$Class* GetAnnotatedNestedSuperclass$A::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$A, name, initialize, &_GetAnnotatedNestedSuperclass$A_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$A);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$A::class$ = nullptr;