#ifndef _HandlersPkgPrefix_h_
#define _HandlersPkgPrefix_h_
//$ class HandlersPkgPrefix
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KNOWN")
#undef KNOWN
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

class HandlersPkgPrefix$Result;
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

class $export HandlersPkgPrefix : public ::java::lang::Object {
	$class(HandlersPkgPrefix, 0, ::java::lang::Object)
public:
	HandlersPkgPrefix();
	void init$();
	static void lambda$static$0(::HandlersPkgPrefix$Result* r);
	static void lambda$static$1(::HandlersPkgPrefix$Result* r);
	static void main($StringArray* args);
	static void withPrefix($String* protocol, $String* pkgPrefix, ::java::util::function::Consumer* resultChecker);
	static ::java::util::function::Consumer* KNOWN;
	static ::java::util::function::Consumer* UNKNOWN;
};

#pragma pop_macro("KNOWN")
#pragma pop_macro("UNKNOWN")

#endif // _HandlersPkgPrefix_h_