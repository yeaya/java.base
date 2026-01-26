#include <UniTest/SingleMemberCharArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberCharArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberCharArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberCharArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberCharArray_MethodInfo_[] = {
	{"value", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberCharArray, value, $chars*)},
	{}
};

$ClassInfo _SingleMemberCharArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberCharArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberCharArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArray_Annotations_
};

$Object* allocate$SingleMemberCharArray($Class* clazz) {
	return $of($alloc(SingleMemberCharArray));
}

$Class* SingleMemberCharArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArray, name, initialize, &_SingleMemberCharArray_ClassInfo_, allocate$SingleMemberCharArray);
	return class$;
}

$Class* SingleMemberCharArray::class$ = nullptr;

} // UniTest