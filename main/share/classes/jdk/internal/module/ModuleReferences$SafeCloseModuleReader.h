#ifndef _jdk_internal_module_ModuleReferences$SafeCloseModuleReader_h_
#define _jdk_internal_module_ModuleReferences$SafeCloseModuleReader_h_
//$ class jdk.internal.module.ModuleReferences$SafeCloseModuleReader
//$ extends java.lang.module.ModuleReader

#include <java/lang/module/ModuleReader.h>

namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
				class ReadWriteLock;
			}
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

class ModuleReferences$SafeCloseModuleReader : public ::java::lang::module::ModuleReader {
	$class(ModuleReferences$SafeCloseModuleReader, $NO_CLASS_INIT, ::java::lang::module::ModuleReader)
public:
	ModuleReferences$SafeCloseModuleReader();
	void init$();
	virtual void close() override;
	virtual ::java::util::Optional* find($String* name) override;
	virtual void implClose() {}
	virtual ::java::util::Optional* implFind($String* name) {return nullptr;}
	virtual ::java::util::stream::Stream* implList() {return nullptr;}
	virtual ::java::util::Optional* implOpen($String* name) {return nullptr;}
	virtual ::java::util::stream::Stream* list() override;
	virtual ::java::util::Optional* open($String* name) override;
	::java::util::concurrent::locks::ReadWriteLock* lock = nullptr;
	::java::util::concurrent::locks::Lock* readLock = nullptr;
	::java::util::concurrent::locks::Lock* writeLock = nullptr;
	bool closed = false;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferences$SafeCloseModuleReader_h_