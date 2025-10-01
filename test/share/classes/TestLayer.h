#ifndef _TestLayer_h_
#define _TestLayer_h_
//$ class TestLayer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MODS_DIR")
#undef MODS_DIR

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

class $export TestLayer : public ::java::lang::Object {
	$class(TestLayer, 0, ::java::lang::Object)
public:
	TestLayer();
	void init$();
	static $Class* findClass(::java::lang::Module* module, $String* cn);
	static void main($StringArray* args);
	static ::java::nio::file::Path* MODS_DIR;
	static ::java::util::Set* modules;
};

#pragma pop_macro("MODS_DIR")

#endif // _TestLayer_h_