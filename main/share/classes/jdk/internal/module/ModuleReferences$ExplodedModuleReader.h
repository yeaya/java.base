#ifndef _jdk_internal_module_ModuleReferences$ExplodedModuleReader_h_
#define _jdk_internal_module_ModuleReferences$ExplodedModuleReader_h_
//$ class jdk.internal.module.ModuleReferences$ExplodedModuleReader
//$ extends java.lang.module.ModuleReader

#include <java/lang/module/ModuleReader.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
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
		namespace module {

class ModuleReferences$ExplodedModuleReader : public ::java::lang::module::ModuleReader {
	$class(ModuleReferences$ExplodedModuleReader, $NO_CLASS_INIT, ::java::lang::module::ModuleReader)
public:
	ModuleReferences$ExplodedModuleReader();
	void init$(::java::nio::file::Path* dir);
	virtual void close() override;
	void ensureOpen();
	virtual ::java::util::Optional* find($String* name) override;
	$String* lambda$list$0(::java::nio::file::Path* f);
	static bool lambda$list$1($String* s);
	virtual ::java::util::stream::Stream* list() override;
	virtual ::java::util::Optional* open($String* name) override;
	virtual ::java::util::Optional* read($String* name) override;
	::java::nio::file::Path* dir = nullptr;
	$volatile(bool) closed = false;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferences$ExplodedModuleReader_h_