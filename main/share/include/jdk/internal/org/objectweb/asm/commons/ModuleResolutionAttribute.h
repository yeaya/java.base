#ifndef _jdk_internal_org_objectweb_asm$_commons_ModuleResolutionAttribute_h_
#define _jdk_internal_org_objectweb_asm$_commons_ModuleResolutionAttribute_h_
//$ class jdk.internal.org.objectweb.asm.commons.ModuleResolutionAttribute
//$ extends jdk.internal.org.objectweb.asm.Attribute

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>

#pragma push_macro("RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT")
#undef RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT
#pragma push_macro("RESOLUTION_WARN_DEPRECATED")
#undef RESOLUTION_WARN_DEPRECATED
#pragma push_macro("RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL")
#undef RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL
#pragma push_macro("RESOLUTION_WARN_INCUBATING")
#undef RESOLUTION_WARN_INCUBATING

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

class $import ModuleResolutionAttribute : public ::jdk::internal::org::objectweb::asm$::Attribute {
	$class(ModuleResolutionAttribute, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::Attribute)
public:
	ModuleResolutionAttribute();
	void init$(int32_t resolution);
	void init$();
	virtual ::jdk::internal::org::objectweb::asm$::Attribute* read(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* write(::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) override;
	static const int32_t RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT = 1;
	static const int32_t RESOLUTION_WARN_DEPRECATED = 2;
	static const int32_t RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL = 4;
	static const int32_t RESOLUTION_WARN_INCUBATING = 8;
	int32_t resolution = 0;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("RESOLUTION_DO_NOT_RESOLVE_BY_DEFAULT")
#pragma pop_macro("RESOLUTION_WARN_DEPRECATED")
#pragma pop_macro("RESOLUTION_WARN_DEPRECATED_FOR_REMOVAL")
#pragma pop_macro("RESOLUTION_WARN_INCUBATING")

#endif // _jdk_internal_org_objectweb_asm$_commons_ModuleResolutionAttribute_h_