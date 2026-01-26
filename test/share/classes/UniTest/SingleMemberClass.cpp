#include <UniTest/SingleMemberClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberClass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _SingleMemberClass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClass_MethodInfo_[] = {
	{"value", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleMemberClass, value, $Class*)},
	{}
};

$ClassInfo _SingleMemberClass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberClass",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClass_Annotations_
};

$Object* allocate$SingleMemberClass($Class* clazz) {
	return $of($alloc(SingleMemberClass));
}

$Class* SingleMemberClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClass, name, initialize, &_SingleMemberClass_ClassInfo_, allocate$SingleMemberClass);
	return class$;
}

$Class* SingleMemberClass::class$ = nullptr;

} // UniTest