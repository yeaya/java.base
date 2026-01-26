#include <UniTest/SingleMemberString.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberString_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberString_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberString_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberString_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberString, value, $String*)},
	{}
};

$ClassInfo _SingleMemberString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberString",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberString_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberString_Annotations_
};

$Object* allocate$SingleMemberString($Class* clazz) {
	return $of($alloc(SingleMemberString));
}

$Class* SingleMemberString::load$($String* name, bool initialize) {
	$loadClass(SingleMemberString, name, initialize, &_SingleMemberString_ClassInfo_, allocate$SingleMemberString);
	return class$;
}

$Class* SingleMemberString::class$ = nullptr;

} // UniTest