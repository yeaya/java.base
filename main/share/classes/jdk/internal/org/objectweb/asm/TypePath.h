#ifndef _jdk_internal_org_objectweb_asm$_TypePath_h_
#define _jdk_internal_org_objectweb_asm$_TypePath_h_
//$ class jdk.internal.org.objectweb.asm.TypePath
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ARRAY_ELEMENT")
#undef ARRAY_ELEMENT
#pragma push_macro("INNER_TYPE")
#undef INNER_TYPE
#pragma push_macro("TYPE_ARGUMENT")
#undef TYPE_ARGUMENT
#pragma push_macro("WILDCARD_BOUND")
#undef WILDCARD_BOUND

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
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

class $export TypePath : public ::java::lang::Object {
	$class(TypePath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypePath();
	void init$($bytes* typePathContainer, int32_t typePathOffset);
	static ::jdk::internal::org::objectweb::asm$::TypePath* fromString($String* typePath);
	int32_t getLength();
	int32_t getStep(int32_t index);
	int32_t getStepArgument(int32_t index);
	static void put(::jdk::internal::org::objectweb::asm$::TypePath* typePath, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual $String* toString() override;
	static const int32_t ARRAY_ELEMENT = 0;
	static const int32_t INNER_TYPE = 1;
	static const int32_t WILDCARD_BOUND = 2;
	static const int32_t TYPE_ARGUMENT = 3;
	$bytes* typePathContainer = nullptr;
	int32_t typePathOffset = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("ARRAY_ELEMENT")
#pragma pop_macro("INNER_TYPE")
#pragma pop_macro("TYPE_ARGUMENT")
#pragma pop_macro("WILDCARD_BOUND")

#endif // _jdk_internal_org_objectweb_asm$_TypePath_h_