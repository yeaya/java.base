#include <com/sun/crypto/provider/JceKeyStore.h>
#include <com/sun/crypto/provider/EncryptedPrivateKeyInfo.h>
#include <com/sun/crypto/provider/JceKeyStore$DeserializationChecker.h>
#include <com/sun/crypto/provider/JceKeyStore$PrivateKeyEntry.h>
#include <com/sun/crypto/provider/JceKeyStore$SecretKeyEntry.h>
#include <com/sun/crypto/provider/JceKeyStore$TrustedCertEntry.h>
#include <com/sun/crypto/provider/KeyProtector.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/AccessController.h>
#include <java/security/DigestInputStream.h>
#include <java/security/DigestOutputStream.h>
#include <java/security/Key.h>
#include <java/security/KeyStoreException.h>
#include <java/security/KeyStoreSpi.h>
#include <java/security/MessageDigest.h>
#include <java/security/PrivateKey.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/UnrecoverableKeyException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/util/ArrayList.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/crypto/SealedObject.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/IOUtils.h>
#include <jcpp.h>

#undef ENGLISH
#undef JCEKS_MAGIC
#undef JKS_MAGIC
#undef MAX_VALUE
#undef UTF_8
#undef VERSION_1
#undef VERSION_2

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $EncryptedPrivateKeyInfo = ::com::sun::crypto::provider::EncryptedPrivateKeyInfo;
using $JceKeyStore$DeserializationChecker = ::com::sun::crypto::provider::JceKeyStore$DeserializationChecker;
using $JceKeyStore$PrivateKeyEntry = ::com::sun::crypto::provider::JceKeyStore$PrivateKeyEntry;
using $JceKeyStore$SecretKeyEntry = ::com::sun::crypto::provider::JceKeyStore$SecretKeyEntry;
using $JceKeyStore$TrustedCertEntry = ::com::sun::crypto::provider::JceKeyStore$TrustedCertEntry;
using $KeyProtector = ::com::sun::crypto::provider::KeyProtector;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessController = ::java::security::AccessController;
using $DigestInputStream = ::java::security::DigestInputStream;
using $DigestOutputStream = ::java::security::DigestOutputStream;
using $Key = ::java::security::Key;
using $KeyStoreException = ::java::security::KeyStoreException;
using $KeyStoreSpi = ::java::security::KeyStoreSpi;
using $MessageDigest = ::java::security::MessageDigest;
using $PrivateKey = ::java::security::PrivateKey;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $ArrayList = ::java::util::ArrayList;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $SealedObject = ::javax::crypto::SealedObject;
using $Debug = ::sun::security::util::Debug;
using $IOUtils = ::sun::security::util::IOUtils;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class JceKeyStore$$Lambda$lambda$engineLoad$0 : public $PrivilegedAction {
	$class(JceKeyStore$$Lambda$lambda$engineLoad$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ObjectInputStream* ois2, int32_t fullLength) {
		$set(this, ois2, ois2);
		this->fullLength = fullLength;
	}
	virtual $Object* run() override {
		 return JceKeyStore::lambda$engineLoad$0(ois2, fullLength);
	}
	$ObjectInputStream* ois2 = nullptr;
	int32_t fullLength = 0;
};
$Class* JceKeyStore$$Lambda$lambda$engineLoad$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ois2", "Ljava/io/ObjectInputStream;", nullptr, $PUBLIC, $field(JceKeyStore$$Lambda$lambda$engineLoad$0, ois2)},
		{"fullLength", "I", nullptr, $PUBLIC, $field(JceKeyStore$$Lambda$lambda$engineLoad$0, fullLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputStream;I)V", nullptr, $PUBLIC, $method(JceKeyStore$$Lambda$lambda$engineLoad$0, init$, void, $ObjectInputStream*, int32_t)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore$$Lambda$lambda$engineLoad$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.crypto.provider.JceKeyStore$$Lambda$lambda$engineLoad$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JceKeyStore$$Lambda$lambda$engineLoad$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceKeyStore$$Lambda$lambda$engineLoad$0);
	});
	return class$;
}
$Class* JceKeyStore$$Lambda$lambda$engineLoad$0::class$ = nullptr;

$Debug* JceKeyStore::debug = nullptr;

void JceKeyStore::init$() {
	$KeyStoreSpi::init$();
	$set(this, entries, $new($Hashtable));
}

$Key* JceKeyStore::engineGetKey($String* alias, $chars* password) {
	$useLocalObjectStack();
	$var($Key, key, nullptr);
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if (!(($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) || ($instanceOf($JceKeyStore$SecretKeyEntry, entry)))) {
		return nullptr;
	}
	$var($KeyProtector, keyProtector, $new($KeyProtector, password));
	if ($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) {
		$var($bytes, encrBytes, $cast($JceKeyStore$PrivateKeyEntry, entry)->protectedKey);
		$var($EncryptedPrivateKeyInfo, encrInfo, nullptr);
		try {
			$assign(encrInfo, $new($EncryptedPrivateKeyInfo, encrBytes));
		} catch ($IOException& ioe) {
			$throwNew($UnrecoverableKeyException, "Private key not stored as PKCS #8 EncryptedPrivateKeyInfo"_s);
		}
		$assign(key, keyProtector->recover(encrInfo));
	} else {
		$var($JceKeyStore$SecretKeyEntry, ske, $cast($JceKeyStore$SecretKeyEntry, entry));
		$assign(key, keyProtector->unseal($nc(ske)->sealedKey, $nc(ske)->maxLength));
	}
	return key;
}

$CertificateArray* JceKeyStore::engineGetCertificateChain($String* alias) {
	$useLocalObjectStack();
	$var($CertificateArray, chain, nullptr);
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if (($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) && ($cast($JceKeyStore$PrivateKeyEntry, entry)->chain != nullptr)) {
		$assign(chain, $cast($CertificateArray, $cast($JceKeyStore$PrivateKeyEntry, entry)->chain->clone()));
	}
	return chain;
}

$Certificate* JceKeyStore::engineGetCertificate($String* alias) {
	$useLocalObjectStack();
	$var($Certificate, cert, nullptr);
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if (entry != nullptr) {
		if ($instanceOf($JceKeyStore$TrustedCertEntry, entry)) {
			$assign(cert, $cast($JceKeyStore$TrustedCertEntry, entry)->cert);
		} else if (($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) && ($cast($JceKeyStore$PrivateKeyEntry, entry)->chain != nullptr)) {
			$assign(cert, $cast($JceKeyStore$PrivateKeyEntry, entry)->chain->get(0));
		}
	}
	return cert;
}

$Date* JceKeyStore::engineGetCreationDate($String* alias) {
	$useLocalObjectStack();
	$var($Date, date, nullptr);
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if (entry != nullptr) {
		if ($instanceOf($JceKeyStore$TrustedCertEntry, entry)) {
			$assign(date, $new($Date, $nc($cast($JceKeyStore$TrustedCertEntry, entry)->date)->getTime()));
		} else if ($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) {
			$assign(date, $new($Date, $nc($cast($JceKeyStore$PrivateKeyEntry, entry)->date)->getTime()));
		} else {
			$assign(date, $new($Date, $nc($cast($JceKeyStore$SecretKeyEntry, entry)->date)->getTime()));
		}
	}
	return date;
}

void JceKeyStore::engineSetKeyEntry($String* alias, $Key* key, $chars* password, $CertificateArray* chain) {
	$useLocalObjectStack();
	$synchronized(this->entries) {
		try {
			$var($KeyProtector, keyProtector, $new($KeyProtector, password));
			if ($instanceOf($PrivateKey, key)) {
				$var($JceKeyStore$PrivateKeyEntry, entry, $new($JceKeyStore$PrivateKeyEntry));
				$set(entry, date, $new($Date));
				$set(entry, protectedKey, keyProtector->protect($cast($PrivateKey, key)));
				if ((chain != nullptr) && (chain->length != 0)) {
					$set(entry, chain, $cast($CertificateArray, chain->clone()));
				} else {
					$set(entry, chain, nullptr);
				}
				$init($Locale);
				this->entries->put($($nc(alias)->toLowerCase($Locale::ENGLISH)), entry);
			} else {
				$var($JceKeyStore$SecretKeyEntry, entry, $new($JceKeyStore$SecretKeyEntry));
				$set(entry, date, $new($Date));
				$set(entry, sealedKey, keyProtector->seal(key));
				entry->maxLength = $Integer::MAX_VALUE;
				$init($Locale);
				this->entries->put($($nc(alias)->toLowerCase($Locale::ENGLISH)), entry);
			}
		} catch ($Exception& e) {
			$throwNew($KeyStoreException, $(e->getMessage()), e);
		}
	}
}

void JceKeyStore::engineSetKeyEntry($String* alias, $bytes* key, $CertificateArray* chain) {
	$useLocalObjectStack();
	$synchronized(this->entries) {
		$var($JceKeyStore$PrivateKeyEntry, entry, $new($JceKeyStore$PrivateKeyEntry));
		$set(entry, date, $new($Date));
		$set(entry, protectedKey, $cast($bytes, $nc(key)->clone()));
		if ((chain != nullptr) && (chain->length != 0)) {
			$set(entry, chain, $cast($CertificateArray, chain->clone()));
		} else {
			$set(entry, chain, nullptr);
		}
		$init($Locale);
		this->entries->put($($nc(alias)->toLowerCase($Locale::ENGLISH)), entry);
	}
}

void JceKeyStore::engineSetCertificateEntry($String* alias, $Certificate* cert) {
	$useLocalObjectStack();
	$synchronized(this->entries) {
		$init($Locale);
		$var($Object, entry, this->entries->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
		if (entry != nullptr) {
			if ($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) {
				$throwNew($KeyStoreException, "Cannot overwrite own certificate"_s);
			} else if ($instanceOf($JceKeyStore$SecretKeyEntry, entry)) {
				$throwNew($KeyStoreException, "Cannot overwrite secret key"_s);
			}
		}
		$var($JceKeyStore$TrustedCertEntry, trustedCertEntry, $new($JceKeyStore$TrustedCertEntry));
		$set(trustedCertEntry, cert, cert);
		$set(trustedCertEntry, date, $new($Date));
		this->entries->put($(alias->toLowerCase($Locale::ENGLISH)), trustedCertEntry);
	}
}

void JceKeyStore::engineDeleteEntry($String* alias) {
	$synchronized(this->entries) {
		$init($Locale);
		this->entries->remove($($nc(alias)->toLowerCase($Locale::ENGLISH)));
	}
}

$Enumeration* JceKeyStore::engineAliases() {
	return $nc(this->entries)->keys();
}

bool JceKeyStore::engineContainsAlias($String* alias) {
	$init($Locale);
	return $nc(this->entries)->containsKey($($nc(alias)->toLowerCase($Locale::ENGLISH)));
}

int32_t JceKeyStore::engineSize() {
	return $nc(this->entries)->size();
}

bool JceKeyStore::engineIsKeyEntry($String* alias) {
	$useLocalObjectStack();
	bool isKey = false;
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if (($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) || ($instanceOf($JceKeyStore$SecretKeyEntry, entry))) {
		isKey = true;
	}
	return isKey;
}

bool JceKeyStore::engineIsCertificateEntry($String* alias) {
	$useLocalObjectStack();
	bool isCert = false;
	$init($Locale);
	$var($Object, entry, $nc(this->entries)->get($($nc(alias)->toLowerCase($Locale::ENGLISH))));
	if ($instanceOf($JceKeyStore$TrustedCertEntry, entry)) {
		isCert = true;
	}
	return isCert;
}

$String* JceKeyStore::engineGetCertificateAlias($Certificate* cert) {
	$useLocalObjectStack();
	$var($Certificate, certElem, nullptr);
	$var($Enumeration, e, $nc(this->entries)->keys());
	while ($nc(e)->hasMoreElements()) {
		$var($String, alias, $cast($String, e->nextElement()));
		$var($Object, entry, this->entries->get(alias));
		if ($instanceOf($JceKeyStore$TrustedCertEntry, entry)) {
			$assign(certElem, $cast($JceKeyStore$TrustedCertEntry, entry)->cert);
		} else if (($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) && ($cast($JceKeyStore$PrivateKeyEntry, entry)->chain != nullptr)) {
			$assign(certElem, $cast($JceKeyStore$PrivateKeyEntry, entry)->chain->get(0));
		} else {
			continue;
		}
		if ($nc(certElem)->equals(cert)) {
			return alias;
		}
	}
	return nullptr;
}

void JceKeyStore::engineStore($OutputStream* stream, $chars* password) {
	$useLocalObjectStack();
	$synchronized(this->entries) {
		if (password == nullptr) {
			$throwNew($IllegalArgumentException, "password can\'t be null"_s);
		}
		$var($bytes, encoded, nullptr);
		$var($MessageDigest, md, getPreKeyedHash(password));
		$var($DataOutputStream, dos, $new($DataOutputStream, $$new($DigestOutputStream, stream, md)));
		$var($ObjectOutputStream, oos, nullptr);
		$var($Throwable, var$0, nullptr);
		try {
			dos->writeInt(JceKeyStore::JCEKS_MAGIC);
			dos->writeInt(JceKeyStore::VERSION_2);
			dos->writeInt(this->entries->size());
			$var($Enumeration, e, this->entries->keys());
			while ($nc(e)->hasMoreElements()) {
				$var($String, alias, $cast($String, e->nextElement()));
				$var($Object, entry, this->entries->get(alias));
				if ($instanceOf($JceKeyStore$PrivateKeyEntry, entry)) {
					$var($JceKeyStore$PrivateKeyEntry, pentry, $cast($JceKeyStore$PrivateKeyEntry, entry));
					dos->writeInt(1);
					dos->writeUTF(alias);
					dos->writeLong($nc(pentry->date)->getTime());
					dos->writeInt($nc(pentry->protectedKey)->length);
					dos->write(pentry->protectedKey);
					int32_t chainLen = 0;
					if (pentry->chain == nullptr) {
						chainLen = 0;
					} else {
						chainLen = pentry->chain->length;
					}
					dos->writeInt(chainLen);
					for (int32_t i = 0; i < chainLen; ++i) {
						$assign(encoded, $nc($nc(pentry->chain)->get(i))->getEncoded());
						dos->writeUTF($($nc(pentry->chain->get(i))->getType()));
						dos->writeInt($nc(encoded)->length);
						dos->write(encoded);
					}
				} else if ($instanceOf($JceKeyStore$TrustedCertEntry, entry)) {
					dos->writeInt(2);
					dos->writeUTF(alias);
					dos->writeLong($nc($cast($JceKeyStore$TrustedCertEntry, entry)->date)->getTime());
					$assign(encoded, $nc($cast($JceKeyStore$TrustedCertEntry, entry)->cert)->getEncoded());
					dos->writeUTF($($cast($JceKeyStore$TrustedCertEntry, entry)->cert->getType()));
					dos->writeInt($nc(encoded)->length);
					dos->write(encoded);
				} else {
					dos->writeInt(3);
					dos->writeUTF(alias);
					dos->writeLong($nc($nc($cast($JceKeyStore$SecretKeyEntry, entry))->date)->getTime());
					$assign(oos, $new($ObjectOutputStream, dos));
					oos->writeObject($cast($JceKeyStore$SecretKeyEntry, entry)->sealedKey);
				}
			}
			$var($bytes, digest, $nc(md)->digest());
			dos->write(digest);
			dos->flush();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (oos != nullptr) {
				oos->close();
			} else {
				dos->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JceKeyStore::engineLoad($InputStream* stream$renamed, $chars* password) {
	$useLocalObjectStack();
	$var($InputStream, stream, stream$renamed);
	$beforeCallerSensitive();
	$synchronized(this->entries) {
		$var($DataInputStream, dis, nullptr);
		$var($MessageDigest, md, nullptr);
		$var($CertificateFactory, cf, nullptr);
		$var($Hashtable, cfs, nullptr);
		$var($ByteArrayInputStream, bais, nullptr);
		$var($bytes, encoded, nullptr);
		int32_t trustedKeyCount = 0;
		int32_t privateKeyCount = 0;
		int32_t secretKeyCount = 0;
		if (stream == nullptr) {
			return;
		}
		$var($bytes, allData, $nc(stream)->readAllBytes());
		int32_t fullLength = $nc(allData)->length;
		$assign(stream, $new($ByteArrayInputStream, allData));
		if (password != nullptr) {
			$assign(md, getPreKeyedHash(password));
			$assign(dis, $new($DataInputStream, $$new($DigestInputStream, stream, md)));
		} else {
			$assign(dis, $new($DataInputStream, stream));
		}
		$var($ObjectInputStream, ois, nullptr);
		$var($Throwable, var$0, nullptr);
		try {
			int32_t xMagic = $nc(dis)->readInt();
			int32_t xVersion = dis->readInt();
			if (((xMagic != JceKeyStore::JCEKS_MAGIC) && (xMagic != JceKeyStore::JKS_MAGIC)) || ((xVersion != JceKeyStore::VERSION_1) && (xVersion != JceKeyStore::VERSION_2))) {
				$throwNew($IOException, "Invalid keystore format"_s);
			}
			if (xVersion == JceKeyStore::VERSION_1) {
				$assign(cf, $CertificateFactory::getInstance("X509"_s));
			} else {
				$assign(cfs, $new($Hashtable, 3));
			}
			this->entries->clear();
			int32_t count = dis->readInt();
			for (int32_t i = 0; i < count; ++i) {
				int32_t tag = 0;
				$var($String, alias, nullptr);
				tag = dis->readInt();
				if (tag == 1) {
					++privateKeyCount;
					$var($JceKeyStore$PrivateKeyEntry, entry, $new($JceKeyStore$PrivateKeyEntry));
					$assign(alias, dis->readUTF());
					$set(entry, date, $new($Date, dis->readLong()));
					$set(entry, protectedKey, $IOUtils::readExactlyNBytes(dis, dis->readInt()));
					int32_t numOfCerts = dis->readInt();
					$var($List, tmpCerts, $new($ArrayList));
					for (int32_t j = 0; j < numOfCerts; ++j) {
						if (xVersion == 2) {
							$var($String, certType, dis->readUTF());
							if ($nc(cfs)->containsKey(certType)) {
								$assign(cf, $cast($CertificateFactory, cfs->get(certType)));
							} else {
								$assign(cf, $CertificateFactory::getInstance(certType));
								cfs->put(certType, cf);
							}
						}
						$assign(encoded, $IOUtils::readExactlyNBytes(dis, dis->readInt()));
						$assign(bais, $new($ByteArrayInputStream, encoded));
						tmpCerts->add($($nc(cf)->generateCertificate(bais)));
					}
					$set(entry, chain, $cast($CertificateArray, tmpCerts->toArray($$new($CertificateArray, numOfCerts))));
					this->entries->put(alias, entry);
				} else if (tag == 2) {
					++trustedKeyCount;
					$var($JceKeyStore$TrustedCertEntry, entry, $new($JceKeyStore$TrustedCertEntry));
					$assign(alias, dis->readUTF());
					$set(entry, date, $new($Date, dis->readLong()));
					if (xVersion == 2) {
						$var($String, certType, dis->readUTF());
						if ($nc(cfs)->containsKey(certType)) {
							$assign(cf, $cast($CertificateFactory, cfs->get(certType)));
						} else {
							$assign(cf, $CertificateFactory::getInstance(certType));
							cfs->put(certType, cf);
						}
					}
					$assign(encoded, $IOUtils::readExactlyNBytes(dis, dis->readInt()));
					$assign(bais, $new($ByteArrayInputStream, encoded));
					$set(entry, cert, $nc(cf)->generateCertificate(bais));
					this->entries->put(alias, entry);
				} else if (tag == 3) {
					++secretKeyCount;
					$var($JceKeyStore$SecretKeyEntry, entry, $new($JceKeyStore$SecretKeyEntry));
					$assign(alias, dis->readUTF());
					$set(entry, date, $new($Date, dis->readLong()));
					try {
						$assign(ois, $new($ObjectInputStream, dis));
						$var($ObjectInputStream, ois2, ois);
						$var($Void, dummy, $cast($Void, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JceKeyStore$$Lambda$lambda$engineLoad$0, ois2, fullLength)))));
						$set(entry, sealedKey, $cast($SealedObject, ois->readObject()));
						entry->maxLength = fullLength;
					} catch ($ClassNotFoundException& cnfe) {
						$throwNew($IOException, $(cnfe->getMessage()));
					} catch ($InvalidClassException& ice) {
						$throwNew($IOException, "Invalid secret key format"_s);
					}
					this->entries->put(alias, entry);
				} else {
					$throwNew($IOException, $$str({"Unrecognized keystore entry: "_s, $$str(tag)}));
				}
			}
			if (JceKeyStore::debug != nullptr) {
				JceKeyStore::debug->println($$str({"JceKeyStore load: private key count: "_s, $$str(privateKeyCount), ". trusted key count: "_s, $$str(trustedKeyCount), ". secret key count: "_s, $$str(secretKeyCount)}));
			}
			if (password != nullptr) {
				$var($bytes, computed, $nc(md)->digest());
				$var($bytes, actual, $IOUtils::readExactlyNBytes(dis, $nc(computed)->length));
				if (!$MessageDigest::isEqual(computed, actual)) {
					$throwNew($IOException, "Keystore was tampered with, or password was incorrect"_s, $$new($UnrecoverableKeyException, "Password verification failed"_s));
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (ois != nullptr) {
				ois->close();
			} else {
				$nc(dis)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$MessageDigest* JceKeyStore::getPreKeyedHash($chars* password) {
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t j = 0;
	$var($MessageDigest, md, $MessageDigest::getInstance("SHA"_s));
	$var($bytes, passwdBytes, $new($bytes, $nc(password)->length * 2));
	for (i = 0, j = 0; i < password->length; ++i) {
		passwdBytes->set(j++, (int8_t)(password->get(i) >> 8));
		passwdBytes->set(j++, (int8_t)password->get(i));
	}
	$nc(md)->update(passwdBytes);
	for (i = 0; i < passwdBytes->length; ++i) {
		passwdBytes->set(i, 0);
	}
	$init($StandardCharsets);
	md->update($("Mighty Aphrodite"_s->getBytes($StandardCharsets::UTF_8)));
	return md;
}

bool JceKeyStore::engineProbe($InputStream* stream) {
	$var($DataInputStream, dataStream, nullptr);
	if ($instanceOf($DataInputStream, stream)) {
		$assign(dataStream, $cast($DataInputStream, stream));
	} else {
		$assign(dataStream, $new($DataInputStream, stream));
	}
	return JceKeyStore::JCEKS_MAGIC == $nc(dataStream)->readInt();
}

$Void* JceKeyStore::lambda$engineLoad$0($ObjectInputStream* ois2, int32_t fullLength) {
	$init(JceKeyStore);
	$nc(ois2)->setObjectInputFilter($$new($JceKeyStore$DeserializationChecker, fullLength));
	return nullptr;
}

void JceKeyStore::clinit$($Class* clazz) {
	$assignStatic(JceKeyStore::debug, $Debug::getInstance("keystore"_s));
}

JceKeyStore::JceKeyStore() {
}

$Class* JceKeyStore::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.crypto.provider.JceKeyStore$$Lambda$lambda$engineLoad$0")) {
			return JceKeyStore$$Lambda$lambda$engineLoad$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceKeyStore, debug)},
		{"JCEKS_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JceKeyStore, JCEKS_MAGIC)},
		{"JKS_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JceKeyStore, JKS_MAGIC)},
		{"VERSION_1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JceKeyStore, VERSION_1)},
		{"VERSION_2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JceKeyStore, VERSION_2)},
		{"entries", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(JceKeyStore, entries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JceKeyStore, init$, void)},
		{"engineAliases", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(JceKeyStore, engineAliases, $Enumeration*)},
		{"engineContainsAlias", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineContainsAlias, bool, $String*)},
		{"engineDeleteEntry", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineDeleteEntry, void, $String*), "java.security.KeyStoreException"},
		{"engineGetCertificate", "(Ljava/lang/String;)Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineGetCertificate, $Certificate*, $String*)},
		{"engineGetCertificateAlias", "(Ljava/security/cert/Certificate;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineGetCertificateAlias, $String*, $Certificate*)},
		{"engineGetCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineGetCertificateChain, $CertificateArray*, $String*)},
		{"engineGetCreationDate", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineGetCreationDate, $Date*, $String*)},
		{"engineGetKey", "(Ljava/lang/String;[C)Ljava/security/Key;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineGetKey, $Key*, $String*, $chars*), "java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
		{"engineIsCertificateEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineIsCertificateEntry, bool, $String*)},
		{"engineIsKeyEntry", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineIsKeyEntry, bool, $String*)},
		{"engineLoad", "(Ljava/io/InputStream;[C)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineLoad, void, $InputStream*, $chars*), "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
		{"engineProbe", "(Ljava/io/InputStream;)Z", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineProbe, bool, $InputStream*), "java.io.IOException"},
		{"engineSetCertificateEntry", "(Ljava/lang/String;Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineSetCertificateEntry, void, $String*, $Certificate*), "java.security.KeyStoreException"},
		{"engineSetKeyEntry", "(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineSetKeyEntry, void, $String*, $Key*, $chars*, $CertificateArray*), "java.security.KeyStoreException"},
		{"engineSetKeyEntry", "(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineSetKeyEntry, void, $String*, $bytes*, $CertificateArray*), "java.security.KeyStoreException"},
		{"engineSize", "()I", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineSize, int32_t)},
		{"engineStore", "(Ljava/io/OutputStream;[C)V", nullptr, $PUBLIC, $virtualMethod(JceKeyStore, engineStore, void, $OutputStream*, $chars*), "java.io.IOException,java.security.NoSuchAlgorithmException,java.security.cert.CertificateException"},
		{"getPreKeyedHash", "([C)Ljava/security/MessageDigest;", nullptr, $PRIVATE, $method(JceKeyStore, getPreKeyedHash, $MessageDigest*, $chars*), "java.security.NoSuchAlgorithmException"},
		{"lambda$engineLoad$0", "(Ljava/io/ObjectInputStream;I)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JceKeyStore, lambda$engineLoad$0, $Void*, $ObjectInputStream*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.JceKeyStore$DeserializationChecker", "com.sun.crypto.provider.JceKeyStore", "DeserializationChecker", $PRIVATE | $STATIC},
		{"com.sun.crypto.provider.JceKeyStore$TrustedCertEntry", "com.sun.crypto.provider.JceKeyStore", "TrustedCertEntry", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.crypto.provider.JceKeyStore$SecretKeyEntry", "com.sun.crypto.provider.JceKeyStore", "SecretKeyEntry", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.crypto.provider.JceKeyStore$PrivateKeyEntry", "com.sun.crypto.provider.JceKeyStore", "PrivateKeyEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.JceKeyStore",
		"java.security.KeyStoreSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.JceKeyStore$DeserializationChecker,com.sun.crypto.provider.JceKeyStore$TrustedCertEntry,com.sun.crypto.provider.JceKeyStore$SecretKeyEntry,com.sun.crypto.provider.JceKeyStore$PrivateKeyEntry"
	};
	$loadClass(JceKeyStore, name, initialize, &classInfo$$, JceKeyStore::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JceKeyStore);
	});
	return class$;
}

$Class* JceKeyStore::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com