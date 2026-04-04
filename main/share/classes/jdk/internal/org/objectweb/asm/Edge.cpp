#include <jdk/internal/org/objectweb/asm/Edge.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jcpp.h>

#undef EXCEPTION
#undef JUMP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

void Edge::init$(int32_t info, $Label* successor, Edge* nextEdge) {
	this->info = info;
	$set(this, successor, successor);
	$set(this, nextEdge, nextEdge);
}

Edge::Edge() {
}

$Class* Edge::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JUMP", "I", nullptr, $STATIC | $FINAL, $constField(Edge, JUMP)},
		{"EXCEPTION", "I", nullptr, $STATIC | $FINAL, $constField(Edge, EXCEPTION)},
		{"info", "I", nullptr, $FINAL, $field(Edge, info)},
		{"successor", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $field(Edge, successor)},
		{"nextEdge", "Ljdk/internal/org/objectweb/asm/Edge;", nullptr, 0, $field(Edge, nextEdge)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Edge;)V", nullptr, 0, $method(Edge, init$, void, int32_t, $Label*, Edge*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.Edge",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Edge, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Edge);
	});
	return class$;
}

$Class* Edge::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk