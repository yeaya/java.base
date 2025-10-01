#ifndef _jdk_internal_module_ModulePatcher$ExplodedResourceFinder_h_
#define _jdk_internal_module_ModulePatcher$ExplodedResourceFinder_h_
//$ class jdk.internal.module.ModulePatcher$ExplodedResourceFinder
//$ extends jdk.internal.module.ModulePatcher$ResourceFinder

#include <jdk/internal/module/ModulePatcher$ResourceFinder.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
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

class ModulePatcher$ExplodedResourceFinder : public ::jdk::internal::module::ModulePatcher$ResourceFinder {
	$class(ModulePatcher$ExplodedResourceFinder, $NO_CLASS_INIT, ::jdk::internal::module::ModulePatcher$ResourceFinder)
public:
	ModulePatcher$ExplodedResourceFinder();
	void init$(::java::nio::file::Path* dir);
	virtual void close() override;
	virtual ::jdk::internal::loader::Resource* find($String* name) override;
	$String* lambda$list$0(::java::nio::file::Path* f);
	static bool lambda$list$1($String* s);
	virtual ::java::util::stream::Stream* list() override;
	::jdk::internal::loader::Resource* newResource($String* name, ::java::nio::file::Path* top, ::java::nio::file::Path* file);
	::java::nio::file::Path* dir = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModulePatcher$ExplodedResourceFinder_h_