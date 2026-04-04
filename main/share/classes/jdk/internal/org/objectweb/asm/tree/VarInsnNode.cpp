#include <jdk/internal/org/objectweb/asm/tree/VarInsnNode.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef VAR_INSN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void VarInsnNode::init$(int32_t opcode, int32_t var) {
	$AbstractInsnNode::init$(opcode);
	this->var = var;
}

void VarInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t VarInsnNode::getType() {
	return $AbstractInsnNode::VAR_INSN;
}

void VarInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitVarInsn(this->opcode, this->var);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* VarInsnNode::clone($Map* clonedLabels) {
	return $$new(VarInsnNode, this->opcode, this->var)->cloneAnnotations(this);
}

VarInsnNode::VarInsnNode() {
}

$Class* VarInsnNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"var", "I", nullptr, $PUBLIC, $field(VarInsnNode, var)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(VarInsnNode, init$, void, int32_t, int32_t)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(VarInsnNode, accept, void, $MethodVisitor*)},
		{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(VarInsnNode, clone, $AbstractInsnNode*, $Map*)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(VarInsnNode, getType, int32_t)},
		{"setOpcode", "(I)V", nullptr, $PUBLIC, $virtualMethod(VarInsnNode, setOpcode, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.VarInsnNode",
		"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VarInsnNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarInsnNode);
	});
	return class$;
}

$Class* VarInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk