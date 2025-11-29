#include <DoubleArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute DoubleArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _DoubleArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", DoubleArray_Attribute_var$0},
	{}
};

$MethodInfo _DoubleArray_MethodInfo_[] = {
	{"value", "()[D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"DoubleArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DoubleArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleArray_Annotations_
};

$Object* allocate$DoubleArray($Class* clazz) {
	return $of($alloc(DoubleArray));
}

$Class* DoubleArray::load$($String* name, bool initialize) {
	$loadClass(DoubleArray, name, initialize, &_DoubleArray_ClassInfo_, allocate$DoubleArray);
	return class$;
}

$Class* DoubleArray::class$ = nullptr;