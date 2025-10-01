#ifndef _jdk_internal_util_StaticProperty_h_
#define _jdk_internal_util_StaticProperty_h_
//$ class jdk.internal.util.StaticProperty
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("USER_HOME")
#undef USER_HOME
#pragma push_macro("NATIVE_ENCODING")
#undef NATIVE_ENCODING
#pragma push_macro("JAVA_LIBRARY_PATH")
#undef JAVA_LIBRARY_PATH
#pragma push_macro("JDK_SERIAL_FILTER")
#undef JDK_SERIAL_FILTER
#pragma push_macro("SUN_BOOT_LIBRARY_PATH")
#undef SUN_BOOT_LIBRARY_PATH
#pragma push_macro("JAVA_HOME")
#undef JAVA_HOME
#pragma push_macro("JAVA_IO_TMPDIR")
#undef JAVA_IO_TMPDIR
#pragma push_macro("USER_NAME")
#undef USER_NAME
#pragma push_macro("USER_DIR")
#undef USER_DIR
#pragma push_macro("JDK_SERIAL_FILTER_FACTORY")
#undef JDK_SERIAL_FILTER_FACTORY

namespace java {
	namespace util {
		class Properties;
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class $import StaticProperty : public ::java::lang::Object {
	$class(StaticProperty, $PRELOAD, ::java::lang::Object)
public:
	StaticProperty();
	void init$();
	static $String* getProperty(::java::util::Properties* props, $String* key);
	static $String* getProperty(::java::util::Properties* props, $String* key, $String* defaultVal);
	static $String* javaHome();
	static $String* javaIoTmpDir();
	static $String* javaLibraryPath();
	static $String* jdkSerialFilter();
	static $String* jdkSerialFilterFactory();
	static $String* nativeEncoding();
	static $String* sunBootLibraryPath();
	static $String* userDir();
	static $String* userHome();
	static $String* userName();
	static $String* JAVA_HOME;
	static $String* USER_HOME;
	static $String* USER_DIR;
	static $String* USER_NAME;
	static $String* JAVA_LIBRARY_PATH;
	static $String* SUN_BOOT_LIBRARY_PATH;
	static $String* JDK_SERIAL_FILTER;
	static $String* JDK_SERIAL_FILTER_FACTORY;
	static $String* JAVA_IO_TMPDIR;
	static $String* NATIVE_ENCODING;
};

		} // util
	} // internal
} // jdk

#pragma pop_macro("USER_HOME")
#pragma pop_macro("NATIVE_ENCODING")
#pragma pop_macro("JAVA_LIBRARY_PATH")
#pragma pop_macro("JDK_SERIAL_FILTER")
#pragma pop_macro("SUN_BOOT_LIBRARY_PATH")
#pragma pop_macro("JAVA_HOME")
#pragma pop_macro("JAVA_IO_TMPDIR")
#pragma pop_macro("USER_NAME")
#pragma pop_macro("USER_DIR")
#pragma pop_macro("JDK_SERIAL_FILTER_FACTORY")

#endif // _jdk_internal_util_StaticProperty_h_