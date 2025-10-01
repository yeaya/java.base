#ifndef _java_lang_Character$CharacterCache_h_
#define _java_lang_Character$CharacterCache_h_
//$ class java.lang.Character$CharacterCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Character;
	}
}

namespace java {
	namespace lang {

class Character$CharacterCache : public ::java::lang::Object {
	$class(Character$CharacterCache, 0, ::java::lang::Object)
public:
	Character$CharacterCache();
	void init$();
	static $Array<::java::lang::Character>* cache;
	static $Array<::java::lang::Character>* archivedCache;
};

	} // lang
} // java

#endif // _java_lang_Character$CharacterCache_h_