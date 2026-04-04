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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(InsnNode, init$, void, int32_t)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(InsnNode, accept, void, $MethodVisitor*)},
		{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(InsnNode, clone, $AbstractInsnNode*, $Map*)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(InsnNode, getType, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.InsnNode",
		"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InsnNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InsnNode);
	});
	return class$;
}

$Class* InsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk