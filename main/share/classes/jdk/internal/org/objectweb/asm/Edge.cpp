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

$FieldInfo _Edge_FieldInfo_[] = {
	{"JUMP", "I", nullptr, $STATIC | $FINAL, $constField(Edge, JUMP)},
	{"EXCEPTION", "I", nullptr, $STATIC | $FINAL, $constField(Edge, EXCEPTION)},
	{"info", "I", nullptr, $FINAL, $field(Edge, info)},
	{"successor", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $field(Edge, successor)},
	{"nextEdge", "Ljdk/internal/org/objectweb/asm/Edge;", nullptr, 0, $field(Edge, nextEdge)},
	{}
};

$MethodInfo _Edge_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Edge;)V", nullptr, 0, $method(static_cast<void(Edge::*)(int32_t,$Label*,Edge*)>(&Edge::init$))},
	{}
};

$ClassInfo _Edge_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Edge",
	"java.lang.Object",
	nullptr,
	_Edge_FieldInfo_,
	_Edge_MethodInfo_
};

$Object* allocate$Edge($Class* clazz) {
	return $of($alloc(Edge));
}

void Edge::init$(int32_t info, $Label* successor, Edge* nextEdge) {
	this->info = info;
	$set(this, successor, successor);
	$set(this, nextEdge, nextEdge);
}

Edge::Edge() {
}

$Class* Edge::load$($String* name, bool initialize) {
	$loadClass(Edge, name, initialize, &_Edge_ClassInfo_, allocate$Edge);
	return class$;
}

$Class* Edge::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk