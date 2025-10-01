#include <UniTest/SingleMemberDoubleArray.h>

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

$NamedAttribute SingleMemberDoubleArray_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberDoubleArray_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberDoubleArray_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberDoubleArray_MethodInfo_[] = {
	{"value", "()[D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SingleMemberDoubleArray_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.SingleMemberDoubleArray",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SingleMemberDoubleArray_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArray_Annotations_
};

$Object* allocate$SingleMemberDoubleArray($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArray));
}

$Class* SingleMemberDoubleArray::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArray, name, initialize, &_SingleMemberDoubleArray_ClassInfo_, allocate$SingleMemberDoubleArray);
	return class$;
}

$Class* SingleMemberDoubleArray::class$ = nullptr;

} // UniTest