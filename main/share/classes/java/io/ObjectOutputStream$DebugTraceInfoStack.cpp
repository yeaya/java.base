#include <java/io/ObjectOutputStream$DebugTraceInfoStack.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/CharSequence.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $StringJoiner = ::java::util::StringJoiner;

namespace java {
	namespace io {

void ObjectOutputStream$DebugTraceInfoStack::init$() {
	$set(this, stack, $new($ArrayList));
}

void ObjectOutputStream$DebugTraceInfoStack::clear() {
	this->stack->clear();
}

void ObjectOutputStream$DebugTraceInfoStack::pop() {
	this->stack->remove(this->stack->size() - 1);
}

void ObjectOutputStream$DebugTraceInfoStack::push($String* entry) {
	this->stack->add($$str({"\t- "_s, entry}));
}

$String* ObjectOutputStream$DebugTraceInfoStack::toString() {
	$useLocalObjectStack();
	$var($StringJoiner, sj, $new($StringJoiner, "\n"_s));
	for (int32_t i = this->stack->size() - 1; i >= 0; --i) {
		sj->add($$cast($CharSequence, this->stack->get(i)));
	}
	return sj->toString();
}

ObjectOutputStream$DebugTraceInfoStack::ObjectOutputStream$DebugTraceInfoStack() {
}

$Class* ObjectOutputStream$DebugTraceInfoStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stack", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ObjectOutputStream$DebugTraceInfoStack, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectOutputStream$DebugTraceInfoStack, init$, void)},
		{"clear", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$DebugTraceInfoStack, clear, void)},
		{"pop", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$DebugTraceInfoStack, pop, void)},
		{"push", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ObjectOutputStream$DebugTraceInfoStack, push, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$DebugTraceInfoStack, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$DebugTraceInfoStack", "java.io.ObjectOutputStream", "DebugTraceInfoStack", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectOutputStream$DebugTraceInfoStack",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$DebugTraceInfoStack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$DebugTraceInfoStack);
	});
	return class$;
}

$Class* ObjectOutputStream$DebugTraceInfoStack::class$ = nullptr;

	} // io
} // java