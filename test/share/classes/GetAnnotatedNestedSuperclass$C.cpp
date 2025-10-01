#include <GetAnnotatedNestedSuperclass$C.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass = ::GetAnnotatedNestedSuperclass;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute GetAnnotatedNestedSuperclass$C_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute GetAnnotatedNestedSuperclass$C_Attribute_var$0[] = {
	{"value", '[', GetAnnotatedNestedSuperclass$C_Attribute_var$1},
	{}
};

$NamedAttribute GetAnnotatedNestedSuperclass$C_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _GetAnnotatedNestedSuperclass$C_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", GetAnnotatedNestedSuperclass$C_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", GetAnnotatedNestedSuperclass$C_Attribute_var$2},
	{}
};


$InnerClassInfo _GetAnnotatedNestedSuperclass$C_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$C", "GetAnnotatedNestedSuperclass", "C", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$C_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GetAnnotatedNestedSuperclass$C",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$C_InnerClassesInfo_,
	_GetAnnotatedNestedSuperclass$C_Annotations_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$C($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$C));
}

$Class* GetAnnotatedNestedSuperclass$C::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$C, name, initialize, &_GetAnnotatedNestedSuperclass$C_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$C);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$C::class$ = nullptr;