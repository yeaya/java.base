#ifndef _jdk_internal_loader_URLClassPath$JarLoader$2_h_
#define _jdk_internal_loader_URLClassPath$JarLoader$2_h_
//$ class jdk.internal.loader.URLClassPath$JarLoader$2
//$ extends jdk.internal.loader.Resource

#include <java/lang/Array.h>
#include <jdk/internal/loader/Resource.h>

namespace java {
	namespace io {
		class InputStream;
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
		namespace jar {
			class JarEntry;
			class Manifest;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class URLClassPath$JarLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$JarLoader$2 : public ::jdk::internal::loader::Resource {
	$class(URLClassPath$JarLoader$2, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	URLClassPath$JarLoader$2();
	void init$(::jdk::internal::loader::URLClassPath$JarLoader* this$0, $String* val$name, ::java::net::URL* val$url, ::java::util::jar::JarEntry* val$entry);
	virtual $Array<::java::security::cert::Certificate>* getCertificates() override;
	virtual $Array<::java::security::CodeSigner>* getCodeSigners() override;
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::util::jar::Manifest* getManifest() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::loader::URLClassPath$JarLoader* this$0 = nullptr;
	::java::util::jar::JarEntry* val$entry = nullptr;
	::java::net::URL* val$url = nullptr;
	$String* val$name = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$JarLoader$2_h_