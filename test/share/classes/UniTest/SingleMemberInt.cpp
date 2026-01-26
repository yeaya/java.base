#include <UniTest/SingleMemberInt.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberInt_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberInt_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberInt_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberInt_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberInt, value, int32_t)},
	{}
};

$ClassInfo _SingleMemberInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberInt",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberInt_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberInt_Annotations_
};

$Object* allocate$SingleMemberInt($Class* clazz) {
	return $of($alloc(SingleMemberInt));
}

$Class* SingleMemberInt::load$($String* name, bool initialize) {
	$loadClass(SingleMemberInt, name, initialize, &_SingleMemberInt_ClassInfo_, allocate$SingleMemberInt);
	return class$;
}

$Class* SingleMemberInt::class$ = nullptr;

} // UniTest