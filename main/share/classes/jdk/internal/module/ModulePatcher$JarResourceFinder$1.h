#ifndef _jdk_internal_module_ModulePatcher$JarResourceFinder$1_h_
#define _jdk_internal_module_ModulePatcher$JarResourceFinder$1_h_
//$ class jdk.internal.module.ModulePatcher$JarResourceFinder$1
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
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModulePatcher$JarResourceFinder;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$JarResourceFinder$1 : public ::jdk::internal::loader::Resource {
	$class(ModulePatcher$JarResourceFinder$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	ModulePatcher$JarResourceFinder$1();
	void init$(::jdk::internal::module::ModulePatcher$JarResourceFinder* this$0, $String* val$name, ::java::util::jar::JarEntry* val$entry);
	virtual ::java::nio::ByteBuffer* getByteBuffer() override;
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::module::ModulePatcher$JarResourceFinder* this$0 = nullptr;
	::java::util::jar::JarEntry* val$entry = nullptr;
	$String* val$name = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$JarResourceFinder$1_h_