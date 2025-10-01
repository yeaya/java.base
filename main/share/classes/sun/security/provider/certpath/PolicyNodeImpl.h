#ifndef _sun_security_provider_certpath_PolicyNodeImpl_h_
#define _sun_security_provider_certpath_PolicyNodeImpl_h_
//$ class sun.security.provider.certpath.PolicyNodeImpl
//$ extends java.security.cert.PolicyNode

#include <java/security/cert/PolicyNode.h>

#pragma push_macro("ANY_POLICY")
#undef ANY_POLICY

namespace java {
	namespace util {
		class HashSet;
		class Iterator;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class PolicyNodeImpl : public ::java::security::cert::PolicyNode {
	$class(PolicyNodeImpl, 0, ::java::security::cert::PolicyNode)
public:
	PolicyNodeImpl();
	void init$(::sun::security::provider::certpath::PolicyNodeImpl* parent, $String* validPolicy, ::java::util::Set* qualifierSet, bool criticalityIndicator, ::java::util::Set* expectedPolicySet, bool generatedByPolicyMapping);
	void init$(::sun::security::provider::certpath::PolicyNodeImpl* parent, ::sun::security::provider::certpath::PolicyNodeImpl* node);
	void addChild(::sun::security::provider::certpath::PolicyNodeImpl* child);
	void addExpectedPolicy($String* expectedPolicy);
	$String* asString();
	::sun::security::provider::certpath::PolicyNodeImpl* copyTree();
	::sun::security::provider::certpath::PolicyNodeImpl* copyTree(::sun::security::provider::certpath::PolicyNodeImpl* parent);
	void deleteChild(::java::security::cert::PolicyNode* childNode);
	virtual ::java::util::Iterator* getChildren() override;
	virtual int32_t getDepth() override;
	virtual ::java::util::Set* getExpectedPolicies() override;
	virtual ::java::security::cert::PolicyNode* getParent() override;
	::java::util::Set* getPolicyNodes(int32_t depth);
	void getPolicyNodes(int32_t depth, ::java::util::Set* set);
	::java::util::Set* getPolicyNodesExpected(int32_t depth, $String* expectedOID, bool matchAny);
	::java::util::Set* getPolicyNodesExpectedHelper(int32_t depth, $String* expectedOID, bool matchAny);
	::java::util::Set* getPolicyNodesValid(int32_t depth, $String* validOID);
	virtual ::java::util::Set* getPolicyQualifiers() override;
	virtual $String* getValidPolicy() override;
	virtual bool isCritical() override;
	bool isImmutable();
	static $String* policyToString($String* oid);
	void prune(int32_t depth);
	void setImmutable();
	virtual $String* toString() override;
	static $String* ANY_POLICY;
	::sun::security::provider::certpath::PolicyNodeImpl* mParent = nullptr;
	::java::util::HashSet* mChildren = nullptr;
	$String* mValidPolicy = nullptr;
	::java::util::HashSet* mQualifierSet = nullptr;
	bool mCriticalityIndicator = false;
	::java::util::HashSet* mExpectedPolicySet = nullptr;
	bool mOriginalExpectedPolicySet = false;
	int32_t mDepth = 0;
	bool isImmutable$ = false;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ANY_POLICY")

#endif // _sun_security_provider_certpath_PolicyNodeImpl_h_