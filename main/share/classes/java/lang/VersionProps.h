#ifndef _java_lang_VersionProps_h_
#define _java_lang_VersionProps_h_
//$ class java.lang.VersionProps
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VERSION_BUILD")
#undef VERSION_BUILD
#pragma push_macro("VERSION_PRE")
#undef VERSION_PRE
#pragma push_macro("VERSION_OPT")
#undef VERSION_OPT
#pragma push_macro("VERSION_NUMBER")
#undef VERSION_NUMBER
#pragma push_macro("VENDOR_URL")
#undef VENDOR_URL
#pragma push_macro("VENDOR_URL_VM_BUG")
#undef VENDOR_URL_VM_BUG
#pragma push_macro("VERSION_SPECIFICATION")
#undef VERSION_SPECIFICATION
#pragma push_macro("VENDOR")
#undef VENDOR
#pragma push_macro("VENDOR_VERSION")
#undef VENDOR_VERSION
#pragma push_macro("CLASSFILE_MAJOR_MINOR")
#undef CLASSFILE_MAJOR_MINOR
#pragma push_macro("VENDOR_URL_BUG")
#undef VENDOR_URL_BUG

namespace java {
	namespace util {
		class List;
		class Map;
		class Optional;
	}
}

namespace java {
	namespace lang {

class VersionProps : public ::java::lang::Object {
	$class(VersionProps, $PRELOAD, ::java::lang::Object)
public:
	VersionProps();
	void init$();
	static ::java::util::Optional* build();
	static void init(::java::util::Map* props);
	static ::java::util::Optional* optional();
	static ::java::util::Optional* optionalOf($String* value);
	static int32_t parseVersionNumber($String* version, int32_t prevIndex, int32_t index);
	static ::java::util::List* parseVersionNumbers($String* version);
	static ::java::util::Optional* pre();
	static void print(bool err);
	static void print(bool err, bool newln);
	static void println(bool err);
	static ::java::util::List* versionNumbers();
	static $String* launcher_name;
	static $String* java_version;
	static $String* java_version_date;
	static $String* java_runtime_name;
	static $String* java_runtime_version;
	static $String* VERSION_NUMBER;
	static $String* VERSION_SPECIFICATION;
	static $String* VERSION_BUILD;
	static $String* VERSION_PRE;
	static $String* VERSION_OPT;
	static bool isLTS;
	static $String* CLASSFILE_MAJOR_MINOR;
	static $String* VENDOR;
	static $String* VENDOR_URL;
	static $String* VENDOR_VERSION;
	static $String* VENDOR_URL_BUG;
	static $String* VENDOR_URL_VM_BUG;
};

	} // lang
} // java

#pragma pop_macro("VERSION_BUILD")
#pragma pop_macro("VERSION_PRE")
#pragma pop_macro("VERSION_OPT")
#pragma pop_macro("VERSION_NUMBER")
#pragma pop_macro("VENDOR_URL")
#pragma pop_macro("VENDOR_URL_VM_BUG")
#pragma pop_macro("VERSION_SPECIFICATION")
#pragma pop_macro("VENDOR")
#pragma pop_macro("VENDOR_VERSION")
#pragma pop_macro("CLASSFILE_MAJOR_MINOR")
#pragma pop_macro("VENDOR_URL_BUG")

#endif // _java_lang_VersionProps_h_