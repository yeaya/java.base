#include <WithParameters$Thing.h>

#include <WithParameters.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $WithParameters = ::WithParameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute WithParameters$Thing_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _WithParameters$Thing_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", WithParameters$Thing_Attribute_var$0},
	{}
};


$InnerClassInfo _WithParameters$Thing_InnerClassesInfo_[] = {
	{"WithParameters$Thing", "WithParameters", "Thing", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _WithParameters$Thing_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"WithParameters$Thing",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_WithParameters$Thing_InnerClassesInfo_,
	_WithParameters$Thing_Annotations_,
	nullptr,
	nullptr,
	"WithParameters"
};

$Object* allocate$WithParameters$Thing($Class* clazz) {
	return $of($alloc(WithParameters$Thing));
}

$Class* WithParameters$Thing::load$($String* name, bool initialize) {
	$loadClass(WithParameters$Thing, name, initialize, &_WithParameters$Thing_ClassInfo_, allocate$WithParameters$Thing);
	return class$;
}

$Class* WithParameters$Thing::class$ = nullptr;