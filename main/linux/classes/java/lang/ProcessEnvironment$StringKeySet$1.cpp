#include <java/lang/ProcessEnvironment$StringKeySet$1.h>
#include <java/lang/ProcessEnvironment$StringKeySet.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringKeySet = ::java::lang::ProcessEnvironment$StringKeySet;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;

namespace java {
	namespace lang {

void ProcessEnvironment$StringKeySet$1::init$($ProcessEnvironment$StringKeySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->s)->iterator());
}

bool ProcessEnvironment$StringKeySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$StringKeySet$1::next() {
	return $of($$sure($ProcessEnvironment$Variable, $nc(this->i)->next())->toString());
}

void ProcessEnvironment$StringKeySet$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$StringKeySet$1::ProcessEnvironment$StringKeySet$1() {
}

$Class* ProcessEnvironment$StringKeySet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/ProcessEnvironment$StringKeySet;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringKeySet$1, this$0)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/ProcessEnvironment$Variable;>;", 0, $field(ProcessEnvironment$StringKeySet$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessEnvironment$StringKeySet;)V", nullptr, 0, $method(ProcessEnvironment$StringKeySet$1, init$, void, $ProcessEnvironment$StringKeySet*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringKeySet$1, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringKeySet$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringKeySet$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessEnvironment$StringKeySet",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$StringKeySet", "java.lang.ProcessEnvironment", "StringKeySet", $PRIVATE | $STATIC},
		{"java.lang.ProcessEnvironment$StringKeySet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$StringKeySet$1",
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
	$loadClass(ProcessEnvironment$StringKeySet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$StringKeySet$1);
	});
	return class$;
}

$Class* ProcessEnvironment$StringKeySet$1::class$ = nullptr;

	} // lang
} // java