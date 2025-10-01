#ifndef _java_lang_Character$Subset_h_
#define _java_lang_Character$Subset_h_
//$ class java.lang.Character$Subset
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $import Character$Subset : public ::java::lang::Object {
	$class(Character$Subset, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Character$Subset();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Character$Subset_h_