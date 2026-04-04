#include <jdk/internal/org/objectweb/asm/tree/analysis/Subroutine.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/tree/JumpInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $JumpInsnNode = ::jdk::internal::org::objectweb::asm$::tree::JumpInsnNode;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

void Subroutine::init$($LabelNode* start, int32_t maxLocals, $JumpInsnNode* caller) {
	$set(this, start, start);
	$set(this, localsUsed, $new($booleans, maxLocals));
	$set(this, callers, $new($ArrayList));
	$nc(this->callers)->add(caller);
}

void Subroutine::init$(Subroutine* subroutine) {
	$set(this, start, $nc(subroutine)->start);
	$set(this, localsUsed, $cast($booleans, $nc(subroutine->localsUsed)->clone()));
	$set(this, callers, $new($ArrayList, subroutine->callers));
}

bool Subroutine::merge(Subroutine* subroutine) {
	$useLocalObjectStack();
	bool changed = false;
	for (int32_t i = 0; i < $nc(this->localsUsed)->length; ++i) {
		if ($nc($nc(subroutine)->localsUsed)->get(i) && !this->localsUsed->get(i)) {
			this->localsUsed->set(i, true);
			changed = true;
		}
	}
	if ($nc(subroutine)->start == this->start) {
		for (int32_t i = 0; i < $nc(subroutine->callers)->size(); ++i) {
			$var($JumpInsnNode, caller, $cast($JumpInsnNode, subroutine->callers->get(i)));
			if (!$nc(this->callers)->contains(caller)) {
				this->callers->add(caller);
				changed = true;
			}
		}
	}
	return changed;
}

Subroutine::Subroutine() {
}

$Class* Subroutine::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $FINAL, $field(Subroutine, start)},
		{"localsUsed", "[Z", nullptr, $FINAL, $field(Subroutine, localsUsed)},
		{"callers", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/JumpInsnNode;>;", $FINAL, $field(Subroutine, callers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;ILjdk/internal/org/objectweb/asm/tree/JumpInsnNode;)V", nullptr, 0, $method(Subroutine, init$, void, $LabelNode*, int32_t, $JumpInsnNode*)},
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Subroutine;)V", nullptr, 0, $method(Subroutine, init$, void, Subroutine*)},
		{"merge", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Subroutine;)Z", nullptr, $PUBLIC, $method(Subroutine, merge, bool, Subroutine*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.analysis.Subroutine",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Subroutine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Subroutine);
	});
	return class$;
}

$Class* Subroutine::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk