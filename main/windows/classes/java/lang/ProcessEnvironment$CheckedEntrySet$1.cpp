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
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$CheckedEntrySet$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/ProcessEnvironment$CheckedEntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$CheckedEntrySet$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", 0, $field(ProcessEnvironment$CheckedEntrySet$1, i)},
	{}
};

$MethodInfo _ProcessEnvironment$CheckedEntrySet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ProcessEnvironment$CheckedEntrySet;)V", nullptr, 0, $method(ProcessEnvironment$CheckedEntrySet$1, init$, void, $ProcessEnvironment$CheckedEntrySet*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, hasNext, bool)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet$1, remove, void)},
	{}
};

$EnclosingMethodInfo _ProcessEnvironment$CheckedEntrySet$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessEnvironment$CheckedEntrySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ProcessEnvironment$CheckedEntrySet$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$CheckedEntrySet", "java.lang.ProcessEnvironment", "CheckedEntrySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$CheckedEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$CheckedEntrySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$CheckedEntrySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ProcessEnvironment$CheckedEntrySet$1_FieldInfo_,
	_ProcessEnvironment$CheckedEntrySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	&_ProcessEnvironment$CheckedEntrySet$1_EnclosingMethodInfo_,
	_ProcessEnvironment$CheckedEntrySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$CheckedEntrySet$1($Class* clazz) {
	return $of($alloc(ProcessEnvironment$CheckedEntrySet$1));
}

void ProcessEnvironment$CheckedEntrySet$1::init$($ProcessEnvironment$CheckedEntrySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->s)->iterator());
}

bool ProcessEnvironment$CheckedEntrySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$CheckedEntrySet$1::next() {
	return $of($new($ProcessEnvironment$CheckedEntry, $cast($Map$Entry, $($nc(this->i)->next()))));
}

void ProcessEnvironment$CheckedEntrySet$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$CheckedEntrySet$1::ProcessEnvironment$CheckedEntrySet$1() {
}

$Class* ProcessEnvironment$CheckedEntrySet$1::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$CheckedEntrySet$1, name, initialize, &_ProcessEnvironment$CheckedEntrySet$1_ClassInfo_, allocate$ProcessEnvironment$CheckedEntrySet$1);
	return class$;
}

$Class* ProcessEnvironment$CheckedEntrySet$1::class$ = nullptr;

	} // lang
} // java