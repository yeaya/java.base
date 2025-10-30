#include <java/security/DomainCombiner.h>

#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace security {

$NamedAttribute DomainCombiner_Attribute_var$0[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _DomainCombiner_Annotations_[] = {
	{"Ljava/lang/Deprecated;", DomainCombiner_Attribute_var$0},
	{}
};

$MethodInfo _DomainCombiner_MethodInfo_[] = {
	{"combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DomainCombiner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.DomainCombiner",
	nullptr,
	nullptr,
	nullptr,
	_DomainCombiner_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DomainCombiner_Annotations_
};

$Object* allocate$DomainCombiner($Class* clazz) {
	return $of($alloc(DomainCombiner));
}

$Class* DomainCombiner::load$($String* name, bool initialize) {
	$loadClass(DomainCombiner, name, initialize, &_DomainCombiner_ClassInfo_, allocate$DomainCombiner);
	return class$;
}

$Class* DomainCombiner::class$ = nullptr;

	} // security
} // java