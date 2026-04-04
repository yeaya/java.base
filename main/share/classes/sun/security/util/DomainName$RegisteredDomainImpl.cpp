#include <sun/security/util/DomainName$RegisteredDomainImpl.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

void DomainName$RegisteredDomainImpl::init$($String* name, $RegisteredDomain$Type* type, $String* publicSuffix) {
	$set(this, name$, name);
	$set(this, type$, type);
	$set(this, publicSuffix$, publicSuffix);
}

$String* DomainName$RegisteredDomainImpl::name() {
	return this->name$;
}

$RegisteredDomain$Type* DomainName$RegisteredDomainImpl::type() {
	return this->type$;
}

$String* DomainName$RegisteredDomainImpl::publicSuffix() {
	return this->publicSuffix$;
}

DomainName$RegisteredDomainImpl::DomainName$RegisteredDomainImpl() {
}

$Class* DomainName$RegisteredDomainImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, name$)},
		{"type", "Lsun/security/util/RegisteredDomain$Type;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, type$)},
		{"publicSuffix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, publicSuffix$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/lang/String;)V", nullptr, 0, $method(DomainName$RegisteredDomainImpl, init$, void, $String*, $RegisteredDomain$Type*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DomainName$RegisteredDomainImpl, name, $String*)},
		{"publicSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DomainName$RegisteredDomainImpl, publicSuffix, $String*)},
		{"type", "()Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC, $virtualMethod(DomainName$RegisteredDomainImpl, type, $RegisteredDomain$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$RegisteredDomainImpl", "sun.security.util.DomainName", "RegisteredDomainImpl", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DomainName$RegisteredDomainImpl",
		"java.lang.Object",
		"sun.security.util.RegisteredDomain",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DomainName"
	};
	$loadClass(DomainName$RegisteredDomainImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$RegisteredDomainImpl);
	});
	return class$;
}

$Class* DomainName$RegisteredDomainImpl::class$ = nullptr;

		} // util
	} // security
} // sun