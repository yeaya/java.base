#include <UniTest/SingleMemberShortArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberShortArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberShortArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberShortArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortArray_MethodInfo_[] = {
	{"value", "()[S", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberShortArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberShortArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberShortArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArray_Annotations_
};

$Object* allocate$SingleMemberShortArray($Class* clazz) {
	return $of($alloc(SingleMemberShortArray));
}

$Class* SingleMemberShortArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArray, name, initialize, &_SingleMemberShortArray_ClassInfo_, allocate$SingleMemberShortArray);
	return class$;
}

$Class* SingleMemberShortArray::class$ = nullptr;

} // UniTest