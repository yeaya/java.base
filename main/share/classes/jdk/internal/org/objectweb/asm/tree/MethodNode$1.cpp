#include <jdk/internal/org/objectweb/asm/tree/MethodNode$1.h>

#include <java/util/ArrayList.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $MethodNode = ::jdk::internal::org::objectweb::asm$::tree::MethodNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _MethodNode$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/org/objectweb/asm/tree/MethodNode;", nullptr, $FINAL | $SYNTHETIC, $field(MethodNode$1, this$0)},
	{}
};

$MethodInfo _MethodNode$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/MethodNode;I)V", nullptr, 0, $method(MethodNode$1, init$, void, $MethodNode*, int32_t)},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodNode$1, add, bool, Object$*)},
	{}
};

$EnclosingMethodInfo _MethodNode$1_EnclosingMethodInfo_ = {
	"jdk.internal.org.objectweb.asm.tree.MethodNode",
	"visitAnnotationDefault",
	"()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;"
};

$InnerClassInfo _MethodNode$1_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.tree.MethodNode$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodNode$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.MethodNode$1",
	"java.util.ArrayList",
	nullptr,
	_MethodNode$1_FieldInfo_,
	_MethodNode$1_MethodInfo_,
	"Ljava/util/ArrayList<Ljava/lang/Object;>;",
	&_MethodNode$1_EnclosingMethodInfo_,
	_MethodNode$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.tree.MethodNode"
};

$Object* allocate$MethodNode$1($Class* clazz) {
	return $of($alloc(MethodNode$1));
}

void MethodNode$1::init$($MethodNode* this$0, int32_t initialCapacity) {
	$set(this, this$0, this$0);
	$ArrayList::init$(initialCapacity);
}

bool MethodNode$1::add(Object$* o) {
	$set(this->this$0, annotationDefault, o);
	return $ArrayList::add(o);
}

MethodNode$1::MethodNode$1() {
}

$Class* MethodNode$1::load$($String* name, bool initialize) {
	$loadClass(MethodNode$1, name, initialize, &_MethodNode$1_ClassInfo_, allocate$MethodNode$1);
	return class$;
}

$Class* MethodNode$1::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk