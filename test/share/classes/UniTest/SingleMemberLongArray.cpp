#include <UniTest/SingleMemberLongArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberLongArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberLongArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberLongArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongArray_MethodInfo_[] = {
	{"value", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberLongArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberLongArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberLongArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArray_Annotations_
};

$Object* allocate$SingleMemberLongArray($Class* clazz) {
	return $of($alloc(SingleMemberLongArray));
}

$Class* SingleMemberLongArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArray, name, initialize, &_SingleMemberLongArray_ClassInfo_, allocate$SingleMemberLongArray);
	return class$;
}

$Class* SingleMemberLongArray::class$ = nullptr;

} // UniTest