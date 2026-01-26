#include <java/lang/ProcessEnvironment$StringEntrySet$1.h>

#include <java/lang/ProcessEnvironment$StringEntry.h>
#include <java/lang/ProcessEnvironment$StringEntrySet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringEntry = ::java::lang::ProcessEnvironment$StringEntry;
using $ProcessEnvironment$StringEntrySet = ::java::lang::ProcessEnvironment$StringEntrySet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringEntrySet$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/ProcessEnvironment$StringEntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringEntrySet$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;>;", 0, $field(ProcessEnvironment$StringEntrySet$1, i)},
	{}
};

$MethodInfo _ProcessEnvironment$StringEntrySet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ProcessEnvironment$StringEntrySet;)V", nullptr, 0, $method(ProcessEnvironment$StringEntrySet$1, init$, void, $ProcessEnvironment$StringEntrySet*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$1, hasNext, bool)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$1, remove, void)},
	{}
};

$EnclosingMethodInfo _ProcessEnvironment$StringEntrySet$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessEnvironment$StringEntrySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ProcessEnvironment$StringEntrySet$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringEntrySet", "java.lang.ProcessEnvironment", "StringEntrySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$StringEntrySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringEntrySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ProcessEnvironment$StringEntrySet$1_FieldInfo_,
	_ProcessEnvironment$StringEntrySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	&_ProcessEnvironment$StringEntrySet$1_EnclosingMethodInfo_,
	_ProcessEnvironment$StringEntrySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringEntrySet$1($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringEntrySet$1));
}

void ProcessEnvironment$StringEntrySet$1::init$($ProcessEnvironment$StringEntrySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->s)->iterator());
}

bool ProcessEnvironment$StringEntrySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$StringEntrySet$1::next() {
	return $of($new($ProcessEnvironment$StringEntry, $cast($Map$Entry, $($nc(this->i)->next()))));
}

void ProcessEnvironment$StringEntrySet$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$StringEntrySet$1::ProcessEnvironment$StringEntrySet$1() {
}

$Class* ProcessEnvironment$StringEntrySet$1::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringEntrySet$1, name, initialize, &_ProcessEnvironment$StringEntrySet$1_ClassInfo_, allocate$ProcessEnvironment$StringEntrySet$1);
	return class$;
}

$Class* ProcessEnvironment$StringEntrySet$1::class$ = nullptr;

	} // lang
} // java