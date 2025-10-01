#ifndef _jdk_internal_org_objectweb_asm$_signature_SignatureReader_h_
#define _jdk_internal_org_objectweb_asm$_signature_SignatureReader_h_
//$ class jdk.internal.org.objectweb.asm.signature.SignatureReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {
						class SignatureVisitor;
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
					namespace signature {

class SignatureReader : public ::java::lang::Object {
	$class(SignatureReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureReader();
	void init$($String* signature);
	virtual void accept(::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVistor);
	virtual void acceptType(::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	static int32_t parseType($String* signature, int32_t startOffset, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	$String* signatureValue = nullptr;
};

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_signature_SignatureReader_h_