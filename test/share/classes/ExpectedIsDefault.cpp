#include <ExpectedIsDefault.h>

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

$NamedAttribute ExpectedIsDefault_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ExpectedIsDefault_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ExpectedIsDefault_Attribute_var$0},
	{}
};


$MethodInfo _ExpectedIsDefault_MethodInfo_[] = {
	{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExpectedIsDefault_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ExpectedIsDefault",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ExpectedIsDefault_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ExpectedIsDefault_Annotations_
};

$Object* allocate$ExpectedIsDefault($Class* clazz) {
	return $of($alloc(ExpectedIsDefault));
}

$Class* ExpectedIsDefault::load$($String* name, bool initialize) {
	$loadClass(ExpectedIsDefault, name, initialize, &_ExpectedIsDefault_ClassInfo_, allocate$ExpectedIsDefault);
	return class$;
}

$Class* ExpectedIsDefault::class$ = nullptr;