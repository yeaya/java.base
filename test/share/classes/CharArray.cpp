#include <CharArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute CharArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _CharArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", CharArray_Attribute_var$0},
	{}
};

$MethodInfo _CharArray_MethodInfo_[] = {
	{"value", "()[C", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CharArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"CharArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_CharArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CharArray_Annotations_
};

$Object* allocate$CharArray($Class* clazz) {
	return $of($alloc(CharArray));
}

$Class* CharArray::load$($String* name, bool initialize) {
	$loadClass(CharArray, name, initialize, &_CharArray_ClassInfo_, allocate$CharArray);
	return class$;
}

$Class* CharArray::class$ = nullptr;