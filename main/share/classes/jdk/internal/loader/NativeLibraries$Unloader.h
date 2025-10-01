#ifndef _jdk_internal_loader_NativeLibraries$Unloader_h_
#define _jdk_internal_loader_NativeLibraries$Unloader_h_
//$ class jdk.internal.loader.NativeLibraries$Unloader
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("UNLOADER")
#undef UNLOADER

namespace jdk {
	namespace internal {
		namespace loader {
			class NativeLibraries$NativeLibraryImpl;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export NativeLibraries$Unloader : public ::java::lang::Runnable {
	$class(NativeLibraries$Unloader, 0, ::java::lang::Runnable)
public:
	NativeLibraries$Unloader();
	void init$($String* name, int64_t handle, bool isBuiltin, bool isJNI);
	virtual void run() override;
	static bool $assertionsDisabled;
	static ::jdk::internal::loader::NativeLibraries$NativeLibraryImpl* UNLOADER;
	$String* name = nullptr;
	int64_t handle = 0;
	bool isBuiltin = false;
	bool isJNI = false;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("UNLOADER")

#endif // _jdk_internal_loader_NativeLibraries$Unloader_h_