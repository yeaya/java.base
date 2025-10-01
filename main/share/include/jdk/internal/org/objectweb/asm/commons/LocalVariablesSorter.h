#ifndef _jdk_internal_org_objectweb_asm$_commons_LocalVariablesSorter_h_
#define _jdk_internal_org_objectweb_asm$_commons_LocalVariablesSorter_h_
//$ class jdk.internal.org.objectweb.asm.commons.LocalVariablesSorter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#pragma push_macro("OBJECT_TYPE")
#undef OBJECT_TYPE

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Label;
					class Type;
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
					namespace commons {

class $import LocalVariablesSorter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(LocalVariablesSorter, 0, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	LocalVariablesSorter();
	void init$(int32_t access, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void init$(int32_t api, int32_t access, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual int32_t newLocal(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual int32_t newLocalMapping(::jdk::internal::org::objectweb::asm$::Type* type);
	int32_t remap(int32_t var, ::jdk::internal::org::objectweb::asm$::Type* type);
	void setFrameLocal(int32_t local, Object$* type);
	virtual void setLocalType(int32_t local, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void updateNewLocals($ObjectArray* newLocals);
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible) override;
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static ::jdk::internal::org::objectweb::asm$::Type* OBJECT_TYPE;
	$ints* remappedVariableIndices = nullptr;
	$ObjectArray* remappedLocalTypes = nullptr;
	int32_t firstLocal = 0;
	int32_t nextLocal = 0;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("OBJECT_TYPE")

#endif // _jdk_internal_org_objectweb_asm$_commons_LocalVariablesSorter_h_