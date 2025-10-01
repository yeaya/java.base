#ifndef _jdk_internal_module_Resources_h_
#define _jdk_internal_module_Resources_h_
//$ class jdk.internal.module.Resources
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export Resources : public ::java::lang::Object {
	$class(Resources, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resources();
	void init$();
	static bool canEncapsulate($String* name);
	static bool mayTranslate($String* name, int32_t off, int32_t len);
	static ::java::nio::file::Path* toFilePath(::java::nio::file::Path* dir, $String* name);
	static $String* toPackageName($String* name);
	static $String* toResourceName(::java::nio::file::Path* dir, ::java::nio::file::Path* file);
	static ::java::nio::file::Path* toSafeFilePath(::java::nio::file::FileSystem* fs, $String* name);
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_Resources_h_