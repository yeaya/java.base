#include <UniTest/SingleMemberLong.h>

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

$NamedAttribute SingleMemberLong_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberLong_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberLong_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberLong_MethodInfo_[] = {
	{"value", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberLong_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberLong",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberLong_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLong_Annotations_
};

$Object* allocate$SingleMemberLong($Class* clazz) {
	return $of($alloc(SingleMemberLong));
}

$Class* SingleMemberLong::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLong, name, initialize, &_SingleMemberLong_ClassInfo_, allocate$SingleMemberLong);
	return class$;
}

$Class* SingleMemberLong::class$ = nullptr;

} // UniTest