#include <ExpectedGenericString.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute ExpectedGenericString_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ExpectedGenericString_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ExpectedGenericString_Attribute_var$0},
	{}
};

$Attribute _ExpectedGenericString_DefaultValue_bridgeValue0 = {
	's', ""
};

$MethodInfo _ExpectedGenericString_MethodInfo_[] = {
	{"bridgeValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedGenericString, bridgeValue, $String*), nullptr, &_ExpectedGenericString_DefaultValue_bridgeValue0},
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedGenericString, value, $String*)},
	{}
};

$ClassInfo _ExpectedGenericString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ExpectedGenericString",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ExpectedGenericString_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ExpectedGenericString_Annotations_
};

$Object* allocate$ExpectedGenericString($Class* clazz) {
	return $of($alloc(ExpectedGenericString));
}

$Class* ExpectedGenericString::load$($String* name, bool initialize) {
	$loadClass(ExpectedGenericString, name, initialize, &_ExpectedGenericString_ClassInfo_, allocate$ExpectedGenericString);
	return class$;
}

$Class* ExpectedGenericString::class$ = nullptr;