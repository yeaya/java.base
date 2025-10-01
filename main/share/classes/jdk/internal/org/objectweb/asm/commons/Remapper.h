#ifndef _jdk_internal_org_objectweb_asm$_commons_Remapper_h_
#define _jdk_internal_org_objectweb_asm$_commons_Remapper_h_
//$ class jdk.internal.org.objectweb.asm.commons.Remapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Type;
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
					namespace commons {

class $export Remapper : public ::java::lang::Object {
	$class(Remapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Remapper();
	void init$();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* createRemappingSignatureAdapter(::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* createSignatureRemapper(::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	virtual $String* map($String* internalName);
	virtual $String* mapDesc($String* descriptor);
	virtual $String* mapFieldName($String* owner, $String* name, $String* descriptor);
	virtual $String* mapInnerClassName($String* name, $String* ownerName, $String* innerName);
	virtual $String* mapInvokeDynamicMethodName($String* name, $String* descriptor);
	virtual $String* mapMethodDesc($String* methodDescriptor);
	virtual $String* mapMethodName($String* owner, $String* name, $String* descriptor);
	virtual $String* mapModuleName($String* name);
	virtual $String* mapPackageName($String* name);
	virtual $String* mapRecordComponentName($String* owner, $String* name, $String* descriptor);
	virtual $String* mapSignature($String* signature, bool typeSignature);
	::jdk::internal::org::objectweb::asm$::Type* mapType(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual $String* mapType($String* internalName);
	virtual $StringArray* mapTypes($StringArray* internalNames);
	virtual $Object* mapValue(Object$* value);
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_Remapper_h_