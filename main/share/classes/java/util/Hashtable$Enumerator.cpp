#include <java/util/Hashtable$Enumerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable$Entry.h>
#include <java/util/Hashtable.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Hashtable$EntryArray = $Array<::java::util::Hashtable$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Hashtable$Entry = ::java::util::Hashtable$Entry;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _Hashtable$Enumerator_FieldInfo_[] = {
	{"this$0", "Ljava/util/Hashtable;", nullptr, $FINAL | $SYNTHETIC, $field(Hashtable$Enumerator, this$0)},
	{"table", "[Ljava/util/Hashtable$Entry;", "[Ljava/util/Hashtable$Entry<**>;", $FINAL, $field(Hashtable$Enumerator, table)},
	{"index", "I", nullptr, 0, $field(Hashtable$Enumerator, index)},
	{"entry", "Ljava/util/Hashtable$Entry;", "Ljava/util/Hashtable$Entry<**>;", 0, $field(Hashtable$Enumerator, entry)},
	{"lastReturned", "Ljava/util/Hashtable$Entry;", "Ljava/util/Hashtable$Entry<**>;", 0, $field(Hashtable$Enumerator, lastReturned)},
	{"type", "I", nullptr, $FINAL, $field(Hashtable$Enumerator, type)},
	{"iterator", "Z", nullptr, $FINAL, $field(Hashtable$Enumerator, iterator)},
	{"expectedModCount", "I", nullptr, $PROTECTED, $field(Hashtable$Enumerator, expectedModCount)},
	{}
};

$MethodInfo _Hashtable$Enumerator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Hashtable;IZ)V", nullptr, 0, $method(static_cast<void(Hashtable$Enumerator::*)($Hashtable*,int32_t,bool)>(&Hashtable$Enumerator::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Hashtable$Enumerator_InnerClassesInfo_[] = {
	{"java.util.Hashtable$Enumerator", "java.util.Hashtable", "Enumerator", $PRIVATE},
	{}
};

$ClassInfo _Hashtable$Enumerator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Hashtable$Enumerator",
	"java.lang.Object",
	"java.util.Enumeration,java.util.Iterator",
	_Hashtable$Enumerator_FieldInfo_,
	_Hashtable$Enumerator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;Ljava/util/Iterator<TT;>;",
	nullptr,
	_Hashtable$Enumerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Hashtable"
};

$Object* allocate$Hashtable$Enumerator($Class* clazz) {
	return $of($alloc(Hashtable$Enumerator));
}

int32_t Hashtable$Enumerator::hashCode() {
	 return this->$Enumeration::hashCode();
}

bool Hashtable$Enumerator::equals(Object$* obj) {
	 return this->$Enumeration::equals(obj);
}

$Object* Hashtable$Enumerator::clone() {
	 return this->$Enumeration::clone();
}

$String* Hashtable$Enumerator::toString() {
	 return this->$Enumeration::toString();
}

void Hashtable$Enumerator::finalize() {
	this->$Enumeration::finalize();
}

void Hashtable$Enumerator::init$($Hashtable* this$0, int32_t type, bool iterator) {
	$set(this, this$0, this$0);
	$set(this, table, this->this$0->table);
	this->index = $nc(this->table)->length;
	this->expectedModCount = this->this$0->modCount;
	this->type = type;
	this->iterator = iterator;
}

bool Hashtable$Enumerator::hasMoreElements() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable$Entry, e, this->entry);
	int32_t i = this->index;
	$var($Hashtable$EntryArray, t, this->table);
	while (e == nullptr && i > 0) {
		$assign(e, $nc(t)->get(--i));
	}
	$set(this, entry, e);
	this->index = i;
	return e != nullptr;
}

$Object* Hashtable$Enumerator::nextElement() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable$Entry, et, this->entry);
	int32_t i = this->index;
	$var($Hashtable$EntryArray, t, this->table);
	while (et == nullptr && i > 0) {
		$assign(et, $nc(t)->get(--i));
	}
	$set(this, entry, et);
	this->index = i;
	if (et != nullptr) {
		$var($Hashtable$Entry, e, $assignField(this, lastReturned, this->entry));
		$set(this, entry, $nc(e)->next);
		return $of(this->type == 0 ? e->key : (this->type == 1 ? e->value : $of(e)));
	}
	$throwNew($NoSuchElementException, "Hashtable Enumerator"_s);
}

bool Hashtable$Enumerator::hasNext() {
	return hasMoreElements();
}

$Object* Hashtable$Enumerator::next() {
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	return $of(nextElement());
}

void Hashtable$Enumerator::remove() {
	$useLocalCurrentObjectStackCache();
	if (!this->iterator) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->lastReturned == nullptr) {
		$throwNew($IllegalStateException, "Hashtable Enumerator"_s);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	$synchronized(this->this$0) {
		$var($Hashtable$EntryArray, tab, this->this$0->table);
		int32_t index = $mod(((int32_t)($nc(this->lastReturned)->hash & (uint32_t)0x7FFFFFFF)), $nc(tab)->length);
		$var($Hashtable$Entry, e, tab->get(index));
		{
			$var($Hashtable$Entry, prev, nullptr);
			for (; e != nullptr; $assign(prev, e), $assign(e, $nc(e)->next)) {
				if (e == this->lastReturned) {
					if (prev == nullptr) {
						tab->set(index, e->next);
					} else {
						$set($nc(prev), next, e->next);
					}
					++this->expectedModCount;
					$set(this, lastReturned, nullptr);
					++this->this$0->modCount;
					--this->this$0->count;
					return;
				}
			}
		}
		$throwNew($ConcurrentModificationException);
	}
}

Hashtable$Enumerator::Hashtable$Enumerator() {
}

$Class* Hashtable$Enumerator::load$($String* name, bool initialize) {
	$loadClass(Hashtable$Enumerator, name, initialize, &_Hashtable$Enumerator_ClassInfo_, allocate$Hashtable$Enumerator);
	return class$;
}

$Class* Hashtable$Enumerator::class$ = nullptr;

	} // util
} // java