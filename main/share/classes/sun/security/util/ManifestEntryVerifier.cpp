#include <sun/security/util/ManifestEntryVerifier.h>

#include <java/lang/SecurityException.h>
#include <java/security/CodeSigner.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/util/ArrayList.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/HexFormat.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <sun/security/util/JarConstraintsParameters.h>
#include <sun/security/util/ManifestEntryVerifier$SunProviderHolder.h>
#include <jcpp.h>

#undef ENGLISH
#undef MANIFEST_NAME

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ArrayList = ::java::util::ArrayList;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $HexFormat = ::java::util::HexFormat;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $Debug = ::sun::security::util::Debug;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $JarConstraintsParameters = ::sun::security::util::JarConstraintsParameters;
using $ManifestEntryVerifier$SunProviderHolder = ::sun::security::util::ManifestEntryVerifier$SunProviderHolder;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ManifestEntryVerifier_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManifestEntryVerifier, debug)},
	{"createdDigests", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/security/MessageDigest;>;", 0, $field(ManifestEntryVerifier, createdDigests)},
	{"digests", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/security/MessageDigest;>;", 0, $field(ManifestEntryVerifier, digests)},
	{"manifestHashes", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[B>;", 0, $field(ManifestEntryVerifier, manifestHashes)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ManifestEntryVerifier, name)},
	{"man", "Ljava/util/jar/Manifest;", nullptr, $PRIVATE, $field(ManifestEntryVerifier, man)},
	{"skip", "Z", nullptr, $PRIVATE, $field(ManifestEntryVerifier, skip)},
	{"entry", "Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $field(ManifestEntryVerifier, entry)},
	{"signers", "[Ljava/security/CodeSigner;", nullptr, $PRIVATE, $field(ManifestEntryVerifier, signers)},
	{}
};

$MethodInfo _ManifestEntryVerifier_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/Manifest;)V", nullptr, $PUBLIC, $method(static_cast<void(ManifestEntryVerifier::*)($Manifest*)>(&ManifestEntryVerifier::init$))},
	{"getEntry", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC},
	{"getParams", "(Ljava/util/Map;Ljava/util/Map;)Lsun/security/util/JarConstraintsParameters;", "(Ljava/util/Map<Ljava/lang/String;[Ljava/security/CodeSigner;>;Ljava/util/Map<Ljava/lang/String;[Ljava/security/CodeSigner;>;)Lsun/security/util/JarConstraintsParameters;", $PRIVATE, $method(static_cast<$JarConstraintsParameters*(ManifestEntryVerifier::*)($Map*,$Map*)>(&ManifestEntryVerifier::getParams))},
	{"setEntry", "(Ljava/lang/String;Ljava/util/jar/JarEntry;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"update", "(B)V", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{"verify", "(Ljava/util/Hashtable;Ljava/util/Hashtable;)[Ljava/security/CodeSigner;", "(Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;)[Ljava/security/CodeSigner;", $PUBLIC, nullptr, "java.util.jar.JarException"},
	{}
};

$InnerClassInfo _ManifestEntryVerifier_InnerClassesInfo_[] = {
	{"sun.security.util.ManifestEntryVerifier$SunProviderHolder", "sun.security.util.ManifestEntryVerifier", "SunProviderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ManifestEntryVerifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ManifestEntryVerifier",
	"java.lang.Object",
	nullptr,
	_ManifestEntryVerifier_FieldInfo_,
	_ManifestEntryVerifier_MethodInfo_,
	nullptr,
	nullptr,
	_ManifestEntryVerifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.ManifestEntryVerifier$SunProviderHolder"
};

$Object* allocate$ManifestEntryVerifier($Class* clazz) {
	return $of($alloc(ManifestEntryVerifier));
}

$Debug* ManifestEntryVerifier::debug = nullptr;

void ManifestEntryVerifier::init$($Manifest* man) {
	$set(this, name, nullptr);
	this->skip = true;
	$set(this, signers, nullptr);
	$set(this, createdDigests, $new($HashMap, 11));
	$set(this, digests, $new($ArrayList));
	$set(this, manifestHashes, $new($ArrayList));
	$set(this, man, man);
}

void ManifestEntryVerifier::setEntry($String* name, $JarEntry* entry) {
	$useLocalCurrentObjectStackCache();
	$nc(this->digests)->clear();
	$nc(this->manifestHashes)->clear();
	$set(this, name, name);
	$set(this, entry, entry);
	this->skip = true;
	$set(this, signers, nullptr);
	if (this->man == nullptr || name == nullptr) {
		return;
	}
	this->skip = false;
	$var($Attributes, attr, $nc(this->man)->getAttributes(name));
	if (attr == nullptr) {
		$assign(attr, $nc(this->man)->getAttributes($$str({"./"_s, name})));
		if (attr == nullptr) {
			$assign(attr, $nc(this->man)->getAttributes($$str({"/"_s, name})));
			if (attr == nullptr) {
				return;
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(attr)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, se, $cast($Map$Entry, i$->next()));
			{
				$var($String, key, $nc($of($($nc(se)->getKey())))->toString());
				$init($Locale);
				if ($($nc(key)->toUpperCase($Locale::ENGLISH))->endsWith("-DIGEST"_s)) {
					$var($String, algorithm, key->substring(0, key->length() - 7));
					$var($MessageDigest, digest, $cast($MessageDigest, $nc(this->createdDigests)->get(algorithm)));
					if (digest == nullptr) {
						try {
							$init($ManifestEntryVerifier$SunProviderHolder);
							$assign(digest, $MessageDigest::getInstance(algorithm, $ManifestEntryVerifier$SunProviderHolder::instance));
							$nc(this->createdDigests)->put(algorithm, digest);
						} catch ($NoSuchAlgorithmException& nsae) {
						}
					}
					if (digest != nullptr) {
						digest->reset();
						$nc(this->digests)->add(digest);
						$nc(this->manifestHashes)->add($($nc($($Base64::getMimeDecoder()))->decode($cast($String, $(se->getValue())))));
					}
				}
			}
		}
	}
}

void ManifestEntryVerifier::update(int8_t buffer) {
	$useLocalCurrentObjectStackCache();
	if (this->skip) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->digests)->size(); ++i) {
		$nc(($cast($MessageDigest, $($nc(this->digests)->get(i)))))->update(buffer);
	}
}

void ManifestEntryVerifier::update($bytes* buffer, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->skip) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->digests)->size(); ++i) {
		$nc(($cast($MessageDigest, $($nc(this->digests)->get(i)))))->update(buffer, off, len);
	}
}

$JarEntry* ManifestEntryVerifier::getEntry() {
	return this->entry;
}

$CodeSignerArray* ManifestEntryVerifier::verify($Hashtable* verifiedSigners, $Hashtable* sigFileSigners) {
	$useLocalCurrentObjectStackCache();
	if (this->skip) {
		return nullptr;
	}
	if ($nc(this->digests)->isEmpty()) {
		$throwNew($SecurityException, $$str({"digest missing for "_s, this->name}));
	}
	if (this->signers != nullptr) {
		return this->signers;
	}
	$var($JarConstraintsParameters, params, getParams(verifiedSigners, sigFileSigners));
	for (int32_t i = 0; i < $nc(this->digests)->size(); ++i) {
		$var($MessageDigest, digest, $cast($MessageDigest, $nc(this->digests)->get(i)));
		if (params != nullptr) {
			try {
				$init($JarFile);
				params->setExtendedExceptionMsg($JarFile::MANIFEST_NAME, $$str({this->name, " entry"_s}));
				$nc($($DisabledAlgorithmConstraints::jarConstraints()))->permits($($nc(digest)->getAlgorithm()), static_cast<$ConstraintsParameters*>(params));
			} catch ($GeneralSecurityException& e) {
				if (ManifestEntryVerifier::debug != nullptr) {
					$nc(ManifestEntryVerifier::debug)->println($$str({"Digest algorithm is restricted: "_s, e}));
				}
				return nullptr;
			}
		}
		$var($bytes, manHash, $cast($bytes, $nc(this->manifestHashes)->get(i)));
		$var($bytes, theHash, $nc(digest)->digest());
		if (ManifestEntryVerifier::debug != nullptr) {
			$nc(ManifestEntryVerifier::debug)->println($$str({"Manifest Entry: "_s, this->name, " digest="_s, $(digest->getAlgorithm())}));
			$nc(ManifestEntryVerifier::debug)->println($$str({"  manifest "_s, $($nc($($HexFormat::of()))->formatHex(manHash))}));
			$nc(ManifestEntryVerifier::debug)->println($$str({"  computed "_s, $($nc($($HexFormat::of()))->formatHex(theHash))}));
			$nc(ManifestEntryVerifier::debug)->println();
		}
		if (!$MessageDigest::isEqual(theHash, manHash)) {
			$throwNew($SecurityException, $$str({$(digest->getAlgorithm()), " digest error for "_s, this->name}));
		}
	}
	$set(this, signers, $cast($CodeSignerArray, $nc(sigFileSigners)->remove(this->name)));
	if (this->signers != nullptr) {
		$nc(verifiedSigners)->put(this->name, this->signers);
	}
	return this->signers;
}

$JarConstraintsParameters* ManifestEntryVerifier::getParams($Map* verifiedSigners, $Map* sigFileSigners) {
	$useLocalCurrentObjectStackCache();
	$init($JarFile);
	if ($nc(verifiedSigners)->containsKey($JarFile::MANIFEST_NAME)) {
		if (verifiedSigners->size() > 1) {
			return nullptr;
		} else {
			return $new($JarConstraintsParameters, $cast($CodeSignerArray, $(verifiedSigners->get($JarFile::MANIFEST_NAME))));
		}
	} else {
		$var($CodeSignerArray, signers, $cast($CodeSignerArray, $nc(sigFileSigners)->get(this->name)));
		if (verifiedSigners->containsValue(signers)) {
			return nullptr;
		} else {
			return $new($JarConstraintsParameters, signers);
		}
	}
}

void clinit$ManifestEntryVerifier($Class* class$) {
	$assignStatic(ManifestEntryVerifier::debug, $Debug::getInstance("jar"_s));
}

ManifestEntryVerifier::ManifestEntryVerifier() {
}

$Class* ManifestEntryVerifier::load$($String* name, bool initialize) {
	$loadClass(ManifestEntryVerifier, name, initialize, &_ManifestEntryVerifier_ClassInfo_, clinit$ManifestEntryVerifier, allocate$ManifestEntryVerifier);
	return class$;
}

$Class* ManifestEntryVerifier::class$ = nullptr;

		} // util
	} // security
} // sun