#ifndef _java_security_cert_PolicyNode_h_
#define _java_security_cert_PolicyNode_h_
//$ interface java.security.cert.PolicyNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import PolicyNode : public ::java::lang::Object {
	$interface(PolicyNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Iterator* getChildren() {return nullptr;}
	virtual int32_t getDepth() {return 0;}
	virtual ::java::util::Set* getExpectedPolicies() {return nullptr;}
	virtual ::java::security::cert::PolicyNode* getParent() {return nullptr;}
	virtual ::java::util::Set* getPolicyQualifiers() {return nullptr;}
	virtual $String* getValidPolicy() {return nullptr;}
	virtual bool isCritical() {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PolicyNode_h_