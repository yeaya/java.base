#ifndef _java_lang_invoke_BootstrapMethodInvoker$VM_BSCI_h_
#define _java_lang_invoke_BootstrapMethodInvoker$VM_BSCI_h_
//$ class java.lang.invoke.BootstrapMethodInvoker$VM_BSCI
//$ extends java.lang.invoke.AbstractConstantGroup$BSCIWithCache

#include <java/lang/Array.h>
#include <java/lang/invoke/AbstractConstantGroup$BSCIWithCache.h>

#pragma push_macro("MIN_PF")
#undef MIN_PF

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BootstrapMethodInvoker$VM_BSCI : public ::java::lang::invoke::AbstractConstantGroup$BSCIWithCache {
	$class(BootstrapMethodInvoker$VM_BSCI, 0, ::java::lang::invoke::AbstractConstantGroup$BSCIWithCache)
public:
	BootstrapMethodInvoker$VM_BSCI();
	using ::java::lang::invoke::AbstractConstantGroup$BSCIWithCache::copyConstants;
	void init$(::java::lang::invoke::MethodHandle* bsm, $String* name, Object$* type, ::java::lang::invoke::MethodHandles$Lookup* lookup, $ints* indexInfo);
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos) override;
	virtual $Object* fillCache(int32_t i) override;
	void maybePrefetchIntoCache(int32_t i, bool bulk);
	void prefetchIntoCache(int32_t i, int32_t pfLimit);
	static bool $assertionsDisabled;
	$ints* indexInfo = nullptr;
	$Class* caller = nullptr;
	static const int32_t MIN_PF = 4;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("MIN_PF")

#endif // _java_lang_invoke_BootstrapMethodInvoker$VM_BSCI_h_