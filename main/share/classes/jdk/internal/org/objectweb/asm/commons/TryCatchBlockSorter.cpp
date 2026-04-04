#include <jdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter$1.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TryCatchBlockNode.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TryCatchBlockSorter$1 = ::jdk::internal::org::objectweb::asm$::commons::TryCatchBlockSorter$1;
using $MethodNode = ::jdk::internal::org::objectweb::asm$::tree::MethodNode;
using $TryCatchBlockNode = ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

void TryCatchBlockSorter::init$($MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	TryCatchBlockSorter::init$($Opcodes::ASM8, methodVisitor, access, name, descriptor, signature, exceptions);
	if ($of(this)->getClass() != TryCatchBlockSorter::class$) {
		$throwNew($IllegalStateException);
	}
}

void TryCatchBlockSorter::init$(int32_t api, $MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$MethodNode::init$(api, access, name, descriptor, signature, exceptions);
	$set(this, mv, methodVisitor);
}

void TryCatchBlockSorter::visitEnd() {
	$useLocalObjectStack();
	$Collections::sort(this->tryCatchBlocks, $$new($TryCatchBlockSorter$1, this));
	for (int32_t i = 0; i < $nc(this->tryCatchBlocks)->size(); ++i) {
		$$sure($TryCatchBlockNode, this->tryCatchBlocks->get(i))->updateIndex(i);
	}
	if (this->mv != nullptr) {
		accept(this->mv);
	}
}

TryCatchBlockSorter::TryCatchBlockSorter() {
}

$Class* TryCatchBlockSorter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TryCatchBlockSorter, init$, void, $MethodVisitor*, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(TryCatchBlockSorter, init$, void, int32_t, $MethodVisitor*, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(TryCatchBlockSorter, visitEnd, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter",
		"jdk.internal.org.objectweb.asm.tree.MethodNode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1"
	};
	$loadClass(TryCatchBlockSorter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TryCatchBlockSorter);
	});
	return class$;
}

$Class* TryCatchBlockSorter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk