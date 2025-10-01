#ifndef _jdk_internal_loader_Loader$NullModuleReader_h_
#define _jdk_internal_loader_Loader$NullModuleReader_h_
//$ class jdk.internal.loader.Loader$NullModuleReader
//$ extends java.lang.module.ModuleReader

#include <java/lang/module/ModuleReader.h>

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
		namespace loader {

class Loader$NullModuleReader : public ::java::lang::module::ModuleReader {
	$class(Loader$NullModuleReader, $NO_CLASS_INIT, ::java::lang::module::ModuleReader)
public:
	Loader$NullModuleReader();
	void init$();
	virtual void close() override;
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::stream::Stream* list() override;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader$NullModuleReader_h_