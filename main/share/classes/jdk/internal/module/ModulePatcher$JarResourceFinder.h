#ifndef _jdk_internal_module_ModulePatcher$JarResourceFinder_h_
#define _jdk_internal_module_ModulePatcher$JarResourceFinder_h_
//$ class jdk.internal.module.ModulePatcher$JarResourceFinder
//$ extends jdk.internal.module.ModulePatcher$ResourceFinder

#include <jdk/internal/module/ModulePatcher$ResourceFinder.h>

namespace java {
	namespace net {
		class URL;
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
		namespace jar {
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
		namespace loader {
			class Resource;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePatcher$JarResourceFinder : public ::jdk::internal::module::ModulePatcher$ResourceFinder {
	$class(ModulePatcher$JarResourceFinder, $NO_CLASS_INIT, ::jdk::internal::module::ModulePatcher$ResourceFinder)
public:
	ModulePatcher$JarResourceFinder();
	void init$(::java::nio::file::Path* path);
	virtual void close() override;
	virtual ::jdk::internal::loader::Resource* find($String* name) override;
	virtual ::java::util::stream::Stream* list() override;
	::java::util::jar::JarFile* jf = nullptr;
	::java::net::URL* csURL = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$JarResourceFinder_h_