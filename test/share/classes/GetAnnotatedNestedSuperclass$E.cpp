#include <GetAnnotatedNestedSuperclass$E.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass = ::GetAnnotatedNestedSuperclass;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute GetAnnotatedNestedSuperclass$E_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute GetAnnotatedNestedSuperclass$E_Attribute_var$0[] = {
	{"value", '[', GetAnnotatedNestedSuperclass$E_Attribute_var$1},
	{}
};

$NamedAttribute GetAnnotatedNestedSuperclass$E_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _GetAnnotatedNestedSuperclass$E_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", GetAnnotatedNestedSuperclass$E_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", GetAnnotatedNestedSuperclass$E_Attribute_var$2},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass$E_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$E", "GetAnnotatedNestedSuperclass", "E", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$E_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GetAnnotatedNestedSuperclass$E",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$E_InnerClassesInfo_,
	_GetAnnotatedNestedSuperclass$E_Annotations_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$E($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$E));
}

$Class* GetAnnotatedNestedSuperclass$E::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$E, name, initialize, &_GetAnnotatedNestedSuperclass$E_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$E);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$E::class$ = nullptr;