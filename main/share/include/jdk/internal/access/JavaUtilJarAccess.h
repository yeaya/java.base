#ifndef _jdk_internal_access_JavaUtilJarAccess_h_
#define _jdk_internal_access_JavaUtilJarAccess_h_
//$ interface jdk.internal.access.JavaUtilJarAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			class Attributes;
			class JarEntry;
			class JarFile;
			class Manifest;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaUtilJarAccess : public ::java::lang::Object {
	$interface(JavaUtilJarAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void ensureInitialization(::java::util::jar::JarFile* jar) {}
	virtual ::java::util::Enumeration* entries2(::java::util::jar::JarFile* jar) {return nullptr;}
	virtual ::java::util::jar::JarEntry* entryFor(::java::util::jar::JarFile* file, $String* name) {return nullptr;}
	virtual ::java::util::Enumeration* entryNames(::java::util::jar::JarFile* jar, $Array<::java::security::CodeSource>* cs) {return nullptr;}
	virtual ::java::security::CodeSource* getCodeSource(::java::util::jar::JarFile* jar, ::java::net::URL* url, $String* name) {return nullptr;}
	virtual $Array<::java::security::CodeSource>* getCodeSources(::java::util::jar::JarFile* jar, ::java::net::URL* url) {return nullptr;}
	virtual ::java::util::List* getManifestDigests(::java::util::jar::JarFile* jar) {return nullptr;}
	virtual ::java::util::jar::Attributes* getTrustedAttributes(::java::util::jar::Manifest* man, $String* name) {return nullptr;}
	virtual bool isInitializing() {return false;}
	virtual bool jarFileHasClassPathAttribute(::java::util::jar::JarFile* jar) {return false;}
	virtual void setEagerValidation(::java::util::jar::JarFile* jar, bool eager) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaUtilJarAccess_h_