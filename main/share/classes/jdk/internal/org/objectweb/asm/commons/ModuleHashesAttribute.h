#ifndef _jdk_internal_org_objectweb_asm$_commons_ModuleHashesAttribute_h_
#define _jdk_internal_org_objectweb_asm$_commons_ModuleHashesAttribute_h_
//$ class jdk.internal.org.objectweb.asm.commons.ModuleHashesAttribute
//$ extends jdk.internal.org.objectweb.asm.Attribute

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
					class ClassReader;
					class ClassWriter;
					class Label;
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

class $export ModuleHashesAttribute : public ::jdk::internal::org::objectweb::asm$::Attribute {
	$class(ModuleHashesAttribute, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::Attribute)
public:
	ModuleHashesAttribute();
	void init$($String* algorithm, ::java::util::List* modules, ::java::util::List* hashes);
	void init$();
	virtual ::jdk::internal::org::objectweb::asm$::Attribute* read(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeAttributeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* write(::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) override;
	$String* algorithm = nullptr;
	::java::util::List* modules = nullptr;
	::java::util::List* hashes = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_ModuleHashesAttribute_h_