#include <jdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/BitSet.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

#undef LABEL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $BitSet = ::java::util::BitSet;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JSRInlinerAdapter = ::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $InsnList = ::jdk::internal::org::objectweb::asm$::tree::InsnList;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $MethodNode = ::jdk::internal::org::objectweb::asm$::tree::MethodNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _JSRInlinerAdapter$Instantiation_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter;", nullptr, $FINAL | $SYNTHETIC, $field(JSRInlinerAdapter$Instantiation, this$0)},
	{"parent", "Ljdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation;", nullptr, $FINAL, $field(JSRInlinerAdapter$Instantiation, parent)},
	{"subroutineInsns", "Ljava/util/BitSet;", nullptr, $FINAL, $field(JSRInlinerAdapter$Instantiation, subroutineInsns)},
	{"clonedLabels", "Ljava/util/Map;", "Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $FINAL, $field(JSRInlinerAdapter$Instantiation, clonedLabels)},
	{"returnLabel", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $FINAL, $field(JSRInlinerAdapter$Instantiation, returnLabel)},
	{}
};

$MethodInfo _JSRInlinerAdapter$Instantiation_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter;Ljdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation;Ljava/util/BitSet;)V", nullptr, 0, $method(static_cast<void(JSRInlinerAdapter$Instantiation::*)($JSRInlinerAdapter*,JSRInlinerAdapter$Instantiation*,$BitSet*)>(&JSRInlinerAdapter$Instantiation::init$))},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findOwner", "(I)Ljdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation;", nullptr, 0},
	{"get", "(Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC},
	{"getClonedLabel", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;)Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, 0},
	{"getClonedLabelForJumpInsn", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;)Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSRInlinerAdapter$Instantiation_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter$Instantiation", "jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter", "Instantiation", $PRIVATE},
	{}
};

$ClassInfo _JSRInlinerAdapter$Instantiation_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter$Instantiation",
	"java.util.AbstractMap",
	nullptr,
	_JSRInlinerAdapter$Instantiation_FieldInfo_,
	_JSRInlinerAdapter$Instantiation_MethodInfo_,
	"Ljava/util/AbstractMap<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;",
	nullptr,
	_JSRInlinerAdapter$Instantiation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter"
};

$Object* allocate$JSRInlinerAdapter$Instantiation($Class* clazz) {
	return $of($alloc(JSRInlinerAdapter$Instantiation));
}

void JSRInlinerAdapter$Instantiation::init$($JSRInlinerAdapter* this$0, JSRInlinerAdapter$Instantiation* parent, $BitSet* subroutineInsns) {
	$set(this, this$0, this$0);
	$AbstractMap::init$();
	{
		$var(JSRInlinerAdapter$Instantiation, instantiation, parent);
		for (; instantiation != nullptr; $assign(instantiation, $nc(instantiation)->parent)) {
			if (instantiation->subroutineInsns == subroutineInsns) {
				$throwNew($IllegalArgumentException, $$str({"Recursive invocation of "_s, subroutineInsns}));
			}
		}
	}
	$set(this, parent, parent);
	$set(this, subroutineInsns, subroutineInsns);
	$set(this, returnLabel, parent == nullptr ? ($LabelNode*)nullptr : $new($LabelNode));
	$set(this, clonedLabels, $new($HashMap));
	$var($LabelNode, clonedLabelNode, nullptr);
	for (int32_t insnIndex = 0; insnIndex < $nc(this$0->instructions)->size(); ++insnIndex) {
		$var($AbstractInsnNode, insnNode, $nc(this$0->instructions)->get(insnIndex));
		if ($nc(insnNode)->getType() == $AbstractInsnNode::LABEL) {
			$var($LabelNode, labelNode, $cast($LabelNode, insnNode));
			if (clonedLabelNode == nullptr) {
				$assign(clonedLabelNode, $new($LabelNode));
			}
			$nc(this->clonedLabels)->put(labelNode, clonedLabelNode);
		} else if (findOwner(insnIndex) == this) {
			$assign(clonedLabelNode, nullptr);
		}
	}
}

JSRInlinerAdapter$Instantiation* JSRInlinerAdapter$Instantiation::findOwner(int32_t insnIndex) {
	if (!$nc(this->subroutineInsns)->get(insnIndex)) {
		return nullptr;
	}
	if (!$nc(this->this$0->sharedSubroutineInsns)->get(insnIndex)) {
		return this;
	}
	$var(JSRInlinerAdapter$Instantiation, owner, this);
	{
		$var(JSRInlinerAdapter$Instantiation, instantiation, this->parent);
		for (; instantiation != nullptr; $assign(instantiation, $nc(instantiation)->parent)) {
			if ($nc(instantiation->subroutineInsns)->get(insnIndex)) {
				$assign(owner, instantiation);
			}
		}
	}
	return owner;
}

$LabelNode* JSRInlinerAdapter$Instantiation::getClonedLabelForJumpInsn($LabelNode* labelNode) {
	return $cast($LabelNode, $nc($nc($(findOwner($nc(this->this$0->instructions)->indexOf(labelNode))))->clonedLabels)->get(labelNode));
}

$LabelNode* JSRInlinerAdapter$Instantiation::getClonedLabel($LabelNode* labelNode) {
	return $cast($LabelNode, $nc(this->clonedLabels)->get(labelNode));
}

$Set* JSRInlinerAdapter$Instantiation::entrySet() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* JSRInlinerAdapter$Instantiation::get(Object$* key) {
	return $of(getClonedLabelForJumpInsn($cast($LabelNode, key)));
}

bool JSRInlinerAdapter$Instantiation::equals(Object$* other) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t JSRInlinerAdapter$Instantiation::hashCode() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

JSRInlinerAdapter$Instantiation::JSRInlinerAdapter$Instantiation() {
}

$Class* JSRInlinerAdapter$Instantiation::load$($String* name, bool initialize) {
	$loadClass(JSRInlinerAdapter$Instantiation, name, initialize, &_JSRInlinerAdapter$Instantiation_ClassInfo_, allocate$JSRInlinerAdapter$Instantiation);
	return class$;
}

$Class* JSRInlinerAdapter$Instantiation::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk