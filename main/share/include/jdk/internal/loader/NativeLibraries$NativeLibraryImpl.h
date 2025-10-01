#ifndef _jdk_internal_loader_NativeLibraries$NativeLibraryImpl_h_
#define _jdk_internal_loader_NativeLibraries$NativeLibraryImpl_h_
//$ class jdk.internal.loader.NativeLibraries$NativeLibraryImpl
//$ extends jdk.internal.loader.NativeLibrary

#include <jdk/internal/loader/NativeLibrary.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $import NativeLibraries$NativeLibraryImpl : public ::jdk::internal::loader::NativeLibrary {
	$class(NativeLibraries$NativeLibraryImpl, 0, ::jdk::internal::loader::NativeLibrary)
public:
	NativeLibraries$NativeLibraryImpl();
	void init$($Class* fromClass, $String* name, bool isBuiltin, bool isJNI);
	virtual int64_t find($String* name) override;
	virtual $String* name() override;
	virtual bool open();
	virtual ::java::lang::Runnable* unloader();
	static bool $assertionsDisabled;
	$Class* fromClass = nullptr;
	$String* name$ = nullptr;
	bool isBuiltin = false;
	bool isJNI = false;
	int64_t handle = 0;
	int32_t jniVersion = 0;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_NativeLibraries$NativeLibraryImpl_h_