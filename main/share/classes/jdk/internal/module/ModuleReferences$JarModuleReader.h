#ifndef _jdk_internal_module_ModuleReferences$JarModuleReader_h_
#define _jdk_internal_module_ModuleReferences$JarModuleReader_h_
//$ class jdk.internal.module.ModuleReferences$JarModuleReader
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
		namespace jar {
			class JarEntry;
			class JarFile;
		}
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

class ModuleReferences$JarModuleReader : public ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader {
	$class(ModuleReferences$JarModuleReader, $NO_CLASS_INIT, ::jdk::internal::module::ModuleReferences$SafeCloseModuleReader)
public:
	ModuleReferences$JarModuleReader();
	void init$(::java::nio::file::Path* path, ::java::net::URI* uri);
	::java::util::jar::JarEntry* getEntry($String* name);
	virtual void implClose() override;
	virtual ::java::util::Optional* implFind($String* name) override;
	virtual ::java::util::stream::Stream* implList() override;
	virtual ::java::util::Optional* implOpen($String* name) override;
	static ::java::util::jar::JarFile* newJarFile(::java::nio::file::Path* path);
	::java::util::jar::JarFile* jf = nullptr;
	::java::net::URI* uri = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferences$JarModuleReader_h_