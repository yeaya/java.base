#ifndef _jdk_internal_module_ModuleReferences$JModModuleReader_h_
#define _jdk_internal_module_ModuleReferences$JModModuleReader_h_
//$ class jdk.internal.module.ModuleReferences$JModModuleReader
//$ extends jdk.internal.module.ModuleReferences$SafeCloseModuleReader

#include <jdk/internal/module/ModuleReferences$SafeCloseModuleReader.h>

namespace java {
	namespace net {
		class URI;
	}
}
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
		namespace jmod {
			class JmodFile;
			class JmodFile$Entry;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleReferences$JModModuleReader : public ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader {
	$class(ModuleReferences$JModModuleReader, $NO_CLASS_INIT, ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader)
public:
	ModuleReferences$JModModuleReader();
	void init$(::java::nio::file::Path* path, ::java::net::URI* uri);
	::jdk::internal::jmod::JmodFile$Entry* getEntry($String* name);
	virtual void implClose() override;
	virtual ::java::util::Optional* implFind($String* name) override;
	virtual ::java::util::stream::Stream* implList() override;
	virtual ::java::util::Optional* implOpen($String* name) override;
	static bool lambda$implList$0(::jdk::internal::jmod::JmodFile$Entry* e);
	static ::jdk::internal::jmod::JmodFile* newJmodFile(::java::nio::file::Path* path);
	::jdk::internal::jmod::JmodFile* jf = nullptr;
	::java::net::URI* uri = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferences$JModModuleReader_h_