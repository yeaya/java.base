#ifndef _java_lang_CharacterName$1_h_
#define _java_lang_CharacterName$1_h_
//$ class java.lang.CharacterName$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class CharacterName;
	}
}

namespace java {
	namespace lang {

class CharacterName$1 : public ::java::security::PrivilegedAction {
	$class(CharacterName$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CharacterName$1();
	void init$(::java::lang::CharacterName* this$0);
	virtual $Object* run() override;
	::java::lang::CharacterName* this$0 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_CharacterName$1_h_