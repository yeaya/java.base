#ifndef _java_security_MessageDigest$Delegate$CloneableDelegate_h_
#define _java_security_MessageDigest$Delegate$CloneableDelegate_h_
//$ class java.security.MessageDigest$Delegate$CloneableDelegate
//$ extends java.security.MessageDigest$Delegate
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/security/MessageDigest$Delegate.h>

namespace java {
	namespace security {
		class MessageDigestSpi;
		class Provider;
	}
}

namespace java {
	namespace security {

class MessageDigest$Delegate$CloneableDelegate : public ::java::security::MessageDigest$Delegate, public ::java::lang::Cloneable {
	$class(MessageDigest$Delegate$CloneableDelegate, $NO_CLASS_INIT, ::java::security::MessageDigest$Delegate, ::java::lang::Cloneable)
public:
	MessageDigest$Delegate$CloneableDelegate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::security::MessageDigestSpi* digestSpi, $String* algorithm, ::java::security::Provider* p);
	virtual $String* toString() override;
};

	} // security
} // java

#endif // _java_security_MessageDigest$Delegate$CloneableDelegate_h_