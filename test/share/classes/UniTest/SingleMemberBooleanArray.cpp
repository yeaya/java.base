#include <UniTest/SingleMemberBooleanArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberBooleanArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberBooleanArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberBooleanArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberBooleanArray_MethodInfo_[] = {
	{"value", "()[Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberBooleanArray, value, $booleans*)},
	{}
};

$ClassInfo _SingleMemberBooleanArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberBooleanArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberBooleanArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArray_Annotations_
};

$Object* allocate$SingleMemberBooleanArray($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArray));
}

$Class* SingleMemberBooleanArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArray, name, initialize, &_SingleMemberBooleanArray_ClassInfo_, allocate$SingleMemberBooleanArray);
	return class$;
}

$Class* SingleMemberBooleanArray::class$ = nullptr;

} // UniTest