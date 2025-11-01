#ifndef _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter
//$ extends jdk.internal.org.objectweb.asm.tree.MethodNode
//$ implements jdk.internal.org.objectweb.asm.Opcodes

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>

namespace java {
	namespace util {
		class BitSet;
		class List;
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Label;
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
					namespace commons {
						class JSRInlinerAdapter$Instantiation;
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
						class InsnList;
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

class $export JSRInlinerAdapter : public ::jdk::internal::org::objectweb::asm$::tree::MethodNode, public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(JSRInlinerAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::MethodNode, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	JSRInlinerAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions);
	void emitCode();
	void emitInstantiation(::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter$Instantiation* instantiation, ::java::util::List* worklist, ::jdk::internal::org::objectweb::asm$::tree::InsnList* newInstructions, ::java::util::List* newTryCatchBlocks, ::java::util::List* newLocalVariables);
	void findReachableInsns(int32_t insnIndex, ::java::util::BitSet* subroutineInsns, ::java::util::BitSet* visitedInsns);
	void findSubroutineInsns(int32_t startInsnIndex, ::java::util::BitSet* subroutineInsns, ::java::util::BitSet* visitedInsns);
	void findSubroutinesInsns();
	virtual $String* toString() override;
	virtual void visitEnd() override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	using ::jdk::internal::org::objectweb::asm$::tree::MethodNode::visitMethodInsn;
	::java::util::BitSet* mainSubroutineInsns = nullptr;
	::java::util::Map* subroutinesInsns = nullptr;
	::java::util::BitSet* sharedSubroutineInsns = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter_h_