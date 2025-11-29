#include <UniTest/SingleMemberFloat.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberFloat_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberFloat_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberFloat_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloat_MethodInfo_[] = {
	{"value", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberFloat_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberFloat",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberFloat_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloat_Annotations_
};

$Object* allocate$SingleMemberFloat($Class* clazz) {
	return $of($alloc(SingleMemberFloat));
}

$Class* SingleMemberFloat::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloat, name, initialize, &_SingleMemberFloat_ClassInfo_, allocate$SingleMemberFloat);
	return class$;
}

$Class* SingleMemberFloat::class$ = nullptr;

} // UniTest