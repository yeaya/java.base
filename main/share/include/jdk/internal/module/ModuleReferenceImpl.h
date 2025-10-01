#ifndef _jdk_internal_module_ModuleReferenceImpl_h_
#define _jdk_internal_module_ModuleReferenceImpl_h_
//$ class jdk.internal.module.ModuleReferenceImpl
//$ extends java.lang.module.ModuleReference

#include <java/lang/Array.h>
#include <java/lang/module/ModuleReference.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleReader;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleHashes$HashSupplier;
			class ModulePatcher;
			class ModuleResolution;
			class ModuleTarget;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleReferenceImpl : public ::java::lang::module::ModuleReference {
	$class(ModuleReferenceImpl, $PRELOAD | $NO_CLASS_INIT, ::java::lang::module::ModuleReference)
public:
	ModuleReferenceImpl();
	void init$(::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* location, ::java::util::function::Supplier* readerSupplier, ::jdk::internal::module::ModulePatcher* patcher, ::jdk::internal::module::ModuleTarget* target, ::jdk::internal::module::ModuleHashes* recordedHashes, ::jdk::internal::module::ModuleHashes$HashSupplier* hasher, ::jdk::internal::module::ModuleResolution* moduleResolution);
	virtual $bytes* computeHash($String* algorithm);
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	virtual ::jdk::internal::module::ModuleHashes$HashSupplier* hasher();
	virtual bool isPatched();
	virtual ::jdk::internal::module::ModuleResolution* moduleResolution();
	virtual ::jdk::internal::module::ModuleTarget* moduleTarget();
	virtual ::java::lang::module::ModuleReader* open() override;
	virtual ::jdk::internal::module::ModuleHashes* recordedHashes();
	virtual $String* toString() override;
	::java::net::URI* location$ = nullptr;
	::java::util::function::Supplier* readerSupplier = nullptr;
	::jdk::internal::module::ModulePatcher* patcher = nullptr;
	::jdk::internal::module::ModuleTarget* target = nullptr;
	::jdk::internal::module::ModuleHashes* recordedHashes$ = nullptr;
	::jdk::internal::module::ModuleHashes$HashSupplier* hasher$ = nullptr;
	::jdk::internal::module::ModuleResolution* moduleResolution$ = nullptr;
	$bytes* cachedHash = nullptr;
	int32_t hash = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferenceImpl_h_