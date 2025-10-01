#ifndef _jdk_internal_org_objectweb_asm$_Context_h_
#define _jdk_internal_org_objectweb_asm$_Context_h_
//$ class jdk.internal.org.objectweb.asm.Context
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Attribute;
					class Label;
					class TypePath;
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

class Context : public ::java::lang::Object {
	$class(Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Context();
	void init$();
	$Array<::jdk::internal::org::objectweb::asm$::Attribute>* attributePrototypes = nullptr;
	int32_t parsingOptions = 0;
	$chars* charBuffer = nullptr;
	int32_t currentMethodAccessFlags = 0;
	$String* currentMethodName = nullptr;
	$String* currentMethodDescriptor = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::Label>* currentMethodLabels = nullptr;
	int32_t currentTypeAnnotationTarget = 0;
	::jdk::internal::org::objectweb::asm$::TypePath* currentTypeAnnotationTargetPath = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::Label>* currentLocalVariableAnnotationRangeStarts = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::Label>* currentLocalVariableAnnotationRangeEnds = nullptr;
	$ints* currentLocalVariableAnnotationRangeIndices = nullptr;
	int32_t currentFrameOffset = 0;
	int32_t currentFrameType = 0;
	int32_t currentFrameLocalCount = 0;
	int32_t currentFrameLocalCountDelta = 0;
	$ObjectArray* currentFrameLocalTypes = nullptr;
	int32_t currentFrameStackCount = 0;
	$ObjectArray* currentFrameStackTypes = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_Context_h_