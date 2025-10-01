#include <UniTest/SingleMemberEnum.h>

#include <UniTest/Stooge.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Stooge = ::UniTest::Stooge;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute SingleMemberEnum_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberEnum_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberEnum_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberEnum_MethodInfo_[] = {
	{"value", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberEnum_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberEnum",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberEnum_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnum_Annotations_
};

$Object* allocate$SingleMemberEnum($Class* clazz) {
	return $of($alloc(SingleMemberEnum));
}

$Class* SingleMemberEnum::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnum, name, initialize, &_SingleMemberEnum_ClassInfo_, allocate$SingleMemberEnum);
	return class$;
}

$Class* SingleMemberEnum::class$ = nullptr;

} // UniTest