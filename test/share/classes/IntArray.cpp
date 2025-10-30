#include <IntArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute IntArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _IntArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", IntArray_Attribute_var$0},
	{}
};

$MethodInfo _IntArray_MethodInfo_[] = {
	{"value", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"IntArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_IntArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntArray_Annotations_
};

$Object* allocate$IntArray($Class* clazz) {
	return $of($alloc(IntArray));
}

$Class* IntArray::load$($String* name, bool initialize) {
	$loadClass(IntArray, name, initialize, &_IntArray_ClassInfo_, allocate$IntArray);
	return class$;
}

$Class* IntArray::class$ = nullptr;