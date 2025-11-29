#include <GetAnnotatedNestedSuperclass$B.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

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