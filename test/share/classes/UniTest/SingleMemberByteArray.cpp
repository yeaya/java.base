#include <UniTest/SingleMemberByteArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByteArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberByteArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberByteArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteArray_MethodInfo_[] = {
	{"value", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberByteArray, value, $bytes*)},
	{}
};

$ClassInfo _SingleMemberByteArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberByteArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberByteArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArray_Annotations_
};

$Object* allocate$SingleMemberByteArray($Class* clazz) {
	return $of($alloc(SingleMemberByteArray));
}

$Class* SingleMemberByteArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArray, name, initialize, &_SingleMemberByteArray_ClassInfo_, allocate$SingleMemberByteArray);
	return class$;
}

$Class* SingleMemberByteArray::class$ = nullptr;

} // UniTest