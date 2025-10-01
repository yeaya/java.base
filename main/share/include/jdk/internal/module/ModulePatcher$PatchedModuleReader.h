#ifndef _jdk_internal_module_ModulePatcher$PatchedModuleReader_h_
#define _jdk_internal_module_ModulePatcher$PatchedModuleReader_h_
//$ class jdk.internal.module.ModulePatcher$PatchedModuleReader
//$ extends java.lang.module.ModuleReader

#include <java/lang/module/ModuleReader.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
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
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
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
		namespace module {

class $import ModulePatcher$PatchedModuleReader : public ::java::lang::module::ModuleReader {
	$class(ModulePatcher$PatchedModuleReader, 0, ::java::lang::module::ModuleReader)
public:
	ModulePatcher$PatchedModuleReader();
	void init$(::java::util::List* patches, ::java::lang::module::ModuleReference* mref);
	virtual void close() override;
	static void closeAll(::java::util::List* finders);
	static ::java::net::URL* codeSourceURL(::java::lang::module::ModuleReference* mref);
	::java::lang::module::ModuleReader* delegate();
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::jdk::internal::loader::Resource* findResource($String* name);
	::jdk::internal::loader::Resource* findResourceInPatch($String* name);
	virtual ::java::util::stream::Stream* list() override;
	virtual ::java::util::Optional* open($String* name) override;
	virtual ::java::util::Optional* read($String* name) override;
	virtual void release(::java::nio::ByteBuffer* bb) override;
	static bool $assertionsDisabled;
	::java::util::List* finders = nullptr;
	::java::lang::module::ModuleReference* mref = nullptr;
	::java::net::URL* delegateCodeSourceURL = nullptr;
	$volatile(::java::lang::module::ModuleReader*) delegate$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$PatchedModuleReader_h_