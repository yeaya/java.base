#ifndef _java_security_Signature$Delegate$CloneableDelegate_h_
#define _java_security_Signature$Delegate$CloneableDelegate_h_
//$ class java.security.Signature$Delegate$CloneableDelegate
//$ extends java.security.Signature$Delegate
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/security/Signature$Delegate.h>

namespace java {
	namespace security {
		class SignatureSpi;
	}
}

namespace java {
	namespace security {

class Signature$Delegate$CloneableDelegate : public ::java::security::Signature$Delegate, public ::java::lang::Cloneable {
	$class(Signature$Delegate$CloneableDelegate, $NO_CLASS_INIT, ::java::security::Signature$Delegate, ::java::lang::Cloneable)
public:
	Signature$Delegate$CloneableDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::security::SignatureSpi* digestSpi, $String* algorithm);
	virtual $String* toString() override;
};

	} // security
} // java

#endif // _java_security_Signature$Delegate$CloneableDelegate_h_