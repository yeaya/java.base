#include <FloatArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute FloatArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _FloatArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", FloatArray_Attribute_var$0},
	{}
};

$MethodInfo _FloatArray_MethodInfo_[] = {
	{"value", "()[F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FloatArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"FloatArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_FloatArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_FloatArray_Annotations_
};

$Object* allocate$FloatArray($Class* clazz) {
	return $of($alloc(FloatArray));
}

$Class* FloatArray::load$($String* name, bool initialize) {
	$loadClass(FloatArray, name, initialize, &_FloatArray_ClassInfo_, allocate$FloatArray);
	return class$;
}

$Class* FloatArray::class$ = nullptr;