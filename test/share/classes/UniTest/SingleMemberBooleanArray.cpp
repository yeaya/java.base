#include <UniTest/SingleMemberBooleanArray.h>

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

$NamedAttribute SingleMemberBooleanArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberBooleanArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberBooleanArray_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberBooleanArray_MethodInfo_[] = {
	{"value", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberBooleanArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberBooleanArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberBooleanArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArray_Annotations_
};

$Object* allocate$SingleMemberBooleanArray($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArray));
}

$Class* SingleMemberBooleanArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArray, name, initialize, &_SingleMemberBooleanArray_ClassInfo_, allocate$SingleMemberBooleanArray);
	return class$;
}

$Class* SingleMemberBooleanArray::class$ = nullptr;

} // UniTest