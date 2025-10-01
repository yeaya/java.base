#ifndef _java_security_Provider$ServiceKey_h_
#define _java_security_Provider$ServiceKey_h_
//$ class java.security.Provider$ServiceKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class Provider$ServiceKey : public ::java::lang::Object {
	$class(Provider$ServiceKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Provider$ServiceKey();
	void init$($String* type, $String* algorithm, bool intern);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool matches($String* type, $String* algorithm);
	$String* type = nullptr;
	$String* algorithm = nullptr;
	$String* originalAlgorithm = nullptr;
};

	} // security
} // java

#endif // _java_security_Provider$ServiceKey_h_