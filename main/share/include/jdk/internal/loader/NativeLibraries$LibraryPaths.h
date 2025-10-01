#ifndef _jdk_internal_loader_NativeLibraries$LibraryPaths_h_
#define _jdk_internal_loader_NativeLibraries$LibraryPaths_h_
//$ class jdk.internal.loader.NativeLibraries$LibraryPaths
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SYS_PATHS")
#undef SYS_PATHS
#pragma push_macro("USER_PATHS")
#undef USER_PATHS

namespace jdk {
	namespace internal {
		namespace loader {

class $import NativeLibraries$LibraryPaths : public ::java::lang::Object {
	$class(NativeLibraries$LibraryPaths, 0, ::java::lang::Object)
public:
	NativeLibraries$LibraryPaths();
	void init$();
	static $StringArray* SYS_PATHS;
	static $StringArray* USER_PATHS;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("SYS_PATHS")
#pragma pop_macro("USER_PATHS")

#endif // _jdk_internal_loader_NativeLibraries$LibraryPaths_h_