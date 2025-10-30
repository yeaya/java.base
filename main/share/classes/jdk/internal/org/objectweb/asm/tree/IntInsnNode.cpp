#include <jdk/internal/org/objectweb/asm/tree/IntInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef INT_INSN

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

$FieldInfo _IntInsnNode_FieldInfo_[] = {
	{"operand", "I", nullptr, $PUBLIC, $field(IntInsnNode, operand)},
	{}
};

$MethodInfo _IntInsnNode_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(IntInsnNode::*)(int32_t,int32_t)>(&IntInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setOpcode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.IntInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_IntInsnNode_FieldInfo_,
	_IntInsnNode_MethodInfo_
};

$Object* allocate$IntInsnNode($Class* clazz) {
	return $of($alloc(IntInsnNode));
}

void IntInsnNode::init$(int32_t opcode, int32_t operand) {
	$AbstractInsnNode::init$(opcode);
	this->operand = operand;
}

void IntInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t IntInsnNode::getType() {
	return $AbstractInsnNode::INT_INSN;
}

void IntInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitIntInsn(this->opcode, this->operand);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* IntInsnNode::clone($Map* clonedLabels) {
	return $$new(IntInsnNode, this->opcode, this->operand)->cloneAnnotations(this);
}

IntInsnNode::IntInsnNode() {
}

$Class* IntInsnNode::load$($String* name, bool initialize) {
	$loadClass(IntInsnNode, name, initialize, &_IntInsnNode_ClassInfo_, allocate$IntInsnNode);
	return class$;
}

$Class* IntInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk