#include <java/security/Policy$Parameters.h>

#include <java/security/Policy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Policy = ::java::security::Policy;

namespace java {
	namespace security {

$NamedAttribute Policy$Parameters_Attribute_var$0[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Policy$Parameters_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Policy$Parameters_Attribute_var$0},
	{}
};

$InnerClassInfo _Policy$Parameters_InnerClassesInfo_[] = {
	{"java.security.Policy$Parameters", "java.security.Policy", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Policy$Parameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.Policy$Parameters",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Policy$Parameters_InnerClassesInfo_,
	_Policy$Parameters_Annotations_,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$Parameters($Class* clazz) {
	return $of($alloc(Policy$Parameters));
}

$Class* Policy$Parameters::load$($String* name, bool initialize) {
	$loadClass(Policy$Parameters, name, initialize, &_Policy$Parameters_ClassInfo_, allocate$Policy$Parameters);
	return class$;
}

$Class* Policy$Parameters::class$ = nullptr;

	} // security
} // java