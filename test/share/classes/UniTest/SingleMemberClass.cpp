#include <UniTest/SingleMemberClass.h>

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

$NamedAttribute SingleMemberClass_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _SingleMemberClass_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", SingleMemberClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberClass_MethodInfo_[] = {
	{"value", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT},
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