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
using $TryCatchBlockSorter = ::jdk::internal::org::objectweb::asm$::commons::TryCatchBlockSorter;
using $TryCatchBlockNode = ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

void TryCatchBlockSorter$1::init$($TryCatchBlockSorter* this$0) {
	$set(this, this$0, this$0);
}

int32_t TryCatchBlockSorter$1::compare($TryCatchBlockNode* tryCatchBlockNode1, $TryCatchBlockNode* tryCatchBlockNode2) {
	int32_t var$0 = blockLength(tryCatchBlockNode1);
	return var$0 - blockLength(tryCatchBlockNode2);
}

int32_t TryCatchBlockSorter$1::blockLength($TryCatchBlockNode* tryCatchBlockNode) {
	int32_t startIndex = $nc(this->this$0->instructions)->indexOf($nc(tryCatchBlockNode)->start);
	int32_t endIndex = this->this$0->instructions->indexOf(tryCatchBlockNode->end);
	return endIndex - startIndex;
}

int32_t TryCatchBlockSorter$1::compare(Object$* tryCatchBlockNode1, Object$* tryCatchBlockNode2) {
	return this->compare($cast($TryCatchBlockNode, tryCatchBlockNode1), $cast($TryCatchBlockNode, tryCatchBlockNode2));
}

TryCatchBlockSorter$1::TryCatchBlockSorter$1() {
}

$Class* TryCatchBlockSorter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter;", nullptr, $FINAL | $SYNTHETIC, $field(TryCatchBlockSorter$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter;)V", nullptr, 0, $method(TryCatchBlockSorter$1, init$, void, $TryCatchBlockSorter*)},
		{"blockLength", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;)I", nullptr, $PRIVATE, $method(TryCatchBlockSorter$1, blockLength, int32_t, $TryCatchBlockNode*)},
		{"compare", "(Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;)I", nullptr, $PUBLIC, $virtualMethod(TryCatchBlockSorter$1, compare, int32_t, $TryCatchBlockNode*, $TryCatchBlockNode*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TryCatchBlockSorter$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter",
		"visitEnd",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter"
	};
	$loadClass(TryCatchBlockSorter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TryCatchBlockSorter$1);
	});
	return class$;
}

$Class* TryCatchBlockSorter$1::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk