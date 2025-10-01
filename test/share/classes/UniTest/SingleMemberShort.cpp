#include <UniTest/SingleMemberShort.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberShort_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberShort_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberShort_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberShort_MethodInfo_[] = {
	{"value", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberShort_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberShort",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberShort_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShort_Annotations_
};

$Object* allocate$SingleMemberShort($Class* clazz) {
	return $of($alloc(SingleMemberShort));
}

$Class* SingleMemberShort::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShort, name, initialize, &_SingleMemberShort_ClassInfo_, allocate$SingleMemberShort);
	return class$;
}

$Class* SingleMemberShort::class$ = nullptr;

} // UniTest