#include <common/TestMe.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace common {

$NamedAttribute TestMe_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestMe_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestMe_Attribute_var$0},
	{}
};

$Attribute _TestMe_DefaultValue_canonical0 = {
	's', ""
};

$Attribute _TestMe_DefaultValue_hasCanonical3 = {
	'Z', "true"
};

$MethodInfo _TestMe_MethodInfo_[] = {
	{"canonical", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestMe_DefaultValue_canonical0},
	{"desc", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"encl", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasCanonical", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestMe_DefaultValue_hasCanonical3},
	{"simple", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TestMe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"common.TestMe",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestMe_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TestMe_Annotations_
};

$Object* allocate$TestMe($Class* clazz) {
	return $of($alloc(TestMe));
}

$Class* TestMe::load$($String* name, bool initialize) {
	$loadClass(TestMe, name, initialize, &_TestMe_ClassInfo_, allocate$TestMe);
	return class$;
}

$Class* TestMe::class$ = nullptr;

} // common