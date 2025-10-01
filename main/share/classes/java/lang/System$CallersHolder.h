#ifndef _java_lang_System$CallersHolder_h_
#define _java_lang_System$CallersHolder_h_
//$ class java.lang.System$CallersHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {

class System$CallersHolder : public ::java::lang::Object {
	$class(System$CallersHolder, 0, ::java::lang::Object)
public:
	System$CallersHolder();
	void init$();
	static ::java::util::Map* callers;
};

	} // lang
} // java

#endif // _java_lang_System$CallersHolder_h_