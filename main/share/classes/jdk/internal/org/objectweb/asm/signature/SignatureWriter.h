#ifndef _jdk_internal_org_objectweb_asm$_signature_SignatureWriter_h_
#define _jdk_internal_org_objectweb_asm$_signature_SignatureWriter_h_
//$ class jdk.internal.org.objectweb.asm.signature.SignatureWriter
//$ extends jdk.internal.org.objectweb.asm.signature.SignatureVisitor

#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {

class SignatureWriter : public ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor {
	$class(SignatureWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor)
public:
	SignatureWriter();
	void init$();
	void endArguments();
	void endFormals();
	virtual $String* toString() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitArrayType() override;
	virtual void visitBaseType(char16_t descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitClassBound() override;
	virtual void visitClassType($String* name) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitExceptionType() override;
	virtual void visitFormalTypeParameter($String* name) override;
	virtual void visitInnerClassType($String* name) override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterface() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterfaceBound() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitParameterType() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitReturnType() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitSuperclass() override;
	virtual void visitTypeArgument() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitTypeArgument(char16_t wildcard) override;
	virtual void visitTypeVariable($String* name) override;
	::java::lang::StringBuilder* stringBuilder = nullptr;
	bool hasFormals = false;
	bool hasParameters = false;
	int32_t argumentStack = 0;
};

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_signature_SignatureWriter_h_