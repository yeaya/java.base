#ifndef _sun_security_util_SignatureFileVerifier_h_
#define _sun_security_util_SignatureFileVerifier_h_
//$ class sun.security.util.SignatureFileVerifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ATTR_DIGEST")
#undef ATTR_DIGEST

namespace java {
	namespace security {
		class CodeSigner;
		class MessageDigest;
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertificateFactory;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
		class Hashtable;
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
			class Manifest;
		}
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class PKCS7;
			class SignerInfo;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class JarConstraintsParameters;
			class ManifestDigester;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import SignatureFileVerifier : public ::java::lang::Object {
	$class(SignatureFileVerifier, 0, ::java::lang::Object)
public:
	SignatureFileVerifier();
	void init$(::java::util::ArrayList* signerCache, ::sun::security::util::ManifestDigester* md, $String* name, $bytes* rawBytes);
	static bool contains($Array<::java::security::CodeSigner>* set, ::java::security::CodeSigner* signer);
	static $String* getBlockExtension(::java::security::PrivateKey* key);
	::java::security::MessageDigest* getDigest($String* algorithm);
	$Array<::java::security::CodeSigner>* getSigners($Array<::sun::security::pkcs::SignerInfo>* infos, ::sun::security::pkcs::PKCS7* block);
	virtual $String* getWeakAlgorithms($String* header);
	static bool isBlockOrSF($String* s);
	static bool isSigningRelated($String* name);
	static bool isSubSet($Array<::java::security::CodeSigner>* subset, $Array<::java::security::CodeSigner>* set);
	static bool matches($Array<::java::security::CodeSigner>* signers, $Array<::java::security::CodeSigner>* oldSigners, $Array<::java::security::CodeSigner>* newSigners);
	virtual bool needSignatureFile($String* name);
	virtual bool needSignatureFileBytes();
	bool permittedCheck($String* key, $String* algorithm);
	virtual void process(::java::util::Hashtable* signers, ::java::util::List* manifestDigests, $String* manifestName);
	void processImpl(::java::util::Hashtable* signers, ::java::util::List* manifestDigests, $String* manifestName);
	virtual void setSignatureFile($bytes* sfBytes);
	virtual void updateSigners($Array<::java::security::CodeSigner>* newSigners, ::java::util::Hashtable* signers, $String* name);
	bool verifyManifestHash(::java::util::jar::Manifest* sf, ::sun::security::util::ManifestDigester* md, ::java::util::List* manifestDigests);
	bool verifyManifestMainAttrs(::java::util::jar::Manifest* sf, ::sun::security::util::ManifestDigester* md);
	bool verifySection(::java::util::jar::Attributes* sfAttr, $String* name, ::sun::security::util::ManifestDigester* md);
	static ::sun::security::util::Debug* debug;
	::java::util::ArrayList* signerCache = nullptr;
	static $String* ATTR_DIGEST;
	::sun::security::pkcs::PKCS7* block = nullptr;
	$bytes* sfBytes = nullptr;
	$String* name = nullptr;
	::sun::security::util::ManifestDigester* md = nullptr;
	::java::util::HashMap* createdDigests = nullptr;
	bool workaround = false;
	::java::security::cert::CertificateFactory* certificateFactory = nullptr;
	::java::util::Map* permittedAlgs = nullptr;
	::sun::security::util::JarConstraintsParameters* params = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("ATTR_DIGEST")

#endif // _sun_security_util_SignatureFileVerifier_h_