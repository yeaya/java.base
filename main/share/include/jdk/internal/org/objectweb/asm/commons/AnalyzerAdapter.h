#ifndef _jdk_internal_org_objectweb_asm$_commons_AnalyzerAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_AnalyzerAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.AnalyzerAdapter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Handle;
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

class $import AnalyzerAdapter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(AnalyzerAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	AnalyzerAdapter();
	void init$($String* owner, int32_t access, $String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void init$(int32_t api, $String* owner, int32_t access, $String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void execute(int32_t opcode, int32_t intArg, $String* stringArg);
	$Object* get(int32_t local);
	$Object* pop();
	void pop(int32_t numSlots);
	void pop($String* descriptor);
	void push(Object$* type);
	void pushDescriptor($String* fieldOrMethodDescriptor);
	void set(int32_t local, Object$* type);
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	static void visitFrameTypes(int32_t numTypes, $ObjectArray* frameTypes, ::java::util::List* result);
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) override;
	using ::jdk::internal::org::objectweb::asm$::MethodVisitor::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	::java::util::List* locals = nullptr;
	::java::util::List* stack = nullptr;
	::java::util::List* labels = nullptr;
	::java::util::Map* uninitializedTypes = nullptr;
	int32_t maxStack = 0;
	int32_t maxLocals = 0;
	$String* owner = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_AnalyzerAdapter_h_