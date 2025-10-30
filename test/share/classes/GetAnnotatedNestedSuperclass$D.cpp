#include <GetAnnotatedNestedSuperclass$D.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass = ::GetAnnotatedNestedSuperclass;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute GetAnnotatedNestedSuperclass$D_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute GetAnnotatedNestedSuperclass$D_Attribute_var$0[] = {
	{"value", '[', GetAnnotatedNestedSuperclass$D_Attribute_var$1},
	{}
};

$NamedAttribute GetAnnotatedNestedSuperclass$D_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _GetAnnotatedNestedSuperclass$D_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", GetAnnotatedNestedSuperclass$D_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", GetAnnotatedNestedSuperclass$D_Attribute_var$2},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass$D_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$D", "GetAnnotatedNestedSuperclass", "D", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$D_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GetAnnotatedNestedSuperclass$D",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$D_InnerClassesInfo_,
	_GetAnnotatedNestedSuperclass$D_Annotations_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$D($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$D));
}

$Class* GetAnnotatedNestedSuperclass$D::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$D, name, initialize, &_GetAnnotatedNestedSuperclass$D_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$D);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$D::class$ = nullptr;