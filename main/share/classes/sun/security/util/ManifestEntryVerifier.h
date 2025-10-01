#ifndef _sun_security_util_ManifestEntryVerifier_h_
#define _sun_security_util_ManifestEntryVerifier_h_
//$ class sun.security.util.ManifestEntryVerifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class CodeSigner;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
		class Hashtable;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class Manifest;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class JarConstraintsParameters;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ManifestEntryVerifier : public ::java::lang::Object {
	$class(ManifestEntryVerifier, 0, ::java::lang::Object)
public:
	ManifestEntryVerifier();
	void init$(::java::util::jar::Manifest* man);
	virtual ::java::util::jar::JarEntry* getEntry();
	::sun::security::util::JarConstraintsParameters* getParams(::java::util::Map* verifiedSigners, ::java::util::Map* sigFileSigners);
	virtual void setEntry($String* name, ::java::util::jar::JarEntry* entry);
	virtual void update(int8_t buffer);
	virtual void update($bytes* buffer, int32_t off, int32_t len);
	virtual $Array<::java::security::CodeSigner>* verify(::java::util::Hashtable* verifiedSigners, ::java::util::Hashtable* sigFileSigners);
	static ::sun::security::util::Debug* debug;
	::java::util::HashMap* createdDigests = nullptr;
	::java::util::ArrayList* digests = nullptr;
	::java::util::ArrayList* manifestHashes = nullptr;
	$String* name = nullptr;
	::java::util::jar::Manifest* man = nullptr;
	bool skip = false;
	::java::util::jar::JarEntry* entry = nullptr;
	$Array<::java::security::CodeSigner>* signers = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ManifestEntryVerifier_h_