#include <sun/security/provider/DomainKeyStore$DKS.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/KeyStore$LoadStoreParameter.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <sun/security/provider/DomainKeyStore.h>
#include <jcpp.h>

#undef ENGLISH

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $KeyStore$LoadStoreParameter = ::java::security::KeyStore$LoadStoreParameter;
using $Certificate = ::java::security::cert::Certificate;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $DomainKeyStore = ::sun::security::provider::DomainKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DomainKeyStore$DKS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DomainKeyStore$DKS::*)()>(&DomainKeyStore$DKS::init$))},
	{"convertAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"engineAliases", "()Ljava/util/Enumeration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineContainsAlias", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineDeleteEntry", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.KeyStoreException"},
	{"engineGetCertificate", "(Ljava/lang/String;)Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineGetCertificateAlias", "(Ljava/security/cert/Certificate;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineGetCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineGetCreationDate", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineGetKey", "(Ljava/lang/String;[C)Ljava/security/Key;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{"engineIsCertificateEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineIsKeyEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineLoad", "(Ljava/security/KeyStore$LoadStoreParameter;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"engineLoad", "(Ljava/io/InputStream;[C)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"engineSetCertificateEntry", "(Ljava/lang/String;Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.KeyStoreException"},
	{"engineSetKeyEntry", "(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.KeyStoreException"},
	{"engineSetKeyEntry", "(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.security.KeyStoreException"},
	{"engineSize", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"engineStore", "(Ljava/security/KeyStore$LoadStoreParameter;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{"engineStore", "(Ljava/io/OutputStream;[C)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
	{}
};

$InnerClassInfo _DomainKeyStore$DKS_InnerClassesInfo_[] = {
	{"sun.security.provider.DomainKeyStore$DKS", "sun.security.provider.DomainKeyStore", "DKS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DomainKeyStore$DKS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DomainKeyStore$DKS",
	"sun.security.provider.DomainKeyStore",
	nullptr,
	nullptr,
	_DomainKeyStore$DKS_MethodInfo_,
	nullptr,
	nullptr,
	_DomainKeyStore$DKS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DomainKeyStore"
};

$Object* allocate$DomainKeyStore$DKS($Class* clazz) {
	return $of($alloc(DomainKeyStore$DKS));
}

void DomainKeyStore$DKS::init$() {
	$DomainKeyStore::init$();
}

$String* DomainKeyStore$DKS::convertAlias($String* alias) {
	$init($Locale);
	return $nc(alias)->toLowerCase($Locale::ENGLISH);
}

void DomainKeyStore$DKS::engineLoad($KeyStore$LoadStoreParameter* param) {
	$DomainKeyStore::engineLoad(param);
}

void DomainKeyStore$DKS::engineLoad($InputStream* stream, $chars* password) {
	$DomainKeyStore::engineLoad(stream, password);
}

void DomainKeyStore$DKS::engineStore($KeyStore$LoadStoreParameter* param) {
	$DomainKeyStore::engineStore(param);
}

void DomainKeyStore$DKS::engineStore($OutputStream* stream, $chars* password) {
	$DomainKeyStore::engineStore(stream, password);
}

$String* DomainKeyStore$DKS::engineGetCertificateAlias($Certificate* cert) {
	return $DomainKeyStore::engineGetCertificateAlias(cert);
}

bool DomainKeyStore$DKS::engineIsCertificateEntry($String* alias) {
	return $DomainKeyStore::engineIsCertificateEntry(alias);
}

bool DomainKeyStore$DKS::engineIsKeyEntry($String* alias) {
	return $DomainKeyStore::engineIsKeyEntry(alias);
}

int32_t DomainKeyStore$DKS::engineSize() {
	return $DomainKeyStore::engineSize();
}

bool DomainKeyStore$DKS::engineContainsAlias($String* alias) {
	return $DomainKeyStore::engineContainsAlias(alias);
}

$Enumeration* DomainKeyStore$DKS::engineAliases() {
	return $DomainKeyStore::engineAliases();
}

void DomainKeyStore$DKS::engineDeleteEntry($String* alias) {
	$DomainKeyStore::engineDeleteEntry(alias);
}

void DomainKeyStore$DKS::engineSetCertificateEntry($String* alias, $Certificate* cert) {
	$DomainKeyStore::engineSetCertificateEntry(alias, cert);
}

void DomainKeyStore$DKS::engineSetKeyEntry($String* alias, $bytes* key, $CertificateArray* chain) {
	$DomainKeyStore::engineSetKeyEntry(alias, key, chain);
}

void DomainKeyStore$DKS::engineSetKeyEntry($String* alias, $Key* key, $chars* password, $CertificateArray* chain) {
	$DomainKeyStore::engineSetKeyEntry(alias, key, password, chain);
}

$Date* DomainKeyStore$DKS::engineGetCreationDate($String* alias) {
	return $DomainKeyStore::engineGetCreationDate(alias);
}

$Certificate* DomainKeyStore$DKS::engineGetCertificate($String* alias) {
	return $DomainKeyStore::engineGetCertificate(alias);
}

$CertificateArray* DomainKeyStore$DKS::engineGetCertificateChain($String* alias) {
	return $DomainKeyStore::engineGetCertificateChain(alias);
}

$Key* DomainKeyStore$DKS::engineGetKey($String* alias, $chars* password) {
	return $DomainKeyStore::engineGetKey(alias, password);
}

DomainKeyStore$DKS::DomainKeyStore$DKS() {
}

$Class* DomainKeyStore$DKS::load$($String* name, bool initialize) {
	$loadClass(DomainKeyStore$DKS, name, initialize, &_DomainKeyStore$DKS_ClassInfo_, allocate$DomainKeyStore$DKS);
	return class$;
}

$Class* DomainKeyStore$DKS::class$ = nullptr;

		} // provider
	} // security
} // sun