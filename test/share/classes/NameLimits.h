#ifndef _NameLimits_h_
#define _NameLimits_h_
//$ class NameLimits
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_PATH")
#undef MAX_PATH
#pragma push_macro("MIN_PATH")
#undef MIN_PATH

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export NameLimits : public ::java::lang::Object {
	$class(NameLimits, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NameLimits();
	void init$();
	static ::java::nio::file::Path* generatePath(int32_t len);
	static void main($StringArray* args);
	static bool tryCreateDirectory(int32_t len);
	static bool tryCreateFile(int32_t len);
	static const int32_t MAX_PATH = 255;
	static const int32_t MIN_PATH = 8;
};

#pragma pop_macro("MAX_PATH")
#pragma pop_macro("MIN_PATH")

#endif // _NameLimits_h_