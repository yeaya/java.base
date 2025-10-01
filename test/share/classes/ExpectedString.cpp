#include <ExpectedString.h>

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

$NamedAttribute ExpectedString_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ExpectedString_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ExpectedString_Attribute_var$0},
	{}
};


$MethodInfo _ExpectedString_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExpectedString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ExpectedString",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ExpectedString_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ExpectedString_Annotations_
};

$Object* allocate$ExpectedString($Class* clazz) {
	return $of($alloc(ExpectedString));
}

$Class* ExpectedString::load$($String* name, bool initialize) {
	$loadClass(ExpectedString, name, initialize, &_ExpectedString_ClassInfo_, allocate$ExpectedString);
	return class$;
}

$Class* ExpectedString::class$ = nullptr;