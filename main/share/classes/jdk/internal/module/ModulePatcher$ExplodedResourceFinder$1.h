#ifndef _jdk_internal_module_ModulePatcher$ExplodedResourceFinder$1_h_
#define _jdk_internal_module_ModulePatcher$ExplodedResourceFinder$1_h_
//$ class jdk.internal.module.ModulePatcher$ExplodedResourceFinder$1
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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModulePatcher$ExplodedResourceFinder;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$ExplodedResourceFinder$1 : public ::jdk::internal::loader::Resource {
	$class(ModulePatcher$ExplodedResourceFinder$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	ModulePatcher$ExplodedResourceFinder$1();
	void init$(::jdk::internal::module::ModulePatcher$ExplodedResourceFinder* this$0, $String* val$name, ::java::nio::file::Path* val$file, ::java::nio::file::Path* val$top);
	virtual ::java::nio::ByteBuffer* getByteBuffer() override;
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::module::ModulePatcher$ExplodedResourceFinder* this$0 = nullptr;
	::java::nio::file::Path* val$top = nullptr;
	::java::nio::file::Path* val$file = nullptr;
	$String* val$name = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$ExplodedResourceFinder$1_h_