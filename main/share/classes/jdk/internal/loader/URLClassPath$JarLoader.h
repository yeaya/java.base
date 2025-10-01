#ifndef _jdk_internal_loader_URLClassPath$JarLoader_h_
#define _jdk_internal_loader_URLClassPath$JarLoader_h_
//$ class jdk.internal.loader.URLClassPath$JarLoader
//$ extends jdk.internal.loader.URLClassPath$Loader

#include <java/lang/Array.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>

namespace java {
	namespace net {
		class URL;
		class URLStreamHandler;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Set;
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
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilZipFileAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Resource;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {
				class JarIndex;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$JarLoader : public ::jdk::internal::loader::URLClassPath$Loader {
	$class(URLClassPath$JarLoader, 0, ::jdk::internal::loader::URLClassPath$Loader)
public:
	URLClassPath$JarLoader();
	using ::jdk::internal::loader::URLClassPath$Loader::getResource;
	void init$(::java::net::URL* url, ::java::net::URLStreamHandler* jarHandler, ::java::util::HashMap* loaderMap, ::java::security::AccessControlContext* acc);
	static ::java::util::jar::JarFile* checkJar(::java::util::jar::JarFile* jar);
	virtual ::jdk::internal::loader::Resource* checkResource($String* name, bool check, ::java::util::jar::JarEntry* entry);
	virtual void close() override;
	void ensureOpen();
	virtual ::java::net::URL* findResource($String* name, bool check) override;
	virtual $Array<::java::net::URL>* getClassPath() override;
	virtual ::jdk::internal::util::jar::JarIndex* getIndex();
	virtual ::java::util::jar::JarFile* getJarFile();
	::java::util::jar::JarFile* getJarFile(::java::net::URL* url);
	virtual ::jdk::internal::loader::Resource* getResource($String* name, bool check) override;
	virtual ::jdk::internal::loader::Resource* getResource($String* name, bool check, ::java::util::Set* visited);
	bool isOptimizable(::java::net::URL* url);
	static bool isRelative($String* child);
	static $Array<::java::net::URL>* parseClassPath(::java::net::URL* base, $String* value);
	static ::java::net::URL* tryResolve(::java::net::URL* base, $String* input);
	static ::java::net::URL* tryResolveFile(::java::net::URL* base, $String* input);
	static ::java::net::URL* tryResolveNonFile(::java::net::URL* base, $String* input);
	virtual bool validIndex($String* name);
	::java::util::jar::JarFile* jar = nullptr;
	::java::net::URL* csu = nullptr;
	::jdk::internal::util::jar::JarIndex* index = nullptr;
	::java::net::URLStreamHandler* handler = nullptr;
	::java::util::HashMap* lmap = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	bool closed = false;
	static ::jdk::internal::access::JavaUtilZipFileAccess* zipAccess;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$JarLoader_h_