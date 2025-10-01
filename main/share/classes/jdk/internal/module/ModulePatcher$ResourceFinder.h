#ifndef _jdk_internal_module_ModulePatcher$ResourceFinder_h_
#define _jdk_internal_module_ModulePatcher$ResourceFinder_h_
//$ interface jdk.internal.module.ModulePatcher$ResourceFinder
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

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

class ModulePatcher$ResourceFinder : public ::java::io::Closeable {
	$interface(ModulePatcher$ResourceFinder, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual ::jdk::internal::loader::Resource* find($String* name) {return nullptr;}
	virtual ::java::util::stream::Stream* list() {return nullptr;}
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$ResourceFinder_h_