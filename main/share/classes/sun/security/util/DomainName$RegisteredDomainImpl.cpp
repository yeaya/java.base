#include <sun/security/util/DomainName$RegisteredDomainImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DomainName = ::sun::security::util::DomainName;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$RegisteredDomainImpl_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, name$)},
	{"type", "Lsun/security/util/RegisteredDomain$Type;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, type$)},
	{"publicSuffix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DomainName$RegisteredDomainImpl, publicSuffix$)},
	{}
};

$MethodInfo _DomainName$RegisteredDomainImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DomainName$RegisteredDomainImpl::*)($String*,$RegisteredDomain$Type*,$String*)>(&DomainName$RegisteredDomainImpl::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"publicSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DomainName$RegisteredDomainImpl_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$RegisteredDomainImpl", "sun.security.util.DomainName", "RegisteredDomainImpl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DomainName$RegisteredDomainImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$RegisteredDomainImpl",
	"java.lang.Object",
	"sun.security.util.RegisteredDomain",
	_DomainName$RegisteredDomainImpl_FieldInfo_,
	_DomainName$RegisteredDomainImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$RegisteredDomainImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$RegisteredDomainImpl($Class* clazz) {
	return $of($alloc(DomainName$RegisteredDomainImpl));
}

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
	$loadClass(DomainName$RegisteredDomainImpl, name, initialize, &_DomainName$RegisteredDomainImpl_ClassInfo_, allocate$DomainName$RegisteredDomainImpl);
	return class$;
}

$Class* DomainName$RegisteredDomainImpl::class$ = nullptr;

		} // util
	} // security
} // sun