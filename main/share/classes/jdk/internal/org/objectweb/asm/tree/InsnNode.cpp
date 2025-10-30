#include <jdk/internal/org/objectweb/asm/tree/InsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef INSN

using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _InsnNode_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InsnNode::*)(int32_t)>(&InsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.InsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	nullptr,
	_InsnNode_MethodInfo_
};

$Object* allocate$InsnNode($Class* clazz) {
	return $of($alloc(InsnNode));
}

void InsnNode::init$(int32_t opcode) {
	$AbstractInsnNode::init$(opcode);
}

int32_t InsnNode::getType() {
	return $AbstractInsnNode::INSN;
}

void InsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitInsn(this->opcode);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* InsnNode::clone($Map* clonedLabels) {
	return $$new(InsnNode, this->opcode)->cloneAnnotations(this);
}

InsnNode::InsnNode() {
}

$Class* InsnNode::load$($String* name, bool initialize) {
	$loadClass(InsnNode, name, initialize, &_InsnNode_ClassInfo_, allocate$InsnNode);
	return class$;
}

$Class* InsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk