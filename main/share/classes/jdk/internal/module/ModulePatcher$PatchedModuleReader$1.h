#ifndef _jdk_internal_module_ModulePatcher$PatchedModuleReader$1_h_
#define _jdk_internal_module_ModulePatcher$PatchedModuleReader$1_h_
//$ class jdk.internal.module.ModulePatcher$PatchedModuleReader$1
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
namespace jdk {
	namespace internal {
		namespace module {
			class ModulePatcher$PatchedModuleReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$PatchedModuleReader$1 : public ::jdk::internal::loader::Resource {
	$class(ModulePatcher$PatchedModuleReader$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	ModulePatcher$PatchedModuleReader$1();
	void init$(::jdk::internal::module::ModulePatcher$PatchedModuleReader* this$0, ::java::nio::ByteBuffer* val$bb);
	virtual ::java::nio::ByteBuffer* getByteBuffer() override;
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	$Object* shouldNotGetHere($Class* type);
	::jdk::internal::module::ModulePatcher$PatchedModuleReader* this$0 = nullptr;
	::java::nio::ByteBuffer* val$bb = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$PatchedModuleReader$1_h_