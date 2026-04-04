#include <java/lang/ProcessEnvironment$StringValues$1.h>
#include <java/lang/ProcessEnvironment$StringValues.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringValues = ::java::lang::ProcessEnvironment$StringValues;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;

namespace java {
	namespace lang {

void ProcessEnvironment$StringValues$1::init$($ProcessEnvironment$StringValues* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->c)->iterator());
}

bool ProcessEnvironment$StringValues$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$StringValues$1::next() {
	return $of($$sure($ProcessEnvironment$Value, $nc(this->i)->next())->toString());
}

void ProcessEnvironment$StringValues$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$StringValues$1::ProcessEnvironment$StringValues$1() {
}

$Class* ProcessEnvironment$StringValues$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/ProcessEnvironment$StringValues;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringValues$1, this$0)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/ProcessEnvironment$Value;>;", 0, $field(ProcessEnvironment$StringValues$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessEnvironment$StringValues;)V", nullptr, 0, $method(ProcessEnvironment$StringValues$1, init$, void, $ProcessEnvironment$StringValues*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues$1, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessEnvironment$StringValues",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$StringValues", "java.lang.ProcessEnvironment", "StringValues", $PRIVATE | $STATIC},
		{"java.lang.ProcessEnvironment$StringValues$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$StringValues$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$StringValues$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$StringValues$1);
	});
	return class$;
}

$Class* ProcessEnvironment$StringValues$1::class$ = nullptr;

	} // lang
} // java