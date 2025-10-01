#include <GetAnnotatedNestedSuperclass$B.h>

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

$Attribute GetAnnotatedNestedSuperclass$B_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute GetAnnotatedNestedSuperclass$B_Attribute_var$0[] = {
	{"value", '[', GetAnnotatedNestedSuperclass$B_Attribute_var$1},
	{}
};

$NamedAttribute GetAnnotatedNestedSuperclass$B_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _GetAnnotatedNestedSuperclass$B_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", GetAnnotatedNestedSuperclass$B_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", GetAnnotatedNestedSuperclass$B_Attribute_var$2},
	{}
};


$InnerClassInfo _GetAnnotatedNestedSuperclass$B_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$B", "GetAnnotatedNestedSuperclass", "B", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$B_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GetAnnotatedNestedSuperclass$B",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$B_InnerClassesInfo_,
	_GetAnnotatedNestedSuperclass$B_Annotations_,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$B($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$B));
}

$Class* GetAnnotatedNestedSuperclass$B::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$B, name, initialize, &_GetAnnotatedNestedSuperclass$B_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$B);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$B::class$ = nullptr;