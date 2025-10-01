#ifndef _MyPrincipal_h_
#define _MyPrincipal_h_
//$ class MyPrincipal
//$ extends java.security.Principal

#include <java/security/Principal.h>

class $export MyPrincipal : public ::java::security::Principal {
	$class(MyPrincipal, $NO_CLASS_INIT, ::java::security::Principal)
public:
	MyPrincipal();
	void init$($String* name);
	virtual bool equals(Object$* o) override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
};

#endif // _MyPrincipal_h_