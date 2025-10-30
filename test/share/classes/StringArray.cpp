#include <StringArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute StringArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _StringArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", StringArray_Attribute_var$0},
	{}
};

$MethodInfo _StringArray_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StringArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"StringArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_StringArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_StringArray_Annotations_
};

$Object* allocate$StringArray($Class* clazz) {
	return $of($alloc(StringArray));
}

$Class* StringArray::load$($String* name, bool initialize) {
	$loadClass(StringArray, name, initialize, &_StringArray_ClassInfo_, allocate$StringArray);
	return class$;
}

$Class* StringArray::class$ = nullptr;