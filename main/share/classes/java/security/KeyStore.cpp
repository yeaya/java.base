#include <java/security/KeyStore.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyStore$1.h>
#include <java/security/KeyStore$Entry.h>
#include <java/security/KeyStore$LoadStoreParameter.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStoreException.h>
#include <java/security/KeyStoreSpi.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef KEYSTORE_TYPE
#undef MAX_VALUE

using $ProviderArray = $Array<::java::security::Provider>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyStore$1 = ::java::security::KeyStore$1;
using $KeyStore$Entry = ::java::security::KeyStore$Entry;
using $KeyStore$LoadStoreParameter = ::java::security::KeyStore$LoadStoreParameter;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $KeyStoreException = ::java::security::KeyStoreException;
using $KeyStoreSpi = ::java::security::KeyStoreSpi;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $PrivateKey = ::java::security::PrivateKey;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Security = ::java::security::Security;
using $Certificate = ::java::security::cert::Certificate;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _KeyStore_FieldInfo_[] = {
	{"kdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStore, kdebug)},
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStore, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStore, skipDebug)},
	{"KEYSTORE_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStore, KEYSTORE_TYPE)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeyStore, type)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(KeyStore, provider)},
	{"keyStoreSpi", "Ljava/security/KeyStoreSpi;", nullptr, $PRIVATE, $field(KeyStore, keyStoreSpi)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(KeyStore, initialized)},
	{}
};

$MethodInfo _KeyStore_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStoreSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(KeyStore::*)($KeyStoreSpi*,$Provider*,$String*)>(&KeyStore::init$))},
	{"aliases", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC | $FINAL, $method(static_cast<$Enumeration*(KeyStore::*)()>(&KeyStore::aliases)), "java.security.KeyStoreException"},
	{"containsAlias", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(KeyStore::*)($String*)>(&KeyStore::containsAlias)), "java.security.KeyStoreException"},
	{"deleteEntry", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($String*)>(&KeyStore::deleteEntry)), "java.security.KeyStoreException"},
	{"entryInstanceOf", "(Ljava/lang/String;Ljava/lang/Class;)Z", "(Ljava/lang/String;Ljava/lang/Class<+Ljava/security/KeyStore$Entry;>;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(KeyStore::*)($String*,$Class*)>(&KeyStore::entryInstanceOf)), "java.security.KeyStoreException"},
	{"getCertificate", "(Ljava/lang/String;)Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Certificate*(KeyStore::*)($String*)>(&KeyStore::getCertificate)), "java.security.KeyStoreException"},
	{"getCertificateAlias", "(Ljava/security/cert/Certificate;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(KeyStore::*)($Certificate*)>(&KeyStore::getCertificateAlias)), "java.security.KeyStoreException"},
	{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertificateArray*(KeyStore::*)($String*)>(&KeyStore::getCertificateChain)), "java.security.KeyStoreException"},
	{"getCreationDate", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Date*(KeyStore::*)($String*)>(&KeyStore::getCreationDate)), "java.security.KeyStoreException"},
	{"getDefaultType", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)()>(&KeyStore::getDefaultType))},
	{"getEntry", "(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$KeyStore$Entry*(KeyStore::*)($String*,$KeyStore$ProtectionParameter*)>(&KeyStore::getEntry)), "java.security.NoSuchAlgorithmException,java.security.UnrecoverableEntryException,java.security.KeyStoreException"},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore*(*)($String*)>(&KeyStore::getInstance)), "java.security.KeyStoreException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore*(*)($String*,$String*)>(&KeyStore::getInstance)), "java.security.KeyStoreException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStore*(*)($String*,$Provider*)>(&KeyStore::getInstance)), "java.security.KeyStoreException"},
	{"getInstance", "(Ljava/io/File;[C)Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<KeyStore*(*)($File*,$chars*)>(&KeyStore::getInstance)), "java.security.KeyStoreException,java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"getInstance", "(Ljava/io/File;Ljava/security/KeyStore$LoadStoreParameter;)Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<KeyStore*(*)($File*,$KeyStore$LoadStoreParameter*)>(&KeyStore::getInstance)), "java.security.KeyStoreException,java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"getInstance", "(Ljava/io/File;[CLjava/security/KeyStore$LoadStoreParameter;Z)Ljava/security/KeyStore;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<KeyStore*(*)($File*,$chars*,$KeyStore$LoadStoreParameter*,bool)>(&KeyStore::getInstance)), "java.security.KeyStoreException,java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"getKey", "(Ljava/lang/String;[C)Ljava/security/Key;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Key*(KeyStore::*)($String*,$chars*)>(&KeyStore::getKey)), "java.security.KeyStoreException,java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(KeyStore::*)()>(&KeyStore::getProvider))},
	{"getProviderName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(KeyStore::*)()>(&KeyStore::getProviderName))},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(KeyStore::*)()>(&KeyStore::getType))},
	{"isCertificateEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(KeyStore::*)($String*)>(&KeyStore::isCertificateEntry)), "java.security.KeyStoreException"},
	{"isKeyEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(KeyStore::*)($String*)>(&KeyStore::isKeyEntry)), "java.security.KeyStoreException"},
	{"load", "(Ljava/io/InputStream;[C)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($InputStream*,$chars*)>(&KeyStore::load)), "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"load", "(Ljava/security/KeyStore$LoadStoreParameter;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($KeyStore$LoadStoreParameter*)>(&KeyStore::load)), "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"setCertificateEntry", "(Ljava/lang/String;Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($String*,$Certificate*)>(&KeyStore::setCertificateEntry)), "java.security.KeyStoreException"},
	{"setEntry", "(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($String*,$KeyStore$Entry*,$KeyStore$ProtectionParameter*)>(&KeyStore::setEntry)), "java.security.KeyStoreException"},
	{"setKeyEntry", "(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($String*,$Key*,$chars*,$CertificateArray*)>(&KeyStore::setKeyEntry)), "java.security.KeyStoreException"},
	{"setKeyEntry", "(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($String*,$bytes*,$CertificateArray*)>(&KeyStore::setKeyEntry)), "java.security.KeyStoreException"},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(KeyStore::*)()>(&KeyStore::size)), "java.security.KeyStoreException"},
	{"store", "(Ljava/io/OutputStream;[C)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($OutputStream*,$chars*)>(&KeyStore::store)), "java.security.KeyStoreException,java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"store", "(Ljava/security/KeyStore$LoadStoreParameter;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyStore::*)($KeyStore$LoadStoreParameter*)>(&KeyStore::store)), "java.security.KeyStoreException,java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{}
};

$InnerClassInfo _KeyStore_InnerClassesInfo_[] = {
	{"java.security.KeyStore$SimpleLoadStoreParameter", "java.security.KeyStore", "SimpleLoadStoreParameter", $STATIC},
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$TrustedCertificateEntry", "java.security.KeyStore", "TrustedCertificateEntry", $PUBLIC | $STATIC | $FINAL},
	{"java.security.KeyStore$SecretKeyEntry", "java.security.KeyStore", "SecretKeyEntry", $PUBLIC | $STATIC | $FINAL},
	{"java.security.KeyStore$PrivateKeyEntry", "java.security.KeyStore", "PrivateKeyEntry", $PUBLIC | $STATIC | $FINAL},
	{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.security.KeyStore$CallbackHandlerProtection", "java.security.KeyStore", "CallbackHandlerProtection", $PUBLIC | $STATIC},
	{"java.security.KeyStore$PasswordProtection", "java.security.KeyStore", "PasswordProtection", $PUBLIC | $STATIC},
	{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.security.KeyStore$LoadStoreParameter", "java.security.KeyStore", "LoadStoreParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.security.KeyStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyStore",
	"java.lang.Object",
	nullptr,
	_KeyStore_FieldInfo_,
	_KeyStore_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.KeyStore$SimpleLoadStoreParameter,java.security.KeyStore$Builder,java.security.KeyStore$Builder$FileBuilder,java.security.KeyStore$Builder$FileBuilder$1,java.security.KeyStore$Builder$2,java.security.KeyStore$Builder$2$1,java.security.KeyStore$Builder$1,java.security.KeyStore$TrustedCertificateEntry,java.security.KeyStore$SecretKeyEntry,java.security.KeyStore$PrivateKeyEntry,java.security.KeyStore$Entry,java.security.KeyStore$Entry$Attribute,java.security.KeyStore$CallbackHandlerProtection,java.security.KeyStore$PasswordProtection,java.security.KeyStore$ProtectionParameter,java.security.KeyStore$LoadStoreParameter,java.security.KeyStore$1"
};

$Object* allocate$KeyStore($Class* clazz) {
	return $of($alloc(KeyStore));
}

$Debug* KeyStore::kdebug = nullptr;
$Debug* KeyStore::pdebug = nullptr;
bool KeyStore::skipDebug = false;
$String* KeyStore::KEYSTORE_TYPE = nullptr;

void KeyStore::init$($KeyStoreSpi* keyStoreSpi, $Provider* provider, $String* type) {
	$set(this, keyStoreSpi, keyStoreSpi);
	$set(this, provider, provider);
	$set(this, type, type);
	if (!KeyStore::skipDebug && KeyStore::pdebug != nullptr) {
		$var($String, var$0, $$str({"KeyStore."_s, $($nc(type)->toUpperCase()), " type from: "_s}));
		$nc(KeyStore::pdebug)->println($$concat(var$0, $(getProviderName())));
	}
}

$String* KeyStore::getProviderName() {
	return (this->provider == nullptr) ? "(no provider)"_s : $nc(this->provider)->getName();
}

KeyStore* KeyStore::getInstance($String* type) {
	$init(KeyStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$var($ObjectArray, objs, $Security::getImpl(type, "KeyStore"_s, ($String*)nullptr));
		return $new(KeyStore, $cast($KeyStoreSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$throwNew($KeyStoreException, $$str({type, " not found"_s}), nsae);
	} catch ($NoSuchProviderException&) {
		$var($NoSuchProviderException, nspe, $catch());
		$throwNew($KeyStoreException, $$str({type, " not found"_s}), nspe);
	}
	$shouldNotReachHere();
}

KeyStore* KeyStore::getInstance($String* type, $String* provider) {
	$init(KeyStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	try {
		$var($ObjectArray, objs, $Security::getImpl(type, "KeyStore"_s, provider));
		return $new(KeyStore, $cast($KeyStoreSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$throwNew($KeyStoreException, $$str({type, " not found"_s}), nsae);
	}
	$shouldNotReachHere();
}

KeyStore* KeyStore::getInstance($String* type, $Provider* provider) {
	$init(KeyStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	try {
		$var($ObjectArray, objs, $Security::getImpl(type, "KeyStore"_s, provider));
		return $new(KeyStore, $cast($KeyStoreSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$throwNew($KeyStoreException, $$str({type, " not found"_s}), nsae);
	}
	$shouldNotReachHere();
}

$String* KeyStore::getDefaultType() {
	$init(KeyStore);
	$beforeCallerSensitive();
	$var($String, kstype, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeyStore$1)))));
	if (kstype == nullptr) {
		$assign(kstype, "jks"_s);
	}
	return kstype;
}

$Provider* KeyStore::getProvider() {
	return this->provider;
}

$String* KeyStore::getType() {
	return this->type;
}

$Key* KeyStore::getKey($String* alias, $chars* password) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetKey(alias, password);
}

$CertificateArray* KeyStore::getCertificateChain($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetCertificateChain(alias);
}

$Certificate* KeyStore::getCertificate($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetCertificate(alias);
}

$Date* KeyStore::getCreationDate($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetCreationDate(alias);
}

void KeyStore::setKeyEntry($String* alias, $Key* key, $chars* password, $CertificateArray* chain) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	if (($instanceOf($PrivateKey, key)) && (chain == nullptr || $nc(chain)->length == 0)) {
		$throwNew($IllegalArgumentException, "Private key must be accompanied by certificate chain"_s);
	}
	$nc(this->keyStoreSpi)->engineSetKeyEntry(alias, key, password, chain);
}

void KeyStore::setKeyEntry($String* alias, $bytes* key, $CertificateArray* chain) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineSetKeyEntry(alias, key, chain);
}

void KeyStore::setCertificateEntry($String* alias, $Certificate* cert) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineSetCertificateEntry(alias, cert);
}

void KeyStore::deleteEntry($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineDeleteEntry(alias);
}

$Enumeration* KeyStore::aliases() {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineAliases();
}

bool KeyStore::containsAlias($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineContainsAlias(alias);
}

int32_t KeyStore::size() {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineSize();
}

bool KeyStore::isKeyEntry($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineIsKeyEntry(alias);
}

bool KeyStore::isCertificateEntry($String* alias) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineIsCertificateEntry(alias);
}

$String* KeyStore::getCertificateAlias($Certificate* cert) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetCertificateAlias(cert);
}

void KeyStore::store($OutputStream* stream, $chars* password) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineStore(stream, password);
}

void KeyStore::store($KeyStore$LoadStoreParameter* param) {
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineStore(param);
}

void KeyStore::load($InputStream* stream, $chars* password) {
	$nc(this->keyStoreSpi)->engineLoad(stream, password);
	this->initialized = true;
}

void KeyStore::load($KeyStore$LoadStoreParameter* param) {
	$nc(this->keyStoreSpi)->engineLoad(param);
	this->initialized = true;
}

$KeyStore$Entry* KeyStore::getEntry($String* alias, $KeyStore$ProtectionParameter* protParam) {
	if (alias == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineGetEntry(alias, protParam);
}

void KeyStore::setEntry($String* alias, $KeyStore$Entry* entry, $KeyStore$ProtectionParameter* protParam) {
	if (alias == nullptr || entry == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	$nc(this->keyStoreSpi)->engineSetEntry(alias, entry, protParam);
}

bool KeyStore::entryInstanceOf($String* alias, $Class* entryClass) {
	if (alias == nullptr || entryClass == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	if (!this->initialized) {
		$throwNew($KeyStoreException, "Uninitialized keystore"_s);
	}
	return $nc(this->keyStoreSpi)->engineEntryInstanceOf(alias, entryClass);
}

KeyStore* KeyStore::getInstance($File* file, $chars* password) {
	$init(KeyStore);
	return getInstance(file, password, nullptr, true);
}

KeyStore* KeyStore::getInstance($File* file, $KeyStore$LoadStoreParameter* param) {
	$init(KeyStore);
	return getInstance(file, nullptr, param, false);
}

KeyStore* KeyStore::getInstance($File* file, $chars* password, $KeyStore$LoadStoreParameter* param, bool hasPassword) {
	$init(KeyStore);
	if (file == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(file)->isFile() == false) {
		$throwNew($IllegalArgumentException, $$str({"File does not exist or it does not refer to a normal file: "_s, file}));
	}
	$var(KeyStore, keystore, nullptr);
	{
		$var($DataInputStream, dataStream, $new($DataInputStream, $$new($BufferedInputStream, $$new($FileInputStream, file))));
		{
			$var($Throwable, var$0, nullptr);
			$var(KeyStore, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					dataStream->mark($Integer::MAX_VALUE);
					{
						$var($ProviderArray, arr$, $Security::getProviders());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Provider, p, arr$->get(i$));
							{
								{
									$var($Iterator, i$, $nc($($nc(p)->getServices()))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($Provider$Service, s, $cast($Provider$Service, i$->next()));
										{
											if ($nc($($nc(s)->getType()))->equals("KeyStore"_s)) {
												try {
													$var($KeyStoreSpi, impl, $cast($KeyStoreSpi, s->newInstance(nullptr)));
													if ($nc(impl)->engineProbe(dataStream)) {
														if (KeyStore::kdebug != nullptr) {
															$nc(KeyStore::kdebug)->println($$str({$(s->getAlgorithm()), " keystore detected: "_s, file}));
														}
														$assign(keystore, $new(KeyStore, impl, p, $(s->getAlgorithm())));
														break;
													}
												} catch ($NoSuchAlgorithmException&) {
													$var($NoSuchAlgorithmException, e, $catch());
													if (KeyStore::kdebug != nullptr) {
														$nc(KeyStore::kdebug)->println($$str({"not found - "_s, e}));
													}
												} catch ($IOException&) {
													$var($IOException, e, $catch());
													if (KeyStore::kdebug != nullptr) {
														$nc(KeyStore::kdebug)->println($$str({"I/O error in "_s, file, " - "_s, e}));
													}
												}
												dataStream->reset();
											}
										}
									}
								}
							}
						}
					}
					if (keystore != nullptr) {
						dataStream->reset();
						if (hasPassword) {
							keystore->load(dataStream, password);
						} else {
							$nc(keystore->keyStoreSpi)->engineLoad(static_cast<$InputStream*>(dataStream), param);
							keystore->initialized = true;
						}
						$assign(var$2, keystore);
						return$1 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						dataStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				dataStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$throwNew($KeyStoreException, "Unrecognized keystore format. Please load it with a specified type"_s);
	$shouldNotReachHere();
}

void clinit$KeyStore($Class* class$) {
	$assignStatic(KeyStore::KEYSTORE_TYPE, "keystore.type"_s);
	$assignStatic(KeyStore::kdebug, $Debug::getInstance("keystore"_s));
	$assignStatic(KeyStore::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	KeyStore::skipDebug = var$0 && !$Debug::isOn("keystore"_s);
}

KeyStore::KeyStore() {
}

$Class* KeyStore::load$($String* name, bool initialize) {
	$loadClass(KeyStore, name, initialize, &_KeyStore_ClassInfo_, clinit$KeyStore, allocate$KeyStore);
	return class$;
}

$Class* KeyStore::class$ = nullptr;

	} // security
} // java