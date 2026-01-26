#include <UniTest/SingleMemberClassArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberClassArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberClassArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberClassArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClassArray_MethodInfo_[] = {
	{"value", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberClassArray, value, $ClassArray*)},
	{}
};

$ClassInfo _SingleMemberClassArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberClassArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberClassArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArray_Annotations_
};

$Object* allocate$SingleMemberClassArray($Class* clazz) {
	return $of($alloc(SingleMemberClassArray));
}

$Class* SingleMemberClassArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArray, name, initialize, &_SingleMemberClassArray_ClassInfo_, allocate$SingleMemberClassArray);
	return class$;
}

$Class* SingleMemberClassArray::class$ = nullptr;

} // UniTest