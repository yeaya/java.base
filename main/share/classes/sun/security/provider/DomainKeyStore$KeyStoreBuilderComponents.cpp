#include <sun/security/provider/DomainKeyStore$KeyStoreBuilderComponents.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $DomainKeyStore = ::sun::security::provider::DomainKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DomainKeyStore$KeyStoreBuilderComponents_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, name)},
	{"type", "Ljava/lang/String;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, type)},
	{"provider", "Ljava/security/Provider;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, provider)},
	{"file", "Ljava/io/File;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, file)},
	{"protection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, 0, $field(DomainKeyStore$KeyStoreBuilderComponents, protection)},
	{}
};

$MethodInfo _DomainKeyStore$KeyStoreBuilderComponents_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(static_cast<void(DomainKeyStore$KeyStoreBuilderComponents::*)($String*,$String*,$Provider*,$File*,$KeyStore$ProtectionParameter*)>(&DomainKeyStore$KeyStoreBuilderComponents::init$))},
	{}
};

$InnerClassInfo _DomainKeyStore$KeyStoreBuilderComponents_InnerClassesInfo_[] = {
	{"sun.security.provider.DomainKeyStore$KeyStoreBuilderComponents", "sun.security.provider.DomainKeyStore", "KeyStoreBuilderComponents", $STATIC},
	{}
};

$ClassInfo _DomainKeyStore$KeyStoreBuilderComponents_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.DomainKeyStore$KeyStoreBuilderComponents",
	"java.lang.Object",
	nullptr,
	_DomainKeyStore$KeyStoreBuilderComponents_FieldInfo_,
	_DomainKeyStore$KeyStoreBuilderComponents_MethodInfo_,
	nullptr,
	nullptr,
	_DomainKeyStore$KeyStoreBuilderComponents_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DomainKeyStore"
};

$Object* allocate$DomainKeyStore$KeyStoreBuilderComponents($Class* clazz) {
	return $of($alloc(DomainKeyStore$KeyStoreBuilderComponents));
}

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
	$loadClass(DomainKeyStore$KeyStoreBuilderComponents, name, initialize, &_DomainKeyStore$KeyStoreBuilderComponents_ClassInfo_, allocate$DomainKeyStore$KeyStoreBuilderComponents);
	return class$;
}

$Class* DomainKeyStore$KeyStoreBuilderComponents::class$ = nullptr;

		} // provider
	} // security
} // sun