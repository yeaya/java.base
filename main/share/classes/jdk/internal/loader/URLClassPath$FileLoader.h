#ifndef _jdk_internal_loader_URLClassPath$FileLoader_h_
#define _jdk_internal_loader_URLClassPath$FileLoader_h_
//$ class jdk.internal.loader.URLClassPath$FileLoader
//$ extends jdk.internal.loader.URLClassPath$Loader

#include <jdk/internal/loader/URLClassPath$Loader.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URL;
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

class URLClassPath$FileLoader : public ::jdk::internal::loader::URLClassPath$Loader {
	$class(URLClassPath$FileLoader, $NO_CLASS_INIT, ::jdk::internal::loader::URLClassPath$Loader)
public:
	URLClassPath$FileLoader();
	using ::jdk::internal::loader::URLClassPath$Loader::getResource;
	void init$(::java::net::URL* url);
	virtual ::java::net::URL* findResource($String* name, bool check) override;
	virtual ::jdk::internal::loader::Resource* getResource($String* name, bool check) override;
	::java::io::File* dir = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$FileLoader_h_