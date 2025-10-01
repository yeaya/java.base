#ifndef _jdk_internal_loader_LoaderPool_h_
#define _jdk_internal_loader_LoaderPool_h_
//$ class jdk.internal.loader.LoaderPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
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
			class Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export LoaderPool : public ::java::lang::Object {
	$class(LoaderPool, 0, ::java::lang::Object)
public:
	LoaderPool();
	void init$(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers, ::java::lang::ClassLoader* parentLoader);
	static void lambda$new$0(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers, ::jdk::internal::loader::Loader* l);
	::jdk::internal::loader::Loader* loaderFor($String* name);
	::java::util::stream::Stream* loaders();
	static bool $assertionsDisabled;
	::java::util::Map* loaders$ = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_LoaderPool_h_