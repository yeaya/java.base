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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/org/objectweb/asm/tree/MethodNode;", nullptr, $FINAL | $SYNTHETIC, $field(MethodNode$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/MethodNode;I)V", nullptr, 0, $method(MethodNode$1, init$, void, $MethodNode*, int32_t)},
		{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodNode$1, add, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.org.objectweb.asm.tree.MethodNode",
		"visitAnnotationDefault",
		"()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.tree.MethodNode$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.MethodNode$1",
		"java.util.ArrayList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/ArrayList<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.tree.MethodNode"
	};
	$loadClass(MethodNode$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MethodNode$1));
	});
	return class$;
}

$Class* MethodNode$1::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk