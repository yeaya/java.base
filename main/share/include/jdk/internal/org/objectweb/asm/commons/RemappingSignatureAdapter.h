#ifndef _jdk_internal_org_objectweb_asm$_commons_RemappingSignatureAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_RemappingSignatureAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.RemappingSignatureAdapter
//$ extends jdk.internal.org.objectweb.asm.signature.SignatureVisitor

#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {
						class Remapper;
					}
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

class $import RemappingSignatureAdapter : public ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor {
	$class(RemappingSignatureAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor)
public:
	RemappingSignatureAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
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
	::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor = nullptr;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
	$String* className = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_RemappingSignatureAdapter_h_