#include <UniTest/SingleMemberFloatArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberFloatArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberFloatArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberFloatArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatArray_MethodInfo_[] = {
	{"value", "()[F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberFloatArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberFloatArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberFloatArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArray_Annotations_
};

$Object* allocate$SingleMemberFloatArray($Class* clazz) {
	return $of($alloc(SingleMemberFloatArray));
}

$Class* SingleMemberFloatArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArray, name, initialize, &_SingleMemberFloatArray_ClassInfo_, allocate$SingleMemberFloatArray);
	return class$;
}

$Class* SingleMemberFloatArray::class$ = nullptr;

} // UniTest