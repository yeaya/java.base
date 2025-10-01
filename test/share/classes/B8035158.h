#ifndef _B8035158_h_
#define _B8035158_h_
//$ class B8035158
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

class $export B8035158 : public ::java::lang::Object {
	$class(B8035158, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B8035158();
	void init$();
	static void backupAndSetProperties(::java::util::Map* localProperties, ::java::util::Map* oldProperties);
	static ::java::util::Collection* emptyNonProxiesHosts();
	static void main($StringArray* args);
	static ::java::util::Collection* misc();
	static ::java::util::Collection* nonEmptyNonProxiesHosts();
	static void restoreProperties(::java::util::Map* oldProperties);
	static $Object* withSystemPropertiesSet(::java::util::Map* localProperties, ::java::util::concurrent::Callable* code);
};

#endif // _B8035158_h_