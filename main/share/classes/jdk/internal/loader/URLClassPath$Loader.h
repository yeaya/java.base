#ifndef _jdk_internal_loader_URLClassPath$Loader_h_
#define _jdk_internal_loader_URLClassPath$Loader_h_
//$ class jdk.internal.loader.URLClassPath$Loader
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarFile;
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
		namespace loader {

class URLClassPath$Loader : public ::java::io::Closeable {
	$class(URLClassPath$Loader, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	URLClassPath$Loader();
	void init$(::java::net::URL* url);
	virtual void close() override;
	virtual ::java::net::URL* findResource($String* name, bool check);
	virtual ::java::net::URL* getBaseURL();
	virtual $Array<::java::net::URL>* getClassPath();
	virtual ::jdk::internal::loader::Resource* getResource($String* name, bool check);
	virtual ::jdk::internal::loader::Resource* getResource($String* name);
	::java::net::URL* base = nullptr;
	::java::util::jar::JarFile* jarfile = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$Loader_h_