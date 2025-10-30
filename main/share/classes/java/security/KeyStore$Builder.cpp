#include <java/security/KeyStore$Builder.h>

#include <java/io/File.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/KeyStore$Builder$1.h>
#include <java/security/KeyStore$Builder$2.h>
#include <java/security/KeyStore$Builder$FileBuilder.h>
#include <java/security/KeyStore$CallbackHandlerProtection.h>
#include <java/security/KeyStore$PasswordProtection.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <java/security/Provider.h>
#include <jcpp.h>

#undef MAX_CALLBACK_TRIES

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder$1 = ::java::security::KeyStore$Builder$1;
using $KeyStore$Builder$2 = ::java::security::KeyStore$Builder$2;
using $KeyStore$Builder$FileBuilder = ::java::security::KeyStore$Builder$FileBuilder;
using $KeyStore$CallbackHandlerProtection = ::java::security::KeyStore$CallbackHandlerProtection;
using $KeyStore$PasswordProtection = ::java::security::KeyStore$PasswordProtection;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $Provider = ::java::security::Provider;

namespace java {
	namespace security {

$FieldInfo _KeyStore$Builder_FieldInfo_[] = {
	{"MAX_CALLBACK_TRIES", "I", nullptr, $STATIC | $FINAL, $constField(KeyStore$Builder, MAX_CALLBACK_TRIES)},
	{}
};

$MethodInfo _KeyStore$Builder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(KeyStore$Builder::*)()>(&KeyStore$Builder::init$))},
	{"getKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyStoreException"},
	{"getProtectionParameter", "(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyStoreException"},
	{"newInstance", "(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore$Builder*(*)($KeyStore*,$KeyStore$ProtectionParameter*)>(&KeyStore$Builder::newInstance))},
	{"newInstance", "(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore$Builder*(*)($String*,$Provider*,$File*,$KeyStore$ProtectionParameter*)>(&KeyStore$Builder::newInstance))},
	{"newInstance", "(Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore$Builder*(*)($File*,$KeyStore$ProtectionParameter*)>(&KeyStore$Builder::newInstance))},
	{"newInstance", "(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore$Builder*(*)($String*,$Provider*,$KeyStore$ProtectionParameter*)>(&KeyStore$Builder::newInstance))},
	{}
};

$InnerClassInfo _KeyStore$Builder_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$Builder$FileBuilder", "java.security.KeyStore$Builder", "FileBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.security.KeyStore$Builder$2", nullptr, nullptr, 0},
	{"java.security.KeyStore$Builder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore$Builder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.KeyStore$Builder",
	"java.lang.Object",
	nullptr,
	_KeyStore$Builder_FieldInfo_,
	_KeyStore$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Builder($Class* clazz) {
	return $of($alloc(KeyStore$Builder));
}

void KeyStore$Builder::init$() {
}

KeyStore$Builder* KeyStore$Builder::newInstance($KeyStore* keyStore, $KeyStore$ProtectionParameter* protectionParameter) {
	if ((keyStore == nullptr) || (protectionParameter == nullptr)) {
		$throwNew($NullPointerException);
	}
	if ($nc(keyStore)->initialized == false) {
		$throwNew($IllegalArgumentException, "KeyStore not initialized"_s);
	}
	return $new($KeyStore$Builder$1, keyStore, protectionParameter);
}

KeyStore$Builder* KeyStore$Builder::newInstance($String* type, $Provider* provider, $File* file, $KeyStore$ProtectionParameter* protection) {
	$useLocalCurrentObjectStackCache();
	if ((type == nullptr) || (file == nullptr) || (protection == nullptr)) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($KeyStore$PasswordProtection, protection)) && !($instanceOf($KeyStore$CallbackHandlerProtection, protection))) {
		$throwNew($IllegalArgumentException, "Protection must be PasswordProtection or CallbackHandlerProtection"_s);
	}
	if (!$nc(file)->isFile()) {
		$throwNew($IllegalArgumentException, $$str({"File does not exist or it does not refer to a normal file: "_s, file}));
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	return $new($KeyStore$Builder$FileBuilder, type, provider, file, protection, acc);
}

KeyStore$Builder* KeyStore$Builder::newInstance($File* file, $KeyStore$ProtectionParameter* protection) {
	return newInstance(""_s, nullptr, file, protection);
}

KeyStore$Builder* KeyStore$Builder::newInstance($String* type, $Provider* provider, $KeyStore$ProtectionParameter* protection) {
	if ((type == nullptr) || (protection == nullptr)) {
		$throwNew($NullPointerException);
	}
	$var($AccessControlContext, context, $AccessController::getContext());
	return $new($KeyStore$Builder$2, provider, type, protection, context);
}

KeyStore$Builder::KeyStore$Builder() {
}

$Class* KeyStore$Builder::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Builder, name, initialize, &_KeyStore$Builder_ClassInfo_, allocate$KeyStore$Builder);
	return class$;
}

$Class* KeyStore$Builder::class$ = nullptr;

	} // security
} // java