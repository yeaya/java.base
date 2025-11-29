#include <UniTest/SingleMemberIntArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberIntArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberIntArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberIntArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberIntArray_MethodInfo_[] = {
	{"value", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberIntArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberIntArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberIntArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArray_Annotations_
};

$Object* allocate$SingleMemberIntArray($Class* clazz) {
	return $of($alloc(SingleMemberIntArray));
}

$Class* SingleMemberIntArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArray, name, initialize, &_SingleMemberIntArray_ClassInfo_, allocate$SingleMemberIntArray);
	return class$;
}

$Class* SingleMemberIntArray::class$ = nullptr;

} // UniTest