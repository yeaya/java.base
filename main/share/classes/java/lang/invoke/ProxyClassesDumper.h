#ifndef _java_lang_invoke_ProxyClassesDumper_h_
#define _java_lang_invoke_ProxyClassesDumper_h_
//$ class java.lang.invoke.ProxyClassesDumper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAD_CHARS")
#undef BAD_CHARS
#pragma push_macro("HEX")
#undef HEX
#pragma push_macro("REPLACEMENT")
#undef REPLACEMENT

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ProxyClassesDumper : public ::java::lang::Object {
	$class(ProxyClassesDumper, 0, ::java::lang::Object)
public:
	ProxyClassesDumper();
	void init$(::java::nio::file::Path* path);
	void dumpClass($String* className, $bytes* classBytes);
	static $String* encodeForFilename($String* className);
	static ::java::lang::invoke::ProxyClassesDumper* getInstance($String* path);
	static void validateDumpDir(::java::nio::file::Path* path);
	static $chars* HEX;
	static $chars* BAD_CHARS;
	static $StringArray* REPLACEMENT;
	::java::nio::file::Path* dumpDir = nullptr;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BAD_CHARS")
#pragma pop_macro("HEX")
#pragma pop_macro("REPLACEMENT")

#endif // _java_lang_invoke_ProxyClassesDumper_h_