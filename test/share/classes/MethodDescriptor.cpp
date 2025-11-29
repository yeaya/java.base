#include <MethodDescriptor.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute MethodDescriptor_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _MethodDescriptor_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MethodDescriptor_Attribute_var$0},
	{}
};

$MethodInfo _MethodDescriptor_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MethodDescriptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"MethodDescriptor",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_MethodDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_MethodDescriptor_Annotations_
};

$Object* allocate$MethodDescriptor($Class* clazz) {
	return $of($alloc(MethodDescriptor));
}

$Class* MethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(MethodDescriptor, name, initialize, &_MethodDescriptor_ClassInfo_, allocate$MethodDescriptor);
	return class$;
}

$Class* MethodDescriptor::class$ = nullptr;