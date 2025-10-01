#include <ShortArray.h>

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

$NamedAttribute ShortArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ShortArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ShortArray_Attribute_var$0},
	{}
};


$MethodInfo _ShortArray_MethodInfo_[] = {
	{"value", "()[S", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ShortArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ShortArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ShortArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ShortArray_Annotations_
};

$Object* allocate$ShortArray($Class* clazz) {
	return $of($alloc(ShortArray));
}

$Class* ShortArray::load$($String* name, bool initialize) {
	$loadClass(ShortArray, name, initialize, &_ShortArray_ClassInfo_, allocate$ShortArray);
	return class$;
}

$Class* ShortArray::class$ = nullptr;