#include <BooleanArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute BooleanArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _BooleanArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", BooleanArray_Attribute_var$0},
	{}
};

$MethodInfo _BooleanArray_MethodInfo_[] = {
	{"value", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BooleanArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"BooleanArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_BooleanArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BooleanArray_Annotations_
};

$Object* allocate$BooleanArray($Class* clazz) {
	return $of($alloc(BooleanArray));
}

$Class* BooleanArray::load$($String* name, bool initialize) {
	$loadClass(BooleanArray, name, initialize, &_BooleanArray_ClassInfo_, allocate$BooleanArray);
	return class$;
}

$Class* BooleanArray::class$ = nullptr;