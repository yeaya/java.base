#include <UniTest/SingleMemberStringArray.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberStringArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberStringArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberStringArray_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringArray_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberStringArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberStringArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberStringArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArray_Annotations_
};

$Object* allocate$SingleMemberStringArray($Class* clazz) {
	return $of($alloc(SingleMemberStringArray));
}

$Class* SingleMemberStringArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArray, name, initialize, &_SingleMemberStringArray_ClassInfo_, allocate$SingleMemberStringArray);
	return class$;
}

$Class* SingleMemberStringArray::class$ = nullptr;

} // UniTest