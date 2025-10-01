#include <UniTest/SingleMemberDouble.h>

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

$NamedAttribute SingleMemberDouble_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberDouble_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberDouble_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberDouble_MethodInfo_[] = {
	{"value", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberDouble",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberDouble_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDouble_Annotations_
};

$Object* allocate$SingleMemberDouble($Class* clazz) {
	return $of($alloc(SingleMemberDouble));
}

$Class* SingleMemberDouble::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDouble, name, initialize, &_SingleMemberDouble_ClassInfo_, allocate$SingleMemberDouble);
	return class$;
}

$Class* SingleMemberDouble::class$ = nullptr;

} // UniTest