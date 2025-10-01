#include <ConstructorDescriptor.h>

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

$NamedAttribute ConstructorDescriptor_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ConstructorDescriptor_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ConstructorDescriptor_Attribute_var$0},
	{}
};


$MethodInfo _ConstructorDescriptor_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstructorDescriptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ConstructorDescriptor",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ConstructorDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ConstructorDescriptor_Annotations_
};

$Object* allocate$ConstructorDescriptor($Class* clazz) {
	return $of($alloc(ConstructorDescriptor));
}

$Class* ConstructorDescriptor::load$($String* name, bool initialize) {
	$loadClass(ConstructorDescriptor, name, initialize, &_ConstructorDescriptor_ClassInfo_, allocate$ConstructorDescriptor);
	return class$;
}

$Class* ConstructorDescriptor::class$ = nullptr;