#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef LABEL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _LabelNode_FieldInfo_[] = {
	{"value", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $field(LabelNode, value)},
	{}
};

$MethodInfo _LabelNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LabelNode, init$, void)},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $method(LabelNode, init$, void, $Label*)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(LabelNode, accept, void, $MethodVisitor*)},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(LabelNode, clone, $AbstractInsnNode*, $Map*)},
	{"getLabel", "()Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PUBLIC, $virtualMethod(LabelNode, getLabel, $Label*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(LabelNode, getType, int32_t)},
	{"resetLabel", "()V", nullptr, $PUBLIC, $virtualMethod(LabelNode, resetLabel, void)},
	{}
};

$ClassInfo _LabelNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.LabelNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_LabelNode_FieldInfo_,
	_LabelNode_MethodInfo_
};

$Object* allocate$LabelNode($Class* clazz) {
	return $of($alloc(LabelNode));
}

void LabelNode::init$() {
	$AbstractInsnNode::init$(-1);
}

void LabelNode::init$($Label* label) {
	$AbstractInsnNode::init$(-1);
	$set(this, value, label);
}

int32_t LabelNode::getType() {
	return $AbstractInsnNode::LABEL;
}

$Label* LabelNode::getLabel() {
	if (this->value == nullptr) {
		$set(this, value, $new($Label));
	}
	return this->value;
}

void LabelNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitLabel($(getLabel()));
}

$AbstractInsnNode* LabelNode::clone($Map* clonedLabels) {
	return $cast($AbstractInsnNode, $nc(clonedLabels)->get(this));
}

void LabelNode::resetLabel() {
	$set(this, value, nullptr);
}

LabelNode::LabelNode() {
}

$Class* LabelNode::load$($String* name, bool initialize) {
	$loadClass(LabelNode, name, initialize, &_LabelNode_ClassInfo_, allocate$LabelNode);
	return class$;
}

$Class* LabelNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk