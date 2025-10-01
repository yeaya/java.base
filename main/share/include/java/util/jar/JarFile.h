#ifndef _java_util_jar_JarFile_h_
#define _java_util_jar_JarFile_h_
//$ class java.util.jar.JarFile
//$ extends java.util.zip.ZipFile

#include <java/lang/Array.h>
#include <java/lang/Integer.h>
#include <java/util/zip/ZipFile.h>

#pragma push_macro("CLASSPATH_LASTOCC")
#undef CLASSPATH_LASTOCC
#pragma push_macro("MULTI_RELEASE_FORCED")
#undef MULTI_RELEASE_FORCED
#pragma push_macro("RUNTIME_VERSION")
#undef RUNTIME_VERSION
#pragma push_macro("BASE_VERSION")
#undef BASE_VERSION
#pragma push_macro("MULTIRELEASE_OPTOSFT")
#undef MULTIRELEASE_OPTOSFT
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("CLASSPATH_OPTOSFT")
#undef CLASSPATH_OPTOSFT
#pragma push_macro("META_INF_VERSIONS")
#undef META_INF_VERSIONS
#pragma push_macro("JUZFA")
#undef JUZFA
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MULTIRELEASE_LASTOCC")
#undef MULTIRELEASE_LASTOCC
#pragma push_macro("MULTI_RELEASE_ENABLED")
#undef MULTI_RELEASE_ENABLED
#pragma push_macro("CLASSPATH_CHARS")
#undef CLASSPATH_CHARS
#pragma push_macro("MULTIRELEASE_CHARS")
#undef MULTIRELEASE_CHARS
#pragma push_macro("META_INF")
#undef META_INF
#pragma push_macro("BASE_VERSION_FEATURE")
#undef BASE_VERSION_FEATURE
#pragma push_macro("MANIFEST_NAME")
#undef MANIFEST_NAME

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Runtime$Version;
		class ThreadLocal;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class CodeSource;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarVerifier;
			class Manifest;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilZipFileAccess;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $import JarFile : public ::java::util::zip::ZipFile {
	$class(JarFile, 0, ::java::util::zip::ZipFile)
public:
	JarFile();
	void init$($String* name);
	void init$($String* name, bool verify);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, bool verify);
	void init$(::java::io::File* file, bool verify, int32_t mode);
	void init$(::java::io::File* file, bool verify, int32_t mode, ::java::lang::Runtime$Version* version);
	static ::java::lang::Runtime$Version* baseVersion();
	void checkForSpecialAttributes();
	virtual void ensureInitialization();
	virtual ::java::util::Enumeration* entries() override;
	virtual ::java::util::Enumeration* entries2();
	virtual ::java::util::jar::JarEntry* entryFor($String* name);
	virtual ::java::util::Enumeration* entryNames($Array<::java::security::CodeSource>* cs);
	$String* getBasename($String* name);
	$bytes* getBytes(::java::util::zip::ZipEntry* ze);
	virtual ::java::security::CodeSource* getCodeSource(::java::net::URL* url, $String* name);
	virtual $Array<::java::security::CodeSource>* getCodeSources(::java::net::URL* url);
	virtual ::java::util::zip::ZipEntry* getEntry($String* name) override;
	virtual ::java::io::InputStream* getInputStream(::java::util::zip::ZipEntry* ze) override;
	virtual ::java::util::jar::JarEntry* getJarEntry($String* name);
	::java::util::jar::JarEntry* getManEntry();
	virtual ::java::util::jar::Manifest* getManifest();
	virtual ::java::util::List* getManifestDigests();
	::java::util::jar::Manifest* getManifestFromReference();
	virtual $String* getRealName(::java::util::jar::JarEntry* entry);
	::java::lang::Runtime$Version* getVersion();
	::java::util::jar::JarEntry* getVersionedEntry($String* name, ::java::util::jar::JarEntry* defaultEntry);
	virtual bool hasClassPathAttribute();
	void initializeVerifier();
	static bool isInitializing();
	bool isMultiRelease();
	int32_t match($bytes* src, $bytes* b, $bytes* lastOcc, $bytes* optoSft);
	void maybeInstantiateVerifier();
	virtual ::java::util::jar::JarEntry* newEntry(::java::util::jar::JarEntry* je);
	virtual ::java::util::jar::JarEntry* newEntry($String* name);
	static ::java::lang::Runtime$Version* runtimeVersion();
	virtual void setEagerValidation(bool eager);
	virtual ::java::util::stream::Stream* stream() override;
	::java::util::Enumeration* unsignedEntryNames();
	::java::util::jar::JarEntry* verifiableEntry(::java::util::zip::ZipEntry* ze);
	virtual ::java::util::stream::Stream* versionedStream();
	static ::java::lang::Runtime$Version* BASE_VERSION;
	static int32_t BASE_VERSION_FEATURE;
	static ::java::lang::Runtime$Version* RUNTIME_VERSION;
	static bool MULTI_RELEASE_ENABLED;
	static bool MULTI_RELEASE_FORCED;
	static ::java::lang::ThreadLocal* isInitializing$;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // ::java::lang::Integer::MAX_VALUE - 8
	::java::lang::ref::SoftReference* manRef = nullptr;
	::java::util::jar::JarEntry* manEntry = nullptr;
	::java::util::jar::JarVerifier* jv = nullptr;
	bool jvInitialized = false;
	bool verify = false;
	::java::lang::Runtime$Version* version = nullptr;
	int32_t versionFeature = 0;
	bool isMultiRelease$ = false;
	bool hasClassPathAttribute$ = false;
	$volatile(bool) hasCheckedSpecialAttributes = false;
	static ::jdk::internal::access::JavaUtilZipFileAccess* JUZFA;
	static $String* META_INF;
	static $String* META_INF_VERSIONS;
	static $String* MANIFEST_NAME;
	static $bytes* CLASSPATH_CHARS;
	static $bytes* CLASSPATH_LASTOCC;
	static $bytes* CLASSPATH_OPTOSFT;
	static $bytes* MULTIRELEASE_CHARS;
	static $bytes* MULTIRELEASE_LASTOCC;
	static $bytes* MULTIRELEASE_OPTOSFT;
};

		} // jar
	} // util
} // java

#pragma pop_macro("CLASSPATH_LASTOCC")
#pragma pop_macro("MULTI_RELEASE_FORCED")
#pragma pop_macro("RUNTIME_VERSION")
#pragma pop_macro("BASE_VERSION")
#pragma pop_macro("MULTIRELEASE_OPTOSFT")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("CLASSPATH_OPTOSFT")
#pragma pop_macro("META_INF_VERSIONS")
#pragma pop_macro("JUZFA")
#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MULTIRELEASE_LASTOCC")
#pragma pop_macro("MULTI_RELEASE_ENABLED")
#pragma pop_macro("CLASSPATH_CHARS")
#pragma pop_macro("MULTIRELEASE_CHARS")
#pragma pop_macro("META_INF")
#pragma pop_macro("BASE_VERSION_FEATURE")
#pragma pop_macro("MANIFEST_NAME")

#endif // _java_util_jar_JarFile_h_