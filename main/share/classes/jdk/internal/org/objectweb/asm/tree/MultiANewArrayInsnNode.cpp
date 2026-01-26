#include <jdk/internal/org/objectweb/asm/tree/MultiANewArrayInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef MULTIANEWARRAY
#undef MULTIANEWARRAY_INSN

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

$FieldInfo _MultiANewArrayInsnNode_FieldInfo_[] = {
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MultiANewArrayInsnNode, desc)},
	{"dims", "I", nullptr, $PUBLIC, $field(MultiANewArrayInsnNode, dims)},
	{}
};

$MethodInfo _MultiANewArrayInsnNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(MultiANewArrayInsnNode, init$, void, $String*, int32_t)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(MultiANewArrayInsnNode, accept, void, $MethodVisitor*)},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(MultiANewArrayInsnNode, clone, $AbstractInsnNode*, $Map*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(MultiANewArrayInsnNode, getType, int32_t)},
	{}
};

$ClassInfo _MultiANewArrayInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.MultiANewArrayInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_MultiANewArrayInsnNode_FieldInfo_,
	_MultiANewArrayInsnNode_MethodInfo_
};

$Object* allocate$MultiANewArrayInsnNode($Class* clazz) {
	return $of($alloc(MultiANewArrayInsnNode));
}

void MultiANewArrayInsnNode::init$($String* descriptor, int32_t numDimensions) {
	$AbstractInsnNode::init$($Opcodes::MULTIANEWARRAY);
	$set(this, desc, descriptor);
	this->dims = numDimensions;
}

int32_t MultiANewArrayInsnNode::getType() {
	return $AbstractInsnNode::MULTIANEWARRAY_INSN;
}

void MultiANewArrayInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitMultiANewArrayInsn(this->desc, this->dims);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* MultiANewArrayInsnNode::clone($Map* clonedLabels) {
	return $$new(MultiANewArrayInsnNode, this->desc, this->dims)->cloneAnnotations(this);
}

MultiANewArrayInsnNode::MultiANewArrayInsnNode() {
}

$Class* MultiANewArrayInsnNode::load$($String* name, bool initialize) {
	$loadClass(MultiANewArrayInsnNode, name, initialize, &_MultiANewArrayInsnNode_ClassInfo_, allocate$MultiANewArrayInsnNode);
	return class$;
}

$Class* MultiANewArrayInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk