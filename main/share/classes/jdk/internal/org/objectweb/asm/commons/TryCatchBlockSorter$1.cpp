#include <jdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter$1.h>

#include <jdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TryCatchBlockNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $TryCatchBlockSorter = ::jdk::internal::org::objectweb::asm$::commons::TryCatchBlockSorter;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $InsnList = ::jdk::internal::org::objectweb::asm$::tree::InsnList;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $MethodNode = ::jdk::internal::org::objectweb::asm$::tree::MethodNode;
using $TryCatchBlockNode = ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _TryCatchBlockSorter$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter;", nullptr, $FINAL | $SYNTHETIC, $field(TryCatchBlockSorter$1, this$0)},
	{}
};

$MethodInfo _TryCatchBlockSorter$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter;)V", nullptr, 0, $method(static_cast<void(TryCatchBlockSorter$1::*)($TryCatchBlockSorter*)>(&TryCatchBlockSorter$1::init$))},
	{"blockLength", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TryCatchBlockSorter$1::*)($TryCatchBlockNode*)>(&TryCatchBlockSorter$1::blockLength))},
	{"compare", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _TryCatchBlockSorter$1_EnclosingMethodInfo_ = {
	"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter",
	"visitEnd",
	"()V"
};

$InnerClassInfo _TryCatchBlockSorter$1_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TryCatchBlockSorter$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1",
	"java.lang.Object",
	"java.util.Comparator",
	_TryCatchBlockSorter$1_FieldInfo_,
	_TryCatchBlockSorter$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;>;",
	&_TryCatchBlockSorter$1_EnclosingMethodInfo_,
	_TryCatchBlockSorter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter"
};

$Object* allocate$TryCatchBlockSorter$1($Class* clazz) {
	return $of($alloc(TryCatchBlockSorter$1));
}

void TryCatchBlockSorter$1::init$($TryCatchBlockSorter* this$0) {
	$set(this, this$0, this$0);
}

int32_t TryCatchBlockSorter$1::compare($TryCatchBlockNode* tryCatchBlockNode1, $TryCatchBlockNode* tryCatchBlockNode2) {
	int32_t var$0 = blockLength(tryCatchBlockNode1);
	return var$0 - blockLength(tryCatchBlockNode2);
}

int32_t TryCatchBlockSorter$1::blockLength($TryCatchBlockNode* tryCatchBlockNode) {
	int32_t startIndex = $nc(this->this$0->instructions)->indexOf($nc(tryCatchBlockNode)->start);
	int32_t endIndex = $nc(this->this$0->instructions)->indexOf($nc(tryCatchBlockNode)->end);
	return endIndex - startIndex;
}

int32_t TryCatchBlockSorter$1::compare(Object$* tryCatchBlockNode1, Object$* tryCatchBlockNode2) {
	return this->compare($cast($TryCatchBlockNode, tryCatchBlockNode1), $cast($TryCatchBlockNode, tryCatchBlockNode2));
}

TryCatchBlockSorter$1::TryCatchBlockSorter$1() {
}

$Class* TryCatchBlockSorter$1::load$($String* name, bool initialize) {
	$loadClass(TryCatchBlockSorter$1, name, initialize, &_TryCatchBlockSorter$1_ClassInfo_, allocate$TryCatchBlockSorter$1);
	return class$;
}

$Class* TryCatchBlockSorter$1::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk