#ifndef _java_lang_Module$ArchivedData_h_
#define _java_lang_Module$ArchivedData_h_
//$ class java.lang.Module$ArchivedData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {

class Module$ArchivedData : public ::java::lang::Object {
	$class(Module$ArchivedData, $PRELOAD, ::java::lang::Object)
public:
	Module$ArchivedData();
	void init$();
	static void archive();
	static ::java::lang::Module$ArchivedData* get();
	static ::java::lang::Module$ArchivedData* archivedData;
	::java::lang::Module* allUnnamedModule = nullptr;
	::java::util::Set* allUnnamedModules = nullptr;
	::java::lang::Module* everyoneModule = nullptr;
	::java::util::Set* everyoneSet = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Module$ArchivedData_h_