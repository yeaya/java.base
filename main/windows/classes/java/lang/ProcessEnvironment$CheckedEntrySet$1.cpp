#include <java/lang/ProcessEnvironment$CheckedEntrySet$1.h>
#include <java/lang/ProcessEnvironment$CheckedEntry.h>
#include <java/lang/ProcessEnvironment$CheckedEntrySet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$CheckedEntry = ::java::lang::ProcessEnvironment$CheckedEntry;
using $ProcessEnvironment$CheckedEntrySet = ::java::lang::ProcessEnvironment$CheckedEntrySet;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

void ProcessEnvironment$CheckedEntrySet$1::init$($ProcessEnvironment$CheckedEntrySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->s)->iterator());
}

bool ProcessEnvironment$CheckedEntrySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$CheckedEntrySet$1::next() {
	return $new($ProcessEnvironment$CheckedEntry, $$cast($Map$Entry, $nc(this->i)->next()));
}

void ProcessEnvironment$CheckedEntrySet$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$CheckedEntrySet$1::ProcessEnvironment$CheckedEntrySet$1() {
}

$Class* ProcessEnvironment$CheckedEntrySet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/ProcessEnvironment$CheckedEntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$CheckedEntrySet$1, this$0)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", 0, $field(ProcessEnvironment$CheckedEntrySet$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessEnvironment$CheckedEntrySet;)V", nullptr, 0, $method(ProcessEnvironment$CheckedEntrySet$1, init$, void, $ProcessEnvironment$CheckedEntrySet*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, hasNext, bool)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessEnvironment$CheckedEntrySet",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$CheckedEntrySet", "java.lang.ProcessEnvironment", "CheckedEntrySet", $PRIVATE | $STATIC},
		{"java.lang.ProcessEnvironment$CheckedEntrySet$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$CheckedEntrySet$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$CheckedEntrySet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$CheckedEntrySet$1);
	});
	return class$;
}

$Class* ProcessEnvironment$CheckedEntrySet$1::class$ = nullptr;

	} // lang
} // java