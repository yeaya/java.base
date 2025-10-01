#ifndef _jdk_internal_loader_URLClassPath$FileLoader$1_h_
#define _jdk_internal_loader_URLClassPath$FileLoader$1_h_
//$ class jdk.internal.loader.URLClassPath$FileLoader$1
//$ extends jdk.internal.loader.Resource

#include <jdk/internal/loader/Resource.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
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
			class URLClassPath$FileLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$FileLoader$1 : public ::jdk::internal::loader::Resource {
	$class(URLClassPath$FileLoader$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	URLClassPath$FileLoader$1();
	void init$(::jdk::internal::loader::URLClassPath$FileLoader* this$0, $String* val$name, ::java::net::URL* val$url, ::java::io::File* val$file);
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::loader::URLClassPath$FileLoader* this$0 = nullptr;
	::java::io::File* val$file = nullptr;
	::java::net::URL* val$url = nullptr;
	$String* val$name = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$FileLoader$1_h_