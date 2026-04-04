#include <java/util/Hashtable$Enumerator.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
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
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	$var($Hashtable$Entry, et, this->entry);
	int32_t i = this->index;
	$var($Hashtable$EntryArray, t, this->table);
	while (et == nullptr && i > 0) {
		$assign(et, $nc(t)->get(--i));
	}
	$set(this, entry, et);
	this->index = i;
	if (et != nullptr) {
		$var($Hashtable$Entry, e, $set(this, lastReturned, this->entry));
		$set(this, entry, $nc(e)->next);
		return this->type == 0 ? e->key : (this->type == 1 ? e->value : $of(e));
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
	return nextElement();
}

void Hashtable$Enumerator::remove() {
	$useLocalObjectStack();
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
		int32_t index = $mod(($nc(this->lastReturned)->hash & 0x7fffffff), $nc(tab)->length);
		$var($Hashtable$Entry, e, tab->get(index));
		{
			$var($Hashtable$Entry, prev, nullptr);
			for (; e != nullptr; $assign(prev, e), $assign(e, e->next)) {
				if (e == this->lastReturned) {
					if (prev == nullptr) {
						tab->set(index, e->next);
					} else {
						$set(prev, next, e->next);
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
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/Hashtable;IZ)V", nullptr, 0, $method(Hashtable$Enumerator, init$, void, $Hashtable*, int32_t, bool)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$Enumerator, hasMoreElements, bool)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$Enumerator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Hashtable$Enumerator, next, $Object*)},
		{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Hashtable$Enumerator, nextElement, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Hashtable$Enumerator, remove, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Hashtable$Enumerator", "java.util.Hashtable", "Enumerator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Hashtable$Enumerator",
		"java.lang.Object",
		"java.util.Enumeration,java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;Ljava/util/Iterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Hashtable"
	};
	$loadClass(Hashtable$Enumerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Hashtable$Enumerator));
	});
	return class$;
}

$Class* Hashtable$Enumerator::class$ = nullptr;

	} // util
} // java