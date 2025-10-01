#ifndef _java_security_Provider$EngineDescription_h_
#define _java_security_Provider$EngineDescription_h_
//$ class java.security.Provider$EngineDescription
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class Provider$EngineDescription : public ::java::lang::Object {
	$class(Provider$EngineDescription, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Provider$EngineDescription();
	void init$($String* name, bool sp, $String* paramName);
	virtual $Class* getConstructorParameterClass();
	$String* name = nullptr;
	bool supportsParameter = false;
	$String* constructorParameterClassName = nullptr;
	$volatile($Class*) constructorParameterClass = nullptr;
};

	} // security
} // java

#endif // _java_security_Provider$EngineDescription_h_