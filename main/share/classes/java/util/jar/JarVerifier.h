#ifndef _java_util_jar_JarVerifier_h_
#define _java_util_jar_JarVerifier_h_
//$ class java.util.jar.JarVerifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class CodeSigner;
		class CodeSource;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Enumeration;
		class Hashtable;
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarFile;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class ManifestDigester;
			class ManifestEntryVerifier;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarVerifier : public ::java::lang::Object {
	$class(JarVerifier, 0, ::java::lang::Object)
public:
	JarVerifier();
	void init$($String* name, $bytes* rawBytes);
	virtual void beginEntry(::java::util::jar::JarEntry* je, ::sun::security::util::ManifestEntryVerifier* mev);
	virtual void doneWithMeta();
	virtual ::java::util::Enumeration* entries2(::java::util::jar::JarFile* jar, ::java::util::Enumeration* e);
	virtual ::java::util::Enumeration* entryNames(::java::util::jar::JarFile* jar, $Array<::java::security::CodeSource>* cs);
	$Array<::java::security::CodeSigner>* findMatchingSigners(::java::security::CodeSource* cs);
	virtual $Array<::java::security::cert::Certificate>* getCerts($String* name);
	virtual $Array<::java::security::cert::Certificate>* getCerts(::java::util::jar::JarFile* jar, ::java::util::jar::JarEntry* entry);
	virtual $Array<::java::security::CodeSigner>* getCodeSigners($String* name);
	virtual $Array<::java::security::CodeSigner>* getCodeSigners(::java::util::jar::JarFile* jar, ::java::util::jar::JarEntry* entry);
	virtual ::java::security::CodeSource* getCodeSource(::java::net::URL* url, $String* name);
	virtual ::java::security::CodeSource* getCodeSource(::java::net::URL* url, ::java::util::jar::JarFile* jar, ::java::util::jar::JarEntry* je);
	virtual $Array<::java::security::CodeSource>* getCodeSources(::java::util::jar::JarFile* jar, ::java::net::URL* url);
	::java::util::List* getJarCodeSigners();
	virtual ::java::util::List* getManifestDigests();
	static ::java::security::CodeSource* getUnsignedCS(::java::net::URL* url);
	static bool isSigningRelated($String* name);
	virtual bool isTrustedManifestEntry($String* name);
	static $Array<::java::security::cert::Certificate>* mapSignersToCertArray($Array<::java::security::CodeSigner>* signers);
	::java::security::CodeSource* mapSignersToCodeSource(::java::net::URL* url, $Array<::java::security::CodeSigner>* signers);
	$Array<::java::security::CodeSource>* mapSignersToCodeSources(::java::net::URL* url, ::java::util::List* signers, bool unsigned$);
	virtual bool nothingToVerify();
	void processEntry(::sun::security::util::ManifestEntryVerifier* mev);
	virtual void setEagerValidation(bool eager);
	::java::util::Map* signerMap();
	::java::util::Enumeration* unsignedEntryNames(::java::util::jar::JarFile* jar);
	virtual void update(int32_t b, ::sun::security::util::ManifestEntryVerifier* mev);
	virtual void update(int32_t n, $bytes* b, int32_t off, int32_t len, ::sun::security::util::ManifestEntryVerifier* mev);
	static ::sun::security::util::Debug* debug;
	::java::util::Hashtable* verifiedSigners = nullptr;
	::java::util::Hashtable* sigFileSigners = nullptr;
	::java::util::Hashtable* sigFileData = nullptr;
	::java::util::ArrayList* pendingBlocks = nullptr;
	::java::util::ArrayList* signerCache = nullptr;
	bool parsingBlockOrSF = false;
	bool parsingMeta = false;
	bool anyToVerify = false;
	::java::io::ByteArrayOutputStream* baos = nullptr;
	$volatile(::sun::security::util::ManifestDigester*) manDig = nullptr;
	$bytes* manifestRawBytes = nullptr;
	$String* manifestName = nullptr;
	bool eagerValidation = false;
	$Object* csdomain = nullptr;
	::java::util::List* manifestDigests = nullptr;
	::java::util::Map* urlToCodeSourceMap = nullptr;
	::java::util::Map* signerToCodeSource = nullptr;
	::java::net::URL* lastURL = nullptr;
	::java::util::Map* lastURLMap = nullptr;
	$Array<::java::security::CodeSigner>* emptySigner = nullptr;
	::java::util::Map* signerMap$ = nullptr;
	::java::util::List* jarCodeSigners = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier_h_