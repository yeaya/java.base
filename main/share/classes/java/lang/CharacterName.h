#ifndef _java_lang_CharacterName_h_
#define _java_lang_CharacterName_h_
//$ class java.lang.CharacterName
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}

namespace java {
	namespace lang {

class CharacterName : public ::java::lang::Object {
	$class(CharacterName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharacterName();
	void init$();
	int32_t addCp(int32_t idx, int32_t hash, int32_t next, int32_t cp);
	virtual int32_t getCodePoint($String* name);
	int32_t getCp(int32_t idx);
	int32_t getCpHash(int32_t idx);
	int32_t getCpNext(int32_t idx);
	static ::java::lang::CharacterName* getInstance();
	virtual $String* getName(int32_t cp);
	static int32_t hashN($bytes* a, int32_t off, int32_t len);
	static ::java::lang::ref::SoftReference* refCharName;
	$bytes* strPool = nullptr;
	$ints* lookup = nullptr;
	$ints* bkIndices = nullptr;
	$ints* cpEntries = nullptr;
	$ints* hsIndices = nullptr;
};

	} // lang
} // java

#endif // _java_lang_CharacterName_h_