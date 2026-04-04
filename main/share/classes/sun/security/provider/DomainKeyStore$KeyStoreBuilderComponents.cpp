#include <sun/security/provider/DomainKeyStore$KeyStoreBuilderComponents.h>
#include <java/io/File.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/Provider.h>
#include <sun/security/provider/DomainKeyStore.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $Provider = ::java::security::Provider;

namespace sun {
	namespace security {
		namespace provider {

void DomainKeyStore$KeyStoreBuilderComponents::init$($String* name, $String* type, $Provider* provider, $File* file, $KeyStore$ProtectionParameter* protection) {
	$set(this, name, name);
	$set(this, type, type);
	$set(this, provider, provider);
	$set(this, file, file);
	$set(this, protection, protection);
}

DomainKeyStore$KeyStoreBuilderComponents::DomainKeyStore$KeyStoreBuilderComponents() {
}

$Class* DomainKeyStore$KeyStoreBuilderComponents::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, name)},
		{"type", "Ljava/lang/String;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, type)},
		{"provider", "Ljava/security/Provider;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, provider)},
		{"file", "Ljava/io/File;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, file)},
		{"protection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, protection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(DomainKeyStore$KeyStoreBuilderComponents, init$, void, $String*, $String*, $Provider*, $File*, $KeyStore$ProtectionParameter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.DomainKeyStore$KeyStoreBuilderComponents", "sun.security.provider.DomainKeyStore", "KeyStoreBuilderComponents", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.DomainKeyStore$KeyStoreBuilderComponents",
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
		"sun.security.provider.DomainKeyStore"
	};
	$loadClass(DomainKeyStore$KeyStoreBuilderComponents, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainKeyStore$KeyStoreBuilderComponents);
	});
	return class$;
}

$Class* DomainKeyStore$KeyStoreBuilderComponents::class$ = nullptr;

		} // provider
	} // security
} // sun