#include <UniTest/SingleMemberChar.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberChar_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberChar_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberChar_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberChar_MethodInfo_[] = {
	{"value", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberChar_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberChar",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberChar_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberChar_Annotations_
};

$Object* allocate$SingleMemberChar($Class* clazz) {
	return $of($alloc(SingleMemberChar));
}

$Class* SingleMemberChar::load$($String* name, bool initialize) {
	$loadClass(SingleMemberChar, name, initialize, &_SingleMemberChar_ClassInfo_, allocate$SingleMemberChar);
	return class$;
}

$Class* SingleMemberChar::class$ = nullptr;

} // UniTest