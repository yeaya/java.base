#include <UniTest/SingleMemberDoubleArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberDoubleArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberDoubleArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberDoubleArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleArray_MethodInfo_[] = {
	{"value", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberDoubleArray, value, $doubles*)},
	{}
};

$ClassInfo _SingleMemberDoubleArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberDoubleArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberDoubleArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArray_Annotations_
};

$Object* allocate$SingleMemberDoubleArray($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArray));
}

$Class* SingleMemberDoubleArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArray, name, initialize, &_SingleMemberDoubleArray_ClassInfo_, allocate$SingleMemberDoubleArray);
	return class$;
}

$Class* SingleMemberDoubleArray::class$ = nullptr;

} // UniTest