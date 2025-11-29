#include <UniTest/SingleMemberEnumArray.h>

#include <UniTest/Stooge.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberEnumArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberEnumArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberEnumArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberEnumArray_MethodInfo_[] = {
	{"value", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberEnumArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberEnumArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberEnumArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArray_Annotations_
};

$Object* allocate$SingleMemberEnumArray($Class* clazz) {
	return $of($alloc(SingleMemberEnumArray));
}

$Class* SingleMemberEnumArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArray, name, initialize, &_SingleMemberEnumArray_ClassInfo_, allocate$SingleMemberEnumArray);
	return class$;
}

$Class* SingleMemberEnumArray::class$ = nullptr;

} // UniTest