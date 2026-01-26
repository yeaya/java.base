#include <ByteArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute ByteArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ByteArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ByteArray_Attribute_var$0},
	{}
};

$MethodInfo _ByteArray_MethodInfo_[] = {
	{"value", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteArray, value, $bytes*)},
	{}
};

$ClassInfo _ByteArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ByteArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ByteArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ByteArray_Annotations_
};

$Object* allocate$ByteArray($Class* clazz) {
	return $of($alloc(ByteArray));
}

$Class* ByteArray::load$($String* name, bool initialize) {
	$loadClass(ByteArray, name, initialize, &_ByteArray_ClassInfo_, allocate$ByteArray);
	return class$;
}

$Class* ByteArray::class$ = nullptr;