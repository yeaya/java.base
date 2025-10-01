#include <java/security/KeyStore$Builder$FileBuilder.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/KeyStore$Builder$FileBuilder$1.h>
#include <java/security/KeyStore$Builder.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder = ::java::security::KeyStore$Builder;
using $KeyStore$Builder$FileBuilder$1 = ::java::security::KeyStore$Builder$FileBuilder$1;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $KeyStoreException = ::java::security::KeyStoreException;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;

namespace java {
	namespace security {

$FieldInfo _KeyStore$Builder$FileBuilder_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$Builder$FileBuilder, type)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$Builder$FileBuilder, provider)},
	{"file", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$Builder$FileBuilder, file)},
	{"protection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PRIVATE, $field(KeyStore$Builder$FileBuilder, protection)},
	{"keyProtection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PRIVATE, $field(KeyStore$Builder$FileBuilder, keyProtection)},
	{"context", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$Builder$FileBuilder, context)},
	{"keyStore", "Ljava/security/KeyStore;", nullptr, $PRIVATE, $field(KeyStore$Builder$FileBuilder, keyStore)},
	{"oldException", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(KeyStore$Builder$FileBuilder, oldException)},
	{}
};

$MethodInfo _KeyStore$Builder$FileBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(KeyStore$Builder$FileBuilder::*)($String*,$Provider*,$File*,$KeyStore$ProtectionParameter*,$AccessControlContext*)>(&KeyStore$Builder$FileBuilder::init$))},
	{"getKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.security.KeyStoreException"},
	{"getProtectionParameter", "(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _KeyStore$Builder$FileBuilder_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$Builder$FileBuilder", "java.security.KeyStore$Builder", "FileBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.security.KeyStore$Builder$FileBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore$Builder$FileBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.KeyStore$Builder$FileBuilder",
	"java.security.KeyStore$Builder",
	nullptr,
	_KeyStore$Builder$FileBuilder_FieldInfo_,
	_KeyStore$Builder$FileBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$Builder$FileBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Builder$FileBuilder($Class* clazz) {
	return $of($alloc(KeyStore$Builder$FileBuilder));
}

void KeyStore$Builder$FileBuilder::init$($String* type, $Provider* provider, $File* file, $KeyStore$ProtectionParameter* protection, $AccessControlContext* context) {
	$KeyStore$Builder::init$();
	$set(this, type, type);
	$set(this, provider, provider);
	$set(this, file, file);
	$set(this, protection, protection);
	$set(this, context, context);
}

$KeyStore* KeyStore$Builder$FileBuilder::getKeyStore() {
	$synchronized(this) {
		$beforeCallerSensitive();
		if (this->keyStore != nullptr) {
			return this->keyStore;
		}
		if (this->oldException != nullptr) {
			$throwNew($KeyStoreException, "Previous KeyStore instantiation failed"_s, this->oldException);
		}
		$var($PrivilegedExceptionAction, action, $new($KeyStore$Builder$FileBuilder$1, this));
		try {
			$set(this, keyStore, $cast($KeyStore, $AccessController::doPrivileged(action, this->context)));
			return this->keyStore;
		} catch ($PrivilegedActionException&) {
			$var($PrivilegedActionException, e, $catch());
			$set(this, oldException, e->getCause());
			$throwNew($KeyStoreException, "KeyStore instantiation failed"_s, this->oldException);
		}
	}
	$shouldNotReachHere();
}

$KeyStore$ProtectionParameter* KeyStore$Builder$FileBuilder::getProtectionParameter($String* alias) {
	$synchronized(this) {
		if (alias == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->keyStore == nullptr) {
			$throwNew($IllegalStateException, "getKeyStore() must be called first"_s);
		}
		return this->keyProtection;
	}
}

KeyStore$Builder$FileBuilder::KeyStore$Builder$FileBuilder() {
}

$Class* KeyStore$Builder$FileBuilder::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Builder$FileBuilder, name, initialize, &_KeyStore$Builder$FileBuilder_ClassInfo_, allocate$KeyStore$Builder$FileBuilder);
	return class$;
}

$Class* KeyStore$Builder$FileBuilder::class$ = nullptr;

	} // security
} // java