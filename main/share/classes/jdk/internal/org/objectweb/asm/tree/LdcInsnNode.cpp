#include <jdk/internal/org/objectweb/asm/tree/LdcInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef LDC
#undef LDC_INSN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _LdcInsnNode_FieldInfo_[] = {
	{"cst", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LdcInsnNode, cst)},
	{}
};

$MethodInfo _LdcInsnNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(LdcInsnNode::*)(Object$*)>(&LdcInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LdcInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.LdcInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_LdcInsnNode_FieldInfo_,
	_LdcInsnNode_MethodInfo_
};

$Object* allocate$LdcInsnNode($Class* clazz) {
	return $of($alloc(LdcInsnNode));
}

void LdcInsnNode::init$(Object$* value) {
	$AbstractInsnNode::init$($Opcodes::LDC);
	$set(this, cst, value);
}

int32_t LdcInsnNode::getType() {
	return $AbstractInsnNode::LDC_INSN;
}

void LdcInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitLdcInsn(this->cst);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* LdcInsnNode::clone($Map* clonedLabels) {
	return $$new(LdcInsnNode, this->cst)->cloneAnnotations(this);
}

LdcInsnNode::LdcInsnNode() {
}

$Class* LdcInsnNode::load$($String* name, bool initialize) {
	$loadClass(LdcInsnNode, name, initialize, &_LdcInsnNode_ClassInfo_, allocate$LdcInsnNode);
	return class$;
}

$Class* LdcInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk