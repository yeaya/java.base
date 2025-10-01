#include <java/util/Collections$CheckedMap$CheckedEntrySet$1.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet$CheckedEntry.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collections$CheckedMap$CheckedEntrySet = ::java::util::Collections$CheckedMap$CheckedEntrySet;
using $Collections$CheckedMap$CheckedEntrySet$CheckedEntry = ::java::util::Collections$CheckedMap$CheckedEntrySet$CheckedEntry;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

class Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0 : public $Consumer {
	$class(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Collections$CheckedMap$CheckedEntrySet$1* inst, $Consumer* action) {
		$set(this, inst$, inst);
		$set(this, action, action);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->lambda$forEachRemaining$0(action, $cast($Map$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0>());
	}
	Collections$CheckedMap$CheckedEntrySet$1* inst$ = nullptr;
	$Consumer* action = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0, inst$)},
	{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0, action)},
	{}
};
$MethodInfo Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CheckedMap$CheckedEntrySet$1;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::*)(Collections$CheckedMap$CheckedEntrySet$1*,$Consumer*)>(&Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::class$ = nullptr;

$FieldInfo _Collections$CheckedMap$CheckedEntrySet$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$CheckedMap$CheckedEntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedMap$CheckedEntrySet$1, this$0)},
	{"val$i", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedMap$CheckedEntrySet$1, val$i)},
	{}
};

$MethodInfo _Collections$CheckedMap$CheckedEntrySet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$CheckedMap$CheckedEntrySet;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Collections$CheckedMap$CheckedEntrySet$1::*)($Collections$CheckedMap$CheckedEntrySet*,$Iterator*)>(&Collections$CheckedMap$CheckedEntrySet$1::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"lambda$forEachRemaining$0", "(Ljava/util/function/Consumer;Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Collections$CheckedMap$CheckedEntrySet$1::*)($Consumer*,$Map$Entry*)>(&Collections$CheckedMap$CheckedEntrySet$1::lambda$forEachRemaining$0))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$CheckedMap$CheckedEntrySet$1_EnclosingMethodInfo_ = {
	"java.util.Collections$CheckedMap$CheckedEntrySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Collections$CheckedMap$CheckedEntrySet$1_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedMap", "java.util.Collections", "CheckedMap", $PRIVATE | $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet", "java.util.Collections$CheckedMap", "CheckedEntrySet", $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$CheckedMap$CheckedEntrySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedMap$CheckedEntrySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$CheckedMap$CheckedEntrySet$1_FieldInfo_,
	_Collections$CheckedMap$CheckedEntrySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	&_Collections$CheckedMap$CheckedEntrySet$1_EnclosingMethodInfo_,
	_Collections$CheckedMap$CheckedEntrySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedMap$CheckedEntrySet$1($Class* clazz) {
	return $of($alloc(Collections$CheckedMap$CheckedEntrySet$1));
}

void Collections$CheckedMap$CheckedEntrySet$1::init$($Collections$CheckedMap$CheckedEntrySet* this$0, $Iterator* val$i) {
	$set(this, this$0, this$0);
	$set(this, val$i, val$i);
}

bool Collections$CheckedMap$CheckedEntrySet$1::hasNext() {
	return $nc(this->val$i)->hasNext();
}

void Collections$CheckedMap$CheckedEntrySet$1::remove() {
	$nc(this->val$i)->remove();
}

$Object* Collections$CheckedMap$CheckedEntrySet$1::next() {
	return $of($Collections$CheckedMap$CheckedEntrySet::checkedEntry($cast($Map$Entry, $($nc(this->val$i)->next())), this->this$0->valueType));
}

void Collections$CheckedMap$CheckedEntrySet$1::forEachRemaining($Consumer* action) {
	$nc(this->val$i)->forEachRemaining(static_cast<$Consumer*>($$new(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0, this, action)));
}

void Collections$CheckedMap$CheckedEntrySet$1::lambda$forEachRemaining$0($Consumer* action, $Map$Entry* e) {
	$nc(action)->accept($($Collections$CheckedMap$CheckedEntrySet::checkedEntry(e, this->this$0->valueType)));
}

Collections$CheckedMap$CheckedEntrySet$1::Collections$CheckedMap$CheckedEntrySet$1() {
}

$Class* Collections$CheckedMap$CheckedEntrySet$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::classInfo$.name)) {
			return Collections$CheckedMap$CheckedEntrySet$1$$Lambda$lambda$forEachRemaining$0::load$(name, initialize);
		}
	}
	$loadClass(Collections$CheckedMap$CheckedEntrySet$1, name, initialize, &_Collections$CheckedMap$CheckedEntrySet$1_ClassInfo_, allocate$Collections$CheckedMap$CheckedEntrySet$1);
	return class$;
}

$Class* Collections$CheckedMap$CheckedEntrySet$1::class$ = nullptr;

	} // util
} // java