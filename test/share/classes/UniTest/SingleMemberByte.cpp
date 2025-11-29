#include <UniTest/SingleMemberByte.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByte_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberByte_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberByte_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByte_MethodInfo_[] = {
	{"value", "()B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberByte_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberByte",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberByte_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByte_Annotations_
};

$Object* allocate$SingleMemberByte($Class* clazz) {
	return $of($alloc(SingleMemberByte));
}

$Class* SingleMemberByte::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByte, name, initialize, &_SingleMemberByte_ClassInfo_, allocate$SingleMemberByte);
	return class$;
}

$Class* SingleMemberByte::class$ = nullptr;

} // UniTest