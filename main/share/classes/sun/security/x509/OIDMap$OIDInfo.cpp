#include <sun/security/x509/OIDMap$OIDInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/security/cert/CertificateException.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/OIDMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace x509 {

void OIDMap$OIDInfo::init$($String* name, $ObjectIdentifier* oid, $String* className) {
	$set(this, name, name);
	$set(this, oid, oid);
	$set(this, className, className);
}

void OIDMap$OIDInfo::init$($String* name, $ObjectIdentifier* oid, $Class* clazz) {
	$set(this, name, name);
	$set(this, oid, oid);
	$set(this, className, $nc(clazz)->getName());
	$set(this, clazz, clazz);
}

$Class* OIDMap$OIDInfo::getClazz() {
	$beforeCallerSensitive();
	try {
		$Class* c = this->clazz;
		if (c == nullptr) {
			c = $Class::forName(this->className);
			$set(this, clazz, c);
		}
		return c;
	} catch ($ClassNotFoundException& e) {
		$throwNew($CertificateException, $$str({"Could not load class: "_s, e}), e);
	}
	$shouldNotReachHere();
}

OIDMap$OIDInfo::OIDMap$OIDInfo() {
}

$Class* OIDMap$OIDInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oid", "Lsun/security/util/ObjectIdentifier;", nullptr, $FINAL, $field(OIDMap$OIDInfo, oid)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(OIDMap$OIDInfo, name)},
		{"className", "Ljava/lang/String;", nullptr, $FINAL, $field(OIDMap$OIDInfo, className)},
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $VOLATILE, $field(OIDMap$OIDInfo, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/String;)V", nullptr, 0, $method(OIDMap$OIDInfo, init$, void, $String*, $ObjectIdentifier*, $String*)},
		{"<init>", "(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class;)V", "(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class<*>;)V", 0, $method(OIDMap$OIDInfo, init$, void, $String*, $ObjectIdentifier*, $Class*)},
		{"getClazz", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(OIDMap$OIDInfo, getClazz, $Class*), "java.security.cert.CertificateException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.x509.OIDMap$OIDInfo", "sun.security.x509.OIDMap", "OIDInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.OIDMap$OIDInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.x509.OIDMap"
	};
	$loadClass(OIDMap$OIDInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OIDMap$OIDInfo);
	});
	return class$;
}

$Class* OIDMap$OIDInfo::class$ = nullptr;

		} // x509
	} // security
} // sun