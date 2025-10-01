#ifndef _java_security_Provider$UString_h_
#define _java_security_Provider$UString_h_
//$ class java.security.Provider$UString
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class Provider$UString : public ::java::lang::Object {
	$class(Provider$UString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Provider$UString();
	void init$($String* s);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* string = nullptr;
	$String* lowerString = nullptr;
};

	} // security
} // java

#endif // _java_security_Provider$UString_h_