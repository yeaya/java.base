#include <UniTest/SingleMemberBoolean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberBoolean_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberBoolean_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberBoolean_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberBoolean_MethodInfo_[] = {
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberBoolean, value, bool)},
	{}
};

$ClassInfo _SingleMemberBoolean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberBoolean",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberBoolean_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBoolean_Annotations_
};

$Object* allocate$SingleMemberBoolean($Class* clazz) {
	return $of($alloc(SingleMemberBoolean));
}

$Class* SingleMemberBoolean::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBoolean, name, initialize, &_SingleMemberBoolean_ClassInfo_, allocate$SingleMemberBoolean);
	return class$;
}

$Class* SingleMemberBoolean::class$ = nullptr;

} // UniTest