#ifndef _jdk_internal_loader_URLClassPath$Loader$1_h_
#define _jdk_internal_loader_URLClassPath$Loader$1_h_
//$ class jdk.internal.loader.URLClassPath$Loader$1
//$ extends jdk.internal.loader.Resource

#include <jdk/internal/loader/Resource.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class URLClassPath$Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$Loader$1 : public ::jdk::internal::loader::Resource {
	$class(URLClassPath$Loader$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	URLClassPath$Loader$1();
	void init$(::jdk::internal::loader::URLClassPath$Loader* this$0, $String* val$name, ::java::net::URL* val$url, ::java::net::URLConnection* val$uc);
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::loader::URLClassPath$Loader* this$0 = nullptr;
	::java::net::URLConnection* val$uc = nullptr;
	::java::net::URL* val$url = nullptr;
	$String* val$name = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$Loader$1_h_