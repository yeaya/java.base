#include <jdk/internal/org/objectweb/asm/commons/TryCatchBlockSorter.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
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
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
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

$MethodInfo _TryCatchBlockSorter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TryCatchBlockSorter::*)($MethodVisitor*,int32_t,$String*,$String*,$String*,$StringArray*)>(&TryCatchBlockSorter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(TryCatchBlockSorter::*)(int32_t,$MethodVisitor*,int32_t,$String*,$String*,$String*,$StringArray*)>(&TryCatchBlockSorter::init$))},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TryCatchBlockSorter_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TryCatchBlockSorter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter",
	"jdk.internal.org.objectweb.asm.tree.MethodNode",
	nullptr,
	nullptr,
	_TryCatchBlockSorter_MethodInfo_,
	nullptr,
	nullptr,
	_TryCatchBlockSorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1"
};

$Object* allocate$TryCatchBlockSorter($Class* clazz) {
	return $of($alloc(TryCatchBlockSorter));
}

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
	$useLocalCurrentObjectStackCache();
	$Collections::sort(this->tryCatchBlocks, $$new($TryCatchBlockSorter$1, this));
	for (int32_t i = 0; i < $nc(this->tryCatchBlocks)->size(); ++i) {
		$nc(($cast($TryCatchBlockNode, $($nc(this->tryCatchBlocks)->get(i)))))->updateIndex(i);
	}
	if (this->mv != nullptr) {
		accept(this->mv);
	}
}

TryCatchBlockSorter::TryCatchBlockSorter() {
}

$Class* TryCatchBlockSorter::load$($String* name, bool initialize) {
	$loadClass(TryCatchBlockSorter, name, initialize, &_TryCatchBlockSorter_ClassInfo_, allocate$TryCatchBlockSorter);
	return class$;
}

$Class* TryCatchBlockSorter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk