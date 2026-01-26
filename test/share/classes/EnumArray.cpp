#include <EnumArray.h>

#include <java/lang/annotation/RetentionPolicy.h>
#include <jcpp.h>

using $RetentionPolicyArray = $Array<::java::lang::annotation::RetentionPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute EnumArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _EnumArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", EnumArray_Attribute_var$0},
	{}
};

$MethodInfo _EnumArray_MethodInfo_[] = {
	{"value", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EnumArray, value, $RetentionPolicyArray*)},
	{}
};

$ClassInfo _EnumArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"EnumArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_EnumArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_EnumArray_Annotations_
};

$Object* allocate$EnumArray($Class* clazz) {
	return $of($alloc(EnumArray));
}

$Class* EnumArray::load$($String* name, bool initialize) {
	$loadClass(EnumArray, name, initialize, &_EnumArray_ClassInfo_, allocate$EnumArray);
	return class$;
}

$Class* EnumArray::class$ = nullptr;