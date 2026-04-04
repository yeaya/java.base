#include <sun/net/www/MessageHeader$HeaderIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <sun/net/www/MessageHeader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $MessageHeader = ::sun::net::www::MessageHeader;

namespace sun {
	namespace net {
		namespace www {

void MessageHeader$HeaderIterator::init$($MessageHeader* this$0, $String* k, Object$* lock) {
	$set(this, this$0, this$0);
	this->index = 0;
	this->next$ = -1;
	this->haveNext = false;
	$set(this, key, k);
	$set(this, lock, lock);
}

bool MessageHeader$HeaderIterator::hasNext() {
	$synchronized(this->lock) {
		if (this->haveNext) {
			return true;
		}
		while (this->index < this->this$0->nkeys) {
			if ($nc(this->key)->equalsIgnoreCase($nc(this->this$0->keys)->get(this->index))) {
				this->haveNext = true;
				this->next$ = this->index++;
				return true;
			}
			++this->index;
		}
		return false;
	}
}

$Object* MessageHeader$HeaderIterator::next() {
	$synchronized(this->lock) {
		if (this->haveNext) {
			this->haveNext = false;
			return $of($nc(this->this$0->values)->get(this->next$));
		}
		if (hasNext()) {
			return next();
		} else {
			$throwNew($NoSuchElementException, "No more elements"_s);
		}
	}
}

void MessageHeader$HeaderIterator::remove() {
	$throwNew($UnsupportedOperationException, "remove not allowed"_s);
}

MessageHeader$HeaderIterator::MessageHeader$HeaderIterator() {
}

$Class* MessageHeader$HeaderIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/MessageHeader;", nullptr, $FINAL | $SYNTHETIC, $field(MessageHeader$HeaderIterator, this$0)},
		{"index", "I", nullptr, 0, $field(MessageHeader$HeaderIterator, index)},
		{"next", "I", nullptr, 0, $field(MessageHeader$HeaderIterator, next$)},
		{"key", "Ljava/lang/String;", nullptr, 0, $field(MessageHeader$HeaderIterator, key)},
		{"haveNext", "Z", nullptr, 0, $field(MessageHeader$HeaderIterator, haveNext)},
		{"lock", "Ljava/lang/Object;", nullptr, 0, $field(MessageHeader$HeaderIterator, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/MessageHeader;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MessageHeader$HeaderIterator, init$, void, $MessageHeader*, $String*, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(MessageHeader$HeaderIterator, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MessageHeader$HeaderIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(MessageHeader$HeaderIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.MessageHeader$HeaderIterator", "sun.net.www.MessageHeader", "HeaderIterator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.MessageHeader$HeaderIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.MessageHeader"
	};
	$loadClass(MessageHeader$HeaderIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageHeader$HeaderIterator);
	});
	return class$;
}

$Class* MessageHeader$HeaderIterator::class$ = nullptr;

		} // www
	} // net
} // sun