#include <jdk/internal/org/objectweb/asm/tree/LookupSwitchInsnNode.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef LOOKUPSWITCH
#undef LOOKUPSWITCH_INSN

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $LabelNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $Util = ::jdk::internal::org::objectweb::asm$::tree::Util;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void LookupSwitchInsnNode::init$($LabelNode* dflt, $ints* keys, $LabelNodeArray* labels) {
	$AbstractInsnNode::init$($Opcodes::LOOKUPSWITCH);
	$set(this, dflt, dflt);
	$set(this, keys, $Util::asArrayList(keys));
	$set(this, labels, $Util::asArrayList(labels));
}

int32_t LookupSwitchInsnNode::getType() {
	return $AbstractInsnNode::LOOKUPSWITCH_INSN;
}

void LookupSwitchInsnNode::accept($MethodVisitor* methodVisitor) {
	$useLocalObjectStack();
	$var($ints, keysArray, $new($ints, $nc(this->keys)->size()));
	for (int32_t i = 0, n = keysArray->length; i < n; ++i) {
		keysArray->set(i, $$sure($Integer, this->keys->get(i))->intValue());
	}
	$var($LabelArray, labelsArray, $new($LabelArray, $nc(this->labels)->size()));
	for (int32_t i = 0, n = labelsArray->length; i < n; ++i) {
		labelsArray->set(i, $($$sure($LabelNode, this->labels->get(i))->getLabel()));
	}
	$nc(methodVisitor)->visitLookupSwitchInsn($($nc(this->dflt)->getLabel()), keysArray, labelsArray);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* LookupSwitchInsnNode::clone($Map* clonedLabels) {
	$useLocalObjectStack();
	$var($LabelNode, var$0, $AbstractInsnNode::clone(this->dflt, clonedLabels));
	$var(LookupSwitchInsnNode, clone, $new(LookupSwitchInsnNode, var$0, nullptr, $($AbstractInsnNode::clone(this->labels, clonedLabels))));
	$nc(clone->keys)->addAll(this->keys);
	return clone->cloneAnnotations(this);
}

LookupSwitchInsnNode::LookupSwitchInsnNode() {
}

$Class* LookupSwitchInsnNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dflt", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(LookupSwitchInsnNode, dflt)},
		{"keys", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC, $field(LookupSwitchInsnNode, keys)},
		{"labels", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $PUBLIC, $field(LookupSwitchInsnNode, labels)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;[I[Ljdk/internal/org/objectweb/asm/tree/LabelNode;)V", nullptr, $PUBLIC, $method(LookupSwitchInsnNode, init$, void, $LabelNode*, $ints*, $LabelNodeArray*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(LookupSwitchInsnNode, accept, void, $MethodVisitor*)},
		{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(LookupSwitchInsnNode, clone, $AbstractInsnNode*, $Map*)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(LookupSwitchInsnNode, getType, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.LookupSwitchInsnNode",
		"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LookupSwitchInsnNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LookupSwitchInsnNode);
	});
	return class$;
}

$Class* LookupSwitchInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk