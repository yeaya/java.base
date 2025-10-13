#ifndef _jdk_internal_org_objectweb_asm$_tree_AbstractInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_AbstractInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.AbstractInsnNode
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIELD_INSN")
#undef FIELD_INSN
#pragma push_macro("FRAME")
#undef FRAME
#pragma push_macro("IINC_INSN")
#undef IINC_INSN
#pragma push_macro("INSN")
#undef INSN
#pragma push_macro("INT_INSN")
#undef INT_INSN
#pragma push_macro("INVOKE_DYNAMIC_INSN")
#undef INVOKE_DYNAMIC_INSN
#pragma push_macro("JUMP_INSN")
#undef JUMP_INSN
#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("LDC_INSN")
#undef LDC_INSN
#pragma push_macro("LINE")
#undef LINE
#pragma push_macro("LOOKUPSWITCH_INSN")
#undef LOOKUPSWITCH_INSN
#pragma push_macro("METHOD_INSN")
#undef METHOD_INSN
#pragma push_macro("MULTIANEWARRAY_INSN")
#undef MULTIANEWARRAY_INSN
#pragma push_macro("TABLESWITCH_INSN")
#undef TABLESWITCH_INSN
#pragma push_macro("TYPE_INSN")
#undef TYPE_INSN
#pragma push_macro("VAR_INSN")
#undef VAR_INSN

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
					class MethodVisitor;
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
					namespace tree {
						class LabelNode;
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
					namespace tree {

class $export AbstractInsnNode : public ::java::lang::Object {
	$class(AbstractInsnNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractInsnNode();
	using ::java::lang::Object::clone;
	void init$(int32_t opcode);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) {}
	void acceptAnnotations(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) {return nullptr;}
	static ::jdk::internal::org::objectweb::asm$::tree::LabelNode* clone(::jdk::internal::org::objectweb::asm$::tree::LabelNode* label, ::java::util::Map* clonedLabels);
	static $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* clone(::java::util::List* labels, ::java::util::Map* clonedLabels);
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* cloneAnnotations(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* getNext();
	virtual int32_t getOpcode();
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* getPrevious();
	virtual int32_t getType() {return 0;}
	static const int32_t INSN = 0;
	static const int32_t INT_INSN = 1;
	static const int32_t VAR_INSN = 2;
	static const int32_t TYPE_INSN = 3;
	static const int32_t FIELD_INSN = 4;
	static const int32_t METHOD_INSN = 5;
	static const int32_t INVOKE_DYNAMIC_INSN = 6;
	static const int32_t JUMP_INSN = 7;
	static const int32_t LABEL = 8;
	static const int32_t LDC_INSN = 9;
	static const int32_t IINC_INSN = 10;
	static const int32_t TABLESWITCH_INSN = 11;
	static const int32_t LOOKUPSWITCH_INSN = 12;
	static const int32_t MULTIANEWARRAY_INSN = 13;
	static const int32_t FRAME = 14;
	static const int32_t LINE = 15;
	int32_t opcode = 0;
	::java::util::List* visibleTypeAnnotations = nullptr;
	::java::util::List* invisibleTypeAnnotations = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* previousInsn = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* nextInsn = nullptr;
	int32_t index = 0;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("FIELD_INSN")
#pragma pop_macro("FRAME")
#pragma pop_macro("IINC_INSN")
#pragma pop_macro("INSN")
#pragma pop_macro("INT_INSN")
#pragma pop_macro("INVOKE_DYNAMIC_INSN")
#pragma pop_macro("JUMP_INSN")
#pragma pop_macro("LABEL")
#pragma pop_macro("LDC_INSN")
#pragma pop_macro("LINE")
#pragma pop_macro("LOOKUPSWITCH_INSN")
#pragma pop_macro("METHOD_INSN")
#pragma pop_macro("MULTIANEWARRAY_INSN")
#pragma pop_macro("TABLESWITCH_INSN")
#pragma pop_macro("TYPE_INSN")
#pragma pop_macro("VAR_INSN")

#endif // _jdk_internal_org_objectweb_asm$_tree_AbstractInsnNode_h_