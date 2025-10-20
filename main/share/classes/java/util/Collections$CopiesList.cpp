#include <java/util/Collections$CopiesList.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef SIZE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1Array = ::java::lang::reflect::Array;
using $AbstractList = ::java::util::AbstractList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $BaseStream = ::java::util::stream::BaseStream;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;
using $JavaObjectInputStreamAccess = ::jdk::internal::access::JavaObjectInputStreamAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

class Collections$CopiesList$$Lambda$lambda$stream$0 : public $IntFunction {
	$class(Collections$CopiesList$$Lambda$lambda$stream$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(Collections$CopiesList* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t i) override {
		 return $nc(inst$)->lambda$stream$0(i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CopiesList$$Lambda$lambda$stream$0>());
	}
	Collections$CopiesList* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CopiesList$$Lambda$lambda$stream$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CopiesList$$Lambda$lambda$stream$0, inst$)},
	{}
};
$MethodInfo Collections$CopiesList$$Lambda$lambda$stream$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CopiesList;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$CopiesList$$Lambda$lambda$stream$0::*)(Collections$CopiesList*)>(&Collections$CopiesList$$Lambda$lambda$stream$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$CopiesList$$Lambda$lambda$stream$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CopiesList$$Lambda$lambda$stream$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* Collections$CopiesList$$Lambda$lambda$stream$0::load$($String* name, bool initialize) {
	$loadClass(Collections$CopiesList$$Lambda$lambda$stream$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CopiesList$$Lambda$lambda$stream$0::class$ = nullptr;

$FieldInfo _Collections$CopiesList_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Collections$CopiesList, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CopiesList, serialVersionUID)},
	{"n", "I", nullptr, $FINAL, $field(Collections$CopiesList, n)},
	{"element", "Ljava/lang/Object;", "TE;", $FINAL, $field(Collections$CopiesList, element)},
	{}
};

$MethodInfo _Collections$CopiesList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(ILjava/lang/Object;)V", "(ITE;)V", 0, $method(static_cast<void(Collections$CopiesList::*)(int32_t,Object$*)>(&Collections$CopiesList::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"lambda$stream$0", "(I)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Collections$CopiesList::*)(int32_t)>(&Collections$CopiesList::lambda$stream$0))},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Collections$CopiesList::*)($ObjectInputStream*)>(&Collections$CopiesList::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CopiesList_InnerClassesInfo_[] = {
	{"java.util.Collections$CopiesList", "java.util.Collections", "CopiesList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$CopiesList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CopiesList",
	"java.util.AbstractList",
	"java.util.RandomAccess,java.io.Serializable",
	_Collections$CopiesList_FieldInfo_,
	_Collections$CopiesList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;Ljava/io/Serializable;",
	nullptr,
	_Collections$CopiesList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CopiesList($Class* clazz) {
	return $of($alloc(Collections$CopiesList));
}

$String* Collections$CopiesList::toString() {
	 return this->$AbstractList::toString();
}

$Object* Collections$CopiesList::clone() {
	 return this->$AbstractList::clone();
}

void Collections$CopiesList::finalize() {
	this->$AbstractList::finalize();
}

bool Collections$CopiesList::$assertionsDisabled = false;

void Collections$CopiesList::init$(int32_t n, Object$* e) {
	$AbstractList::init$();
	if (!Collections$CopiesList::$assertionsDisabled && !(n >= 0)) {
		$throwNew($AssertionError);
	}
	this->n = n;
	$set(this, element, e);
}

int32_t Collections$CopiesList::size() {
	return this->n;
}

bool Collections$CopiesList::contains(Object$* obj) {
	return this->n != 0 && $Collections::eq(obj, this->element);
}

int32_t Collections$CopiesList::indexOf(Object$* o) {
	return contains(o) ? 0 : -1;
}

int32_t Collections$CopiesList::lastIndexOf(Object$* o) {
	return contains(o) ? this->n - 1 : -1;
}

$Object* Collections$CopiesList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= this->n) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->n)}));
	}
	return $of(this->element);
}

$ObjectArray* Collections$CopiesList::toArray() {
	$var($ObjectArray, a, $new($ObjectArray, this->n));
	if (this->element != nullptr) {
		$Arrays::fill(a, 0, this->n, this->element);
	}
	return a;
}

$ObjectArray* Collections$CopiesList::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	int32_t n = this->n;
	if ($nc(a)->length < n) {
		$assign(a, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), n)));
		if (this->element != nullptr) {
			$Arrays::fill(a, 0, n, this->element);
		}
	} else {
		$Arrays::fill(a, 0, n, this->element);
		if (a->length > n) {
			a->set(n, nullptr);
		}
	}
	return a;
}

$List* Collections$CopiesList::subList(int32_t fromIndex, int32_t toIndex) {
	$useLocalCurrentObjectStackCache();
	if (fromIndex < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"fromIndex = "_s, $$str(fromIndex)}));
	}
	if (toIndex > this->n) {
		$throwNew($IndexOutOfBoundsException, $$str({"toIndex = "_s, $$str(toIndex)}));
	}
	if (fromIndex > toIndex) {
		$throwNew($IllegalArgumentException, $$str({"fromIndex("_s, $$str(fromIndex), ") > toIndex("_s, $$str(toIndex), ")"_s}));
	}
	return $new(Collections$CopiesList, toIndex - fromIndex, this->element);
}

int32_t Collections$CopiesList::hashCode() {
	if (this->n == 0) {
		return 1;
	}
	int32_t pow = 31;
	int32_t sum = 1;
	for (int32_t i = $Integer::numberOfLeadingZeros(this->n) + 1; i < $Integer::SIZE; ++i) {
		sum *= pow + 1;
		pow *= pow;
		if (($sl(this->n, i)) < 0) {
			pow *= 31;
			sum = sum * 31 + 1;
		}
	}
	return pow + sum * (this->element == nullptr ? 0 : $nc($of(this->element))->hashCode());
}

bool Collections$CopiesList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	{
		$var(Collections$CopiesList, other, nullptr);
		bool var$0 = $instanceOf(Collections$CopiesList, o);
		if (var$0) {
			$assign(other, $cast(Collections$CopiesList, o));
			var$0 = true;
		}
		if (var$0) {
			return this->n == $nc(other)->n && (this->n == 0 || $Collections::eq(this->element, $nc(other)->element));
		}
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	int32_t remaining = this->n;
	$var($Object, e, this->element);
	$var($Iterator, itr, $nc(($cast($List, o)))->iterator());
	if (e == nullptr) {
		while ($nc(itr)->hasNext() && remaining-- > 0) {
			if (itr->next() != nullptr) {
				return false;
			}
		}
	} else {
		while ($nc(itr)->hasNext() && remaining-- > 0) {
			if (!$nc($of(e))->equals($(itr->next()))) {
				return false;
			}
		}
	}
	return remaining == 0 && !$nc(itr)->hasNext();
}

$Stream* Collections$CopiesList::stream() {
	$useLocalCurrentObjectStackCache();
	return $nc($($IntStream::range(0, this->n)))->mapToObj(static_cast<$IntFunction*>($$new(Collections$CopiesList$$Lambda$lambda$stream$0, this)));
}

$Stream* Collections$CopiesList::parallelStream() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($IntStream::range(0, this->n)))->parallel()))->mapToObj(static_cast<$IntFunction*>($$new(Collections$CopiesList$$Lambda$lambda$stream$0, this)));
}

$Spliterator* Collections$CopiesList::spliterator() {
	return $nc($(stream()))->spliterator();
}

void Collections$CopiesList::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	$load($ObjectArray);
	$nc($($SharedSecrets::getJavaObjectInputStreamAccess()))->checkArray(ois, $getClass($ObjectArray), this->n);
}

$Object* Collections$CopiesList::lambda$stream$0(int32_t i) {
	return $of(this->element);
}

void clinit$Collections$CopiesList($Class* class$) {
	$load($Collections);
	Collections$CopiesList::$assertionsDisabled = !$Collections::class$->desiredAssertionStatus();
}

Collections$CopiesList::Collections$CopiesList() {
}

$Class* Collections$CopiesList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Collections$CopiesList$$Lambda$lambda$stream$0::classInfo$.name)) {
			return Collections$CopiesList$$Lambda$lambda$stream$0::load$(name, initialize);
		}
	}
	$loadClass(Collections$CopiesList, name, initialize, &_Collections$CopiesList_ClassInfo_, clinit$Collections$CopiesList, allocate$Collections$CopiesList);
	return class$;
}

$Class* Collections$CopiesList::class$ = nullptr;

	} // util
} // java