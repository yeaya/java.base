#ifndef _java_util_jar_JavaUtilJarAccessImpl_h_
#define _java_util_jar_JavaUtilJarAccessImpl_h_
//$ class java.util.jar.JavaUtilJarAccessImpl
//$ extends jdk.internal.access.JavaUtilJarAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaUtilJarAccess.h>

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

namespace java {
	namespace util {
		namespace jar {

class JavaUtilJarAccessImpl : public ::jdk::internal::access::JavaUtilJarAccess {
	$class(JavaUtilJarAccessImpl, $NO_CLASS_INIT, ::jdk::internal::access::JavaUtilJarAccess)
public:
	JavaUtilJarAccessImpl();
	void init$();
	virtual void ensureInitialization(::java::util::jar::JarFile* jar) override;
	virtual ::java::util::Enumeration* entries2(::java::util::jar::JarFile* jar) override;
	virtual ::java::util::jar::JarEntry* entryFor(::java::util::jar::JarFile* jar, $String* name) override;
	virtual ::java::util::Enumeration* entryNames(::java::util::jar::JarFile* jar, $Array<::java::security::CodeSource>* cs) override;
	virtual ::java::security::CodeSource* getCodeSource(::java::util::jar::JarFile* jar, ::java::net::URL* url, $String* name) override;
	virtual $Array<::java::security::CodeSource>* getCodeSources(::java::util::jar::JarFile* jar, ::java::net::URL* url) override;
	virtual ::java::util::List* getManifestDigests(::java::util::jar::JarFile* jar) override;
	virtual ::java::util::jar::Attributes* getTrustedAttributes(::java::util::jar::Manifest* man, $String* name) override;
	virtual bool isInitializing() override;
	virtual bool jarFileHasClassPathAttribute(::java::util::jar::JarFile* jar) override;
	virtual void setEagerValidation(::java::util::jar::JarFile* jar, bool eager) override;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JavaUtilJarAccessImpl_h_