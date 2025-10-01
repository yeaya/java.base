#ifndef _jdk_internal_loader_NativeLibraries_h_
#define _jdk_internal_loader_NativeLibraries_h_
//$ class jdk.internal.loader.NativeLibraries
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Deque;
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class NativeLibraries$NativeLibraryImpl;
			class NativeLibrary;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export NativeLibraries : public ::java::lang::Object {
	$class(NativeLibraries, $PRELOAD, ::java::lang::Object)
public:
	NativeLibraries();
	void init$(::java::lang::ClassLoader* loader);
	void init$($Class* caller, bool searchJavaLibraryPath);
	int64_t find($String* name);
	static $String* findBuiltinLib($String* name);
	static int64_t findEntry0(::jdk::internal::loader::NativeLibraries$NativeLibraryImpl* lib, $String* name);
	::jdk::internal::loader::NativeLibrary* findFromPaths($StringArray* paths, $Class* fromClass, $String* name);
	static $Class* getFromClass();
	static ::jdk::internal::loader::NativeLibraries* jniNativeLibraries(::java::lang::ClassLoader* loader);
	static bool load(::jdk::internal::loader::NativeLibraries$NativeLibraryImpl* impl, $String* name, bool isBuiltin, bool isJNI);
	::jdk::internal::loader::NativeLibrary* loadLibrary($Class* fromClass, ::java::io::File* file);
	::jdk::internal::loader::NativeLibrary* loadLibrary($Class* fromClass, $String* name, bool isBuiltin);
	::jdk::internal::loader::NativeLibrary* loadLibrary($String* name);
	::jdk::internal::loader::NativeLibrary* loadLibrary($Class* fromClass, $String* name);
	static ::jdk::internal::loader::NativeLibraries* rawNativeLibraries($Class* trustedCaller, bool searchJavaLibraryPath);
	void unload(::jdk::internal::loader::NativeLibrary* lib);
	static void unload($String* name, bool isBuiltin, bool isJNI, int64_t handle);
	static bool $assertionsDisabled;
	::java::util::Map* libraries = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
	$Class* caller = nullptr;
	bool searchJavaLibraryPath = false;
	bool isJNI = false;
	static ::java::util::Set* loadedLibraryNames;
	static ::java::util::Deque* nativeLibraryContext;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_NativeLibraries_h_