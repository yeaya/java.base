#include <LongArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute LongArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _LongArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", LongArray_Attribute_var$0},
	{}
};

$MethodInfo _LongArray_MethodInfo_[] = {
	{"value", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongArray, value, $longs*)},
	{}
};

$ClassInfo _LongArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"LongArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_LongArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongArray_Annotations_
};

$Object* allocate$LongArray($Class* clazz) {
	return $of($alloc(LongArray));
}

$Class* LongArray::load$($String* name, bool initialize) {
	$loadClass(LongArray, name, initialize, &_LongArray_ClassInfo_, allocate$LongArray);
	return class$;
}

$Class* LongArray::class$ = nullptr;